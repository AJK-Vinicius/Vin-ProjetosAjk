#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	//Declaração de variáveis
	
	int num1, num2;
	
	//Entrada de dados

	printf("Nota 1:"); 
	scanf("%d", &num1);
	printf("Nota 2:"); 
	scanf("%d", &num2);
	
	//Verificação
	
		if (num1 + num2 >=5)
	{printf("Aprovado \n");}
	else { printf("Não aprovado"); }
	
	
	
	return 0;
}
