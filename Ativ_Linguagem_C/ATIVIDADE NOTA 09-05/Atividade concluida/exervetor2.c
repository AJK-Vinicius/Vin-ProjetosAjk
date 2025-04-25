//Biblioteca
#include <locale.h>
#include <stdio.h>

//Caixa principal
int main(){
	setlocale(LC_ALL,"portuguese");
	
	
	//Variáveis
	int i;
	char vetor1[3], vetor2 [3], vetor3[6];
	
	//Entrada
	//-------------------------------------------------------------
	printf("Dados do primeiro vetor:");
	for(i=0; i<3; i++){
		printf("\nDigite: ");
		scanf("%s", &vetor1[i]);
	}
	//-------------------------------------------------------------
	printf("\nDados do segundo vetor:");
	for(i=0; i<3; i++){
		printf("\nDigite: ");
		scanf("%s", &vetor2[i]);
	}	
	//-------------------------------------------------------------	

	//Saída
	for(i=0; i<3; i++){
		vetor3[i] = vetor1[i];
 		vetor3[i+3] = vetor2[i];
	}
	//-------------------------------------------------------------		
	for(i=0; i<6; i++){
		printf("\nVetor3: %c", vetor3[i]);
	}	
	//
	return 0;
}

