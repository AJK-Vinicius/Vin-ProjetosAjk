#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	
	
    float notas[10][2];
    float media[10];
    float media_total = 0.0;
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite as duas notas do aluno %d:\n", i+1);
        scanf("%f %f", &notas[i][0], &notas[i][1]);
        media[i] = (notas[i][0] + notas[i][1]) / 2.0;
        media_total += media[i];
    }

    printf("M�dias individuais dos alunos:\n");
    for (i = 0; i < 10; i++) {
        printf("Aluno %d: %.2f\n", i+1, media[i]);
    }

    printf("M�dia total da turma: %.2f\n", media_total / 10.0);

    return 0;
}

