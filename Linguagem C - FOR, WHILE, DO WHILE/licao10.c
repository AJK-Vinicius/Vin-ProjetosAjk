#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Declara��o de vari�veis
	int i, num, pares = 0;
	//Para face
	for (i= 1; i <= 30; i++) { 
	//Entrada de dados
	printf("Digite o %d� n�mero: ", i);
        scanf("%d", &num);
        if (num % 2 == 0) {
            pares++;
        }
}
	//Verifica��o
	
    printf("Foram encontrados %d n�meros pares.\n", pares);

	return 0;	
}
