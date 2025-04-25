#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	//Declaração de variaveis 
	int n;
		
	//Entrada de dados
	printf("Digite um número:");
	scanf("%d",&n);
		
	//Verificação
	if (n >=20)
	{printf("Maior do que 20");}
	else { printf("Menor do que 20"); }
	
	return 0;
}
