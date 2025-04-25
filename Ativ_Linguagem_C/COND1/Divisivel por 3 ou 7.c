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
	
	if (num /3 /7)
	{printf("É divisivel por 3 e 7");}
	else { printf("Não é divisivel por 3 e 7"); }
	
	return 0;
}
