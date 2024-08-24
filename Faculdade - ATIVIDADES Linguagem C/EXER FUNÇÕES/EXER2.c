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
	
	int resultado,n1, n2;
	
	//entrada
	printf("Digite um número:");
	scanf("%d", &n1);
	printf("Digite um número:");
	scanf("%d", &n2);

	
	resultado = maior(n1,n2);
	printf("%d", resultado);
	return 0;
}
