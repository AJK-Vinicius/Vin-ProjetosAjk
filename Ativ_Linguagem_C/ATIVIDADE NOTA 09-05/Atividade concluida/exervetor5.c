//biblioteca
#include <stdio.h>
#include <locale.h>

//Caixa principal
int main() {
	setlocale(LC_ALL,"portuguese");
	//Váriaveis
    int Gabarito[13];
    int Apostador[14];
    int cont = 0;
    int i;
	
	//Entrada
    printf("Entrada do Gabarito:\n");
    for (i = 0; i < 13; i++) {
        printf("Entre com o resultado do jogo %d: ", i+1);
        scanf("%d", &Gabarito[i]);
    }
	//--------------------------------------------------------
    printf("\nDigite o numero da aposta: ");
    scanf("%d", &Apostador[13]);
	//--------------------------------------------------------
    printf("Entre com os valores da aposta:\n");
    for (i = 0; i < 13; i++) {
        printf("Entre com os valores do jogo %d: ", i+1);
        scanf("%d", &Apostador[i]);
    }
	//-------------------------------------------------------
    for (i = 0; i < 13; i++) {
        if (Apostador[i] == Gabarito[i]) {
            cont++;
        }
    }
	//---------------------------------------------------------
	
	//saída
    printf("\nO jogador %d fez %d pontos\n", Apostador[13], cont);
    if (cont == 13) {
        printf("Ele é um ganhador!!!\n");
    }

    return 0;
}

