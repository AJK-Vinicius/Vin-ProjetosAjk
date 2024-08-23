<?php
  include_once("header.php");
  include_once("process/orders.php");
?>
<div id="main-container">
  <div class="container">
    <div class="row">
      <div class="col-md-12">
        <h2>Gerenciar pedidos:</h2>
      </div>
      <div class="col-md-12 table-container">
        <table class="table">
          <thead>
            <tr>
              <th scope="col">CPF</th>
              <th scope="col">Nome</th>
              <th scope="col">Endereço</th>
              <th scope="col">Borda</th>
              <th scope="col">Massa</th>
              <th scope="col">Sabores</th>
              <th scope="col">Status</th>
              <th scope="col">Ações</th>
            </tr>
          </thead>
          <tbody>
            <?php if(isset($pizzas) && is_array($pizzas)): ?>
              <?php foreach($pizzas as $pizza): ?>
                <tr>
                  <td><?= $pizza["cpf"] ?></td>
                  <td><?= $pizza["nome"] ?></td>
                  <td><?= $pizza["endereco"] ?></td>
                  <td><?= $pizza["borda"] ?></td>
                  <td><?= $pizza["massa"] ?></td>
                  <td>
                    <ul>
                      <?php foreach($pizza["sabores"] as $sabor): ?>
                        <li><?= $sabor ;?></li>
                      <?php endforeach; ?>
                    </ul>
                  </td>
                  <td>
                    <form action="process/orders.php" method="POST" class="form-group update-form">
                      <input type="hidden" name="type" value="update">
                      <input type="hidden" name="id" value="<?= $pizza["id"] ?>">
                      <select name="status" class="form-control status-input">
                        <?php foreach($status as $s): ?>
                          <option value="<?= $s["id"] ?>" <?php echo ($s["id"] == $pizza["status"]) ? "selected" : ""; ?> ><?= $s["tipo"] ?></option>
                        <?php endforeach; ?>
                      </select>
                      <button type="submit" class="update-btn">
                        <i class="fas fa-sync-alt"></i>
                      </button>
                    </form>
                  </td>
                  <td>
                    <form action="process/orders.php" method="POST">
                      <input type="hidden" name="type" value="delete">
                      <input type="hidden" name="id" value="<?= $pizza["id"] ?>">
                      <button type="submit" class="delete-btn">
                        <i class="fas fa-times"></i>
                      </button>
                    </form>
                  </td>
                </tr>
              <?php endforeach; ?>
            <?php else: ?>
              <tr>
                <td colspan="8">Não há pedidos disponíveis.</td>
              </tr>
            <?php endif; ?>
          </tbody>
        </table>
      </div>
    </div>
  </div>
</div>
<?php
  include_once("templates/footer.php");
?>
