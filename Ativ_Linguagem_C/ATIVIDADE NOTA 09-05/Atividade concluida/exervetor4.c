//Biblioteca
#include <locale.h>
#include <stdio.h>

//Caixa principal
int main() {
	setlocale(LC_ALL, "portuguese");
	
	//Váriaveis
    int x, ipar=0, iimpar=0, somapar=0, somaim=0, i;
    float mediap, mediaim;
    int vetp[100], vetim[100];
	//----------------------------------------------------
	
	//Entrada
    for(i=0; i<=100; i++) {
    	printf("N: ");
        scanf("\n%d", &x);
        if(x%2 == 0) { //par
            ipar++;
            vetp[ipar] = x;
            somapar += x;
        }
        else { //impar
            iimpar++;
            vetim[iimpar] = x;
            somaim += x;
        }
    }
	//-----------------------------------------------------
	
	//Saída
    mediap =  somapar / ipar;
    mediaim = somaim / iimpar;

    printf("Quantidade de pares: %d\n", ipar);
    printf("Media dos pares: %.2f\n", mediap);
    printf("Quantidade de impares: %d\n", iimpar);
    printf("Media dos impares: %.2f\n", mediaim);

    return 0;
}


