#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	//Declara��o de vari�veis
	
	int num;
	
	//Entrada de dados
	printf("Digite sua idade:  ");
	scanf ("%d", &num );
	
	
	//Verifica��o
	
	if (num >=18)
	{printf("Maior idade");}
	else { printf("Menor idade"); }
	
	return 0;
}
