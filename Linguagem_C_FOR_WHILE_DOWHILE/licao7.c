#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Declaração de variáveis
	float nota1,nota2, media;
	int i;
	
	//Para face
	for(i=1;i<=10;i++){
	
	//Entrada de dados
	printf("Primeira nota:"); 
	scanf("%f", &nota1);
	printf("Segunda nota:"); 
	scanf("%f", &nota2);
	
	//Verificação
	
	media=(nota1 + nota2) / 2;
	
	printf("Média: %f\n\n\n",media);

	
}
	return 0;	
}
