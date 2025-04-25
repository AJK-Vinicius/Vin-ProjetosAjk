#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Declaração de variáveis
	int i, sum = 0;
	//Para face
	 for (i = 1; i <= 10; i++) {
        sum += i;
    }
	//Entrada de dados
	printf("A somatória dos números de 1 a 10 é: %d\n", sum);
	
	//Verificação
	
	

	return 0;	
}
