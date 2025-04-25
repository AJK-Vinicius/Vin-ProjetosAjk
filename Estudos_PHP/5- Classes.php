//PHP = Personal home page
//
//
//
//


<?php

class pessoa{
    public $nome;
    public $idade;

    public function _construct($nome,$idade){
        $this->nome = $nome;
        $this->idade = $idade;
    }

    public function priNomeIdade(){
        echo $this->nome;
        echo '<br>';
        echo $this->idade;
    }
}


$pessoa= new pessoa('Vinícius', '18');
$pessoa->priNomeIdade();
echo '<br>';

$pessoa2= new pessoa('Vagner', '48');
$pessoa2->priNomeIdade();
echo '<br>';

$pessoa2= new pessoa('Virginia', '47');
$pessoa2->priNomeIdade();

?>