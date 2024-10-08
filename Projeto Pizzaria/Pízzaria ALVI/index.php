<?php
include_once("header.php");
include_once("process/pizza.php");
?>
<div id="main-banner">
  <h1>Faça seu Pedido</h1>
</div>
<div id="main-container">
  <div class="container">
    <div class="row">
      <div class="col-md-12">   
       
      <h2>Suas Informações:</h2>
        <form method="POST" action="process/pizza.php" id="pizza-form">
        <div class="form-group">
          <label for="cpf">CPF:</label><br>
          <input type="text" id="cpf" name="cpf" required>
        </div>
        <div class="form-group">
          <label for="nome">Nome:</label><br>
          <input type="text" id="nome" name="nome" required> 
        </div>
        <div class="form-group">
          <label for="endereco">Endereço:</label><br>
          <input type="text" id="endereco" name="endereco" required> 
        </div>

        
          <h2>Monte a pizza como desejar:</h2>
          <div class="form-group">
            <label for="borda">Borda:</label>
            <select name="borda" id="borda" class="form-control">
              <option value="">Selecione a borda</option>
              <?php foreach ($bordas as $borda) : ?>
                <option value="<?= $borda["id"] ?>"><?= $borda["tipo"] ?></option>
              <?php endforeach; ?>
            </select>
          </div>
          <div class="form-group">
            <label for="massa">Massa:</label>
            <select name="massa" id="massa" class="form-control">
              <option value="">Selecione a massa</option>
              <?php foreach ($massas as $massa) : ?>
                <option value="<?= $massa["id"] ?>"><?= $massa["tipo"] ?></option>
              <?php endforeach; ?>
            </select>
          </div>
          <div class="form-group">
            <label for="sabores">Sabores: (Máximo 3)</label>
            <select multiple name="sabores[]" id="sabores" class="form-control">
              <?php foreach ($sabores as $sabor) : ?>
                <option value="<?= $sabor["id"] ?>"><?= $sabor["nome"] ?></option>
              <?php endforeach; ?>
            </select>
          </div>
          <div class="form-group">
            <input type="submit" class="btn btn-primary" value="Fazer Pedido!">
          </div>
        </form>
      </div>
    </div>
  </div>
</div>
<script src="./js/script.js"></script>

<script>
  new FormMask(document.querySelector("#cpf"), "___.___.___-__", "_", [".", "-"])
</script>
<?php
include_once("templates/footer.php");
?>