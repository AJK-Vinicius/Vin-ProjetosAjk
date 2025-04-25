<?php
include_once("conn.php");

$method = $_SERVER["REQUEST_METHOD"];

if ($method === "POST" && isset($_POST['cpf'], $_POST['nome'], $_POST['endereco'])) {
    $cpf = $_POST['cpf'];
    $nome = $_POST['nome'];
    $endereco = $_POST['endereco'];

    // Verificar se o cliente já existe no banco de dados
    $checkCustomer = $conn->prepare("SELECT id FROM info WHERE cpf = :cpf");
    $checkCustomer->bindParam(":cpf", $cpf);
    $checkCustomer->execute();
    $existingCustomer = $checkCustomer->fetch(PDO::FETCH_ASSOC);

    if ($existingCustomer) {
        $infoId = $existingCustomer['id']; // Usar o ID do cliente existente
    } else {
        // Inserir informações do cliente
        $insertInfo = $conn->prepare("INSERT INTO info (cpf, nome, endereco) VALUES (:cpf, :nome, :endereco)");
        $insertInfo->bindParam(":cpf", $cpf);
        $insertInfo->bindParam(":nome", $nome);
        $insertInfo->bindParam(":endereco", $endereco);
        $insertInfo->execute();

        // Obter o ID do cliente inserido
        $infoId = $conn->lastInsertId();
    }

    $data = $_POST;

    $borda = $data["borda"];
    $massa = $data["massa"];
    $sabores = $data["sabores"];

    // validação de sabores máximos
    if (count($sabores) > 3) {
        $_SESSION["msg"] = "Selecione no máximo 3 sabores!";
        $_SESSION["status"] = "warning";
    } else {
        // salvando borda e massa na pizza
        $stmt = $conn->prepare("INSERT INTO pizzas (borda_id, massa_id) VALUES (:borda, :massa)");

        // filtrando inputs
        $stmt->bindParam(":borda", $borda, PDO::PARAM_INT);
        $stmt->bindParam(":massa", $massa, PDO::PARAM_INT);
        $stmt->execute();

        // resgatando último id da última pizza
        $pizzaId = $conn->lastInsertId();

        $stmt = $conn->prepare("INSERT INTO pizza_sabor (pizza_id, sabor_id) VALUES (:pizza, :sabor)");

        // repetição até terminar de salvar todos os sabores
        foreach ($sabores as $sabor) {
            // filtrando os inputs
            $stmt->bindParam(":pizza", $pizzaId, PDO::PARAM_INT);
            $stmt->bindParam(":sabor", $sabor, PDO::PARAM_INT);
            $stmt->execute();
        }

        // criar o pedido da pizza com o info_id
        $stmt = $conn->prepare("INSERT INTO pedidos (pizza_id, status_id, info_id) VALUES (:pizza, :status, :info)");

        // status -> sempre inicia com 1, que é em produção
        $statusId = 1;

        // filtrar inputs
        $stmt->bindParam(":pizza", $pizzaId);
        $stmt->bindParam(":status", $statusId);
        $stmt->bindParam(":info", $infoId);
        $stmt->execute();

        // Exibir mensagem de sucesso
        $_SESSION["msg"] = "Pedido realizado com sucesso";
        $_SESSION["status"] = "success";

        // Retorna para página inicial
        header("Location: ..");
        exit(); // Encerrar a execução após o redirecionamento
    }
} else {
    // Resgate dos dados, montagem do pedido
    if ($method === "GET") {

        $bordasQuery = $conn->query("SELECT * FROM bordas;");
        $bordas = $bordasQuery->fetchAll();

        $massasQuery = $conn->query("SELECT * FROM massas;");
        $massas = $massasQuery->fetchAll();

        $saboresQuery = $conn->query("SELECT * FROM sabores;");
        $sabores = $saboresQuery->fetchAll();

    } else if ($method === "POST") {

        $data = $_POST;

        $borda = $data["borda"];
        $massa = $data["massa"];
        $sabores = $data["sabores"];

        // validação de sabores máximos
        if (count($sabores) > 3) {
            $_SESSION["msg"] = "Selecione no máximo 3 sabores!";
            $_SESSION["status"] = "warning";
        } else {
            // salvando borda e massa na pizza
            $stmt = $conn->prepare("INSERT INTO pizzas (borda_id, massa_id) VALUES (:borda, :massa)");

            // filtrando inputs
            $stmt->bindParam(":borda", $borda, PDO::PARAM_INT);
            $stmt->bindParam(":massa", $massa, PDO::PARAM_INT);

            $stmt->execute();

            // resgatando último id da última pizza
            $pizzaId = $conn->lastInsertId();

            $stmt = $conn->prepare("INSERT INTO pizza_sabor (pizza_id, sabor_id) VALUES (:pizza, :sabor)");

            // repetição até terminar de salvar todos os sabores
            foreach ($sabores as $sabor) {
                // filtrando os inputs
                $stmt->bindParam(":pizza", $pizzaId, PDO::PARAM_INT);
                $stmt->bindParam(":sabor", $sabor, PDO::PARAM_INT);
                $stmt->execute();
            }

            // criar o pedido da pizza
            $stmt = $conn->prepare("INSERT INTO pedidos (pizza_id, status_id, info_id) VALUES (:pizza, :status, :info)");

            // status -> sempre inicia com 1, que é em produção
            $statusId = 1;

            // filtrar inputs
            $stmt->bindParam(":pizza", $pizzaId);
            $stmt->bindParam(":status", $statusId);
            // Adicione aqui a lógica para definir o infoId, se necessário
            $stmt->bindParam(":info", $infoId);

            $stmt->execute();

            // Exibir mensagem de sucesso
            $_SESSION["msg"] = "Pedido realizado com sucesso";
            $_SESSION["status"] = "success";

            // Retorna para página inicial
            header("Location: ..");
            exit(); // Encerrar a execução após o redirecionamento
        }
    }
}
?>
