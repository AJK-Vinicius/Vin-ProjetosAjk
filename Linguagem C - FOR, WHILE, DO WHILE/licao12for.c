#include <locale.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Declaração de váriaveis
	float notas1, notas2, media;
	int i;
	int aprovados=0, reprovados=0, exames=0;
	
	//Para face
	for(i=0; i<3; i++) {
	
	//Entrada de dados
	printf("Digite as duas notas do aluno: ", i+1);
    scanf("%f %f", &notas1, &notas2);
	
	//Saída
	media = (notas1 + notas2) / 2;
	
	if(media >= 5) {
            printf("Aluno %d aprovado com média %.2f\n", i+1, media); aprovados++;
        }
        else if(media < 3) {
            printf("Aluno %d reprovado com média %.2f\n", i+1, media); reprovados++;
          
        }
        else {
            printf("Aluno %d em exame com média %.2f\n", i+1, media); exames++;
          
		}
}
	
	printf("Total de alunos aprovados: %d\n", aprovados);
    printf("Total de alunos reprovados: %d\n", reprovados);
    printf("Total de alunos em exame: %d\n", exames);
	
	return 0;
}
