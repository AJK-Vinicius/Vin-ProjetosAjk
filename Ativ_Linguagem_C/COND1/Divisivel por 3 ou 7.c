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
	
	if (num /3 /7)
	{printf("� divisivel por 3 e 7");}
	else { printf("N�o � divisivel por 3 e 7"); }
	
	return 0;
}
