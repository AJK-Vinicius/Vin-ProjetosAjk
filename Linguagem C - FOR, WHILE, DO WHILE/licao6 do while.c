#include <stdio.h> 
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");	
	
	//Declara��o de variaveis
	int i, num, ant, suc;
	i=1;
	
	//Entrada de dados
	do{
		printf("Digite um n�mero: %d",i);
		scanf("%d", &num);
		i = i++;
		
	
		//Verifica��o
		ant=num-1;
		suc=num+1;
		
		printf("N�mero anterior: %d\n",ant);
		printf("N�mero atual: %d\n", num);
		printf("N�mero sucessor: %d\n\n\n", suc)		
	} while(i<=5);
			
	return 0;
}

