#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Declara��o de vari�veis
	int i, num, ant, suc;
	
	//Para face
	for(i=1;i<=5;i++){
	
	//Entrada de dados
	printf("Digite um n�mero:"); 
	scanf("%d", &num);
	
	//Verifica��o
	
	ant=num-1;
	suc=num+1;
	
	printf("N�mero anterior: %d\n",ant);
	printf("N�mero atual: %d\n", num);
	printf("N�mero sucessor: %d\n\n\n", suc);
	
}
	return 0;	
}
