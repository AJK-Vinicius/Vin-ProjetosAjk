#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	//Declara��o de vari�veis
	
	int num1, num2;
	
	//Entrada de dados

	printf("Nota 1:"); 
	scanf("%d", &num1);
	printf("Nota 2:"); 
	scanf("%d", &num2);
	
	//Verifica��o
	
		if (num1 + num2 >=5)
	{printf("Aprovado \n");}
	else { printf("N�o aprovado"); }
	
	
	
	return 0;
}
