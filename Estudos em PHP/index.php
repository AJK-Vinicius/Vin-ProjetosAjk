<!doctype html>
<html lang="pt-br">
<head>
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">

  <title>
    <?php
      if(isset($titulo)) {
        echo $titulo . ' | ';
      } 
    ?>
    StackOverflow
  </title>
</head>
<body>

  <?php include('cabecalho.php') ?>

  <?php echo $conteudo ?>

  <?php include('rodape.php') ?>

</body>
</html>