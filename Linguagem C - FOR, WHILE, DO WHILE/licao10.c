#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Declaração de variáveis
	int i, num, pares = 0;
	//Para face
	for (i= 1; i <= 30; i++) { 
	//Entrada de dados
	printf("Digite o %d° número: ", i);
        scanf("%d", &num);
        if (num % 2 == 0) {
            pares++;
        }
}
	//Verificação
	
    printf("Foram encontrados %d números pares.\n", pares);

	return 0;	
}
