#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Declara��o de vari�veis 
	
	int cod;
			
	//Entrada de dados
	
	printf ("Digite seu c�digo: ");
	scanf ("%d", &cod);
			
	//Verifica��o
	if (cod <1 || cod >5)
	printf ("C�digo inv�lido");
	if (cod==1)
	printf ("Escritur�rio");
	if (cod==2)
	printf ("Secret�ria");
	if (cod==3)
	printf ("Caixa");
	if (cod==4)
	printf ("Gerente");
	if (cod==5)
	printf ("Diretor");
	
	
	return 0;
}

