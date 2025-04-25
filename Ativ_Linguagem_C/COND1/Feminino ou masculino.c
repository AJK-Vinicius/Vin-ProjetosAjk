#include <stdio.h>
#include <locale.h>

int main()

{		
	setlocale(LC_ALL,"portuguese");
	
	//Declaração de variáveis
	char sexo;
	
	
	//Entrada de dados
	printf("Digite seu sexo: (M ou F)");
	scanf("%c", &sexo);
	 
	
	//verificação
	if(sexo == 'F')
	{ printf("O sexo da pessoa é feminino"); } 
	else { printf("O sexo da pessoa não é feminino"); }	
	
	
	
	return 0;
}

