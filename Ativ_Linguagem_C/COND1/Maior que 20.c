#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	//Declara��o de variaveis 
	int n;
		
	//Entrada de dados
	printf("Digite um n�mero:");
	scanf("%d",&n);
		
	//Verifica��o
	if (n >=20)
	{printf("Maior do que 20");}
	else { printf("Menor do que 20"); }
	
	return 0;
}
