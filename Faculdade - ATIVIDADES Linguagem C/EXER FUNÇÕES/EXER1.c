#include <stdio.h>
#include <locale.h>

//fun��es

int soma(int n1, int n2){
	int s = n1+n2;
	
	return s;
}

//Principal

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//variaveis
	
	int s,n1, n2;
	
	//entrada
	printf("Digite um n�mero:");
	scanf("%d", &n1);
	printf("Digite um n�mero:");
	scanf("%d", &n2);

	
	s= soma(n1,n2); //chamada fun�ao
	printf("Resultado:%d",s);
	return 0;
}

