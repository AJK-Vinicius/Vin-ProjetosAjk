#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	//Declara��o de vari�veis
	
	int num;
	
	//Entrada de dados
	printf("Digite um n�mero:  ");
	scanf ("%d", &num );
	
	
	//Verifica��o
	
	if (num *3)
	{printf("� multiplo de 3");}
	else { printf("N�o � multiplo de 3"); }
	
	return 0;
}
