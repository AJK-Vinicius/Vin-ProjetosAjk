#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	//Declara��o de variiaveis
	
	int num1, num2;		
		
	//Entrada de dados
	
	printf("Primeiro n�mero:"); 
	scanf("%d", &num1);
	printf("Segundo n�mero:"); 
	scanf("%d", &num2);
		
	//Verifica��o
	
	if (num1 + num2 >10)
	
	
	{ printf ("Soma = %d", num1 + num2 );	}	
		
		
		
		
		
		
		

	
	
	return 0;
}
