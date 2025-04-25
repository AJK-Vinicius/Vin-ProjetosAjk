algoritmo "preco"
// Função :
// Autor :
// Data : 03/04/2020
// Seção de Declarações 
var
preco:real

inicio
// Seção de Comandos
escreva("informe o preço: ")
leia(preco)
se preco < 10.0 entao
escreva("barato")
Fimse
se (preco > 40.0) e (preco <= 100.0 entao
escreva( "preço bom" )
Fimse
se preco > 100.0 entao
escreva( "caro" )
Fimse

fimalgoritmo
