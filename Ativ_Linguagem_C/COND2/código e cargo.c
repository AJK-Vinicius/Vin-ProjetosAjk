#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Declaração de variáveis 
	
	int cod;
			
	//Entrada de dados
	
	printf ("Digite seu código: ");
	scanf ("%d", &cod);
			
	//Verificação
	if (cod <1 || cod >5)
	printf ("Código inválido");
	if (cod==1)
	printf ("Escriturário");
	if (cod==2)
	printf ("Secretária");
	if (cod==3)
	printf ("Caixa");
	if (cod==4)
	printf ("Gerente");
	if (cod==5)
	printf ("Diretor");
	
	
	return 0;
}

