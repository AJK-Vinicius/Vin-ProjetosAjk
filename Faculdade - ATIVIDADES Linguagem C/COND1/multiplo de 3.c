#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	//Declaração de variáveis
	
	int num;
	
	//Entrada de dados
	printf("Digite um número:  ");
	scanf ("%d", &num );
	
	
	//Verificação
	
	if (num *3)
	{printf("É multiplo de 3");}
	else { printf("Não é multiplo de 3"); }
	
	return 0;
}
