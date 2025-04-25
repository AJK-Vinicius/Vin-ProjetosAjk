//Biblioteca
#include <locale.h>
#include <stdio.h>

//Caixa principal
int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Variáveis
	int n, i, vetor1[100], vetor2[100], vetor3[100];

	//Entrada
	printf("Qual o numero de elementos dos vetores? ");
	scanf("%d",&n);
	//-------------------------------------------------------------
	while (n<1 || n>100) {
	printf("Valor inválido");
	printf("\nDigite um novo valor: ");
	scanf("%d", &n);}
	//-------------------------------------------------------------
	for (i=0; i<n; i++){
	printf("\nDigite os valores do vetor 1: ");
	scanf ("%d", &vetor1[i]);}
	//-------------------------------------------------------------
	for (i=0; i<n; i++){	
	printf("\nDigite os valores do vetor 2: ");
	scanf ("%d", &vetor2[i]);}	
	//-------------------------------------------------------------

	//Saída
	for(i=0; i<n; i++){
		vetor3[i] = 2 * vetor1[i] - 3 * vetor2[i];
	}	
	//-------------------------------------------------------------		
	for(i=0; i<n; i++){
		printf("\nResultado: %d", vetor3[i]);
	}	
	//-------------------------------------------------------------	
	return 0;
}
