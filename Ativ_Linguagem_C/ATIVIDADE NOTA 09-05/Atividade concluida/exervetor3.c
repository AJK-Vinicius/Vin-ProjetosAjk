//Biblioteca
#include <locale.h>
#include <stdio.h>


//Caixa principal
int main() {
    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int i, cont1 = 0, cont2 = 0;
    char vetor1[10], vetor2[10], vetor3[20];
	
	//Entrada
	//-------------------------------------------------------------
    for (i = 0; i < 10; i++) {
        printf("Digite vetor1: ");
        scanf("%s", &vetor1[i]);
        printf("Digite vetor2: ");
        scanf("%s", &vetor2[i]);
    }
	//-------------------------------------------------------------
    for (i = 0; i < 20; i++) {
        if (i % 2 == 0) {
            if (cont2 < 10) {
                vetor3[i] = vetor2[cont2];
                cont2++;
            } else {
                break;
            }
        } else {
            if (cont1 < 10) {
                vetor3[i] = vetor1[cont1];
                cont1++;
            } else {
                break;
            }
        }
    }
	//-------------------------------------------------------------
	//Saída
    for (i = 0; i < cont1 + cont2; i++) {
        printf("\n%c ", vetor3[i]);
    }

    return 0;
}

