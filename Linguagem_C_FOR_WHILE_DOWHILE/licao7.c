#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Declara��o de vari�veis
	float nota1,nota2, media;
	int i;
	
	//Para face
	for(i=1;i<=10;i++){
	
	//Entrada de dados
	printf("Primeira nota:"); 
	scanf("%f", &nota1);
	printf("Segunda nota:"); 
	scanf("%f", &nota2);
	
	//Verifica��o
	
	media=(nota1 + nota2) / 2;
	
	printf("M�dia: %f\n\n\n",media);

	
}
	return 0;	
}
