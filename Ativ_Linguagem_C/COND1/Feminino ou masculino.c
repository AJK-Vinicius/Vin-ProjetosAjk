#include <stdio.h>
#include <locale.h>

int main()

{		
	setlocale(LC_ALL,"portuguese");
	
	//Declara��o de vari�veis
	char sexo;
	
	
	//Entrada de dados
	printf("Digite seu sexo: (M ou F)");
	scanf("%c", &sexo);
	 
	
	//verifica��o
	if(sexo == 'F')
	{ printf("O sexo da pessoa � feminino"); } 
	else { printf("O sexo da pessoa n�o � feminino"); }	
	
	
	
	return 0;
}

