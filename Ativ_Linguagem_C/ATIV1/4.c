#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float area, raio;
	
	printf("Tamanho do raio: ");
	scanf("%f", &raio);
	
	area=3.4*raio*raio;
	
	printf("Tamanho da área: %f", area);
	
	return 0;
}
