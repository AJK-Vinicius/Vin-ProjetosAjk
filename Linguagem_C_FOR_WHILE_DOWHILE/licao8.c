#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Declara��o de vari�veis
	int i, sum = 0;
	//Para face
	 for (i = 1; i <= 10; i++) {
        sum += i;
    }
	//Entrada de dados
	printf("A somat�ria dos n�meros de 1 a 10 �: %d\n", sum);
	
	//Verifica��o
	
	

	return 0;	
}
