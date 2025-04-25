#include <stdio.h> 
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");	
	
	float nota1,nota2, media;
	int i;
	i=1;
	
	
	do{
		printf("Primeira nota:"); 
		scanf("%f", &nota1);
		printf("Segunda nota:"); 
		scanf("%f", &nota2);
		i = i+1;
		
		
		media=(nota1 + nota2) / 2;
		printf("Média: %f\n\n\n",media);
	}
	while(i<=10);
			
	return 0;
}

