#include <stdio.h>
#include <locale.h>

//funções

int maior(int n1, int n2){
	if(n1>n2){
		return n1;
	}else{
		return n2;
	}

}
	


//Principal

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//variaveis
	
	int resultado,n1, n2,n3;
	
	//entrada
	printf("Digite um número:");
	scanf("%d", &n1);
	printf("Digite um número:");
	scanf("%d", &n2);
	printf("Digite um número:");
	scanf("%d", &n3);
	
	//Saída
	resultado = maior(n1,n2);
	resultado = maior(resultado,n3);
	printf("\nNúmero maior:%d", resultado);
	return 0;
}
