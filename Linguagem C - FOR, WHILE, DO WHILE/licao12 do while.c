#include <stdio.h> 
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");	
	
	float notas[60][2];
    float media;
    int aprovados = 0, reprovados = 0, exame = 0;
	int i;
	i=0;
	
	
	do{
		printf("Digite as duas notas do aluno %d: ", i+1);
        scanf("%f %f", &notas[i][0], &notas[i][1]);
        
        // Calcula a média aritmética das notas
        media = (notas[i][0] + notas[i][1]) / 2;
        
        // Classifica o aluno de acordo com a média
        if(media >= 5) {
            printf("Aluno %d aprovado com média %.2f\n", i+1, media);
            aprovados++;
        }
        else if(media < 3) {
            printf("Aluno %d reprovado com média %.2f\n", i+1, media);
            reprovados++;
        }
        else {
            printf("Aluno %d em exame com média %.2f\n", i+1, media);
            exame++;}
		
		// Exibe o total de alunos aprovados, reprovados e em exame
    	printf("Total de alunos aprovados: %d\n", aprovados);
   		printf("Total de alunos reprovados: %d\n", reprovados);
   		printf("Total de alunos em exame: %d\n", exame);
		
	
		i = i++;	
	}
	while(i<60);
			
	return 0;
}

