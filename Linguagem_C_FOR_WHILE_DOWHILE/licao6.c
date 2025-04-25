#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Declaração de variáveis
	int i, num, ant, suc;
	
	//Para face
	for(i=1;i<=5;i++){
	
	//Entrada de dados
	printf("Digite um número:"); 
	scanf("%d", &num);
	
	//Verificação
	
	ant=num-1;
	suc=num+1;
	
	printf("Número anterior: %d\n",ant);
	printf("Número atual: %d\n", num);
	printf("Número sucessor: %d\n\n\n", suc);
	
}
	return 0;	
}
