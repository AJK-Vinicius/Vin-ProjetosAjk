#include <stdio.h>

int main() {
    float altura, media = 0;
	
	int i;
    for ( i = 1; i <= 5; i++) {
        printf("Informe a altura da pessoa %d: ", i);
        scanf("%f", &altura);
        media += altura;
    }

    media /= 5;

    printf("\nA media aritmetica das alturas informadas eh: %.2f\n", media);

    return 0;
}
