#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	//Declaração de variiaveis
	
	int num1, num2;		
		
	//Entrada de dados
	
	printf("Primeiro número:"); 
	scanf("%d", &num1);
	printf("Segundo número:"); 
	scanf("%d", &num2);
		
	//Verificação
	
	if (num1 + num2 >10)
	
	
	{ printf ("Soma = %d", num1 + num2 );	}	
		
		
		
		
		
		
		

	
	
	return 0;
}
