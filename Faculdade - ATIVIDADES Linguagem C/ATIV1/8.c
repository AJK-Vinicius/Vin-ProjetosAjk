#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	float pesokg, pesog, consumo1, consumo2, resto, consumototal;
	
	printf("Digite a quantidade em quilos do saco de ração: ");
	scanf("%f", &pesokg);
	
	pesog=pesokg*100;
	
	printf("\nDigite a quantidade de consumo do gato 1: ");
	scanf("%f", &consumo1);
	printf("Digite a quantidade de consumo do gato 2: ");
	scanf("%f", &consumo2);
	
	consumototal=(consumo1+consumo2)*5;
	resto=pesog-consumototal;
	
	printf("\n\nApós cincos dias irá sobrar: %f gramas", resto);		
	return 0;
}
