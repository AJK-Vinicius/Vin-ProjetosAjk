#include <stdio.h> 
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");	
	
	//Declaração de variaveis
	int i, num, ant, suc;
	i=1;
	
	//Entrada de dados
	do{
		printf("Digite um número: %d",i);
		scanf("%d", &num);
		i = i++;
		
	
		//Verificação
		ant=num-1;
		suc=num+1;
		
		printf("Número anterior: %d\n",ant);
		printf("Número atual: %d\n", num);
		printf("Número sucessor: %d\n\n\n", suc)		
	} while(i<=5);
			
	return 0;
}

