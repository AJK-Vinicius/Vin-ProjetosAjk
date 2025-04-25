#include <stdio.h>

int main() {
    float altura, media = 0;
    int i = 1;

    while (i <= 5) {
        printf("Informe a altura da pessoa %d: ", i);
        scanf("%f", &altura);
        media += altura;
        i++;
    }

    media /= 5;

    printf("\nA media aritmetica das alturas informadas eh: %.2f\n", media);

    return 0;
}
