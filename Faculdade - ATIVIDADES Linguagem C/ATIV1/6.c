#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int x,y, aux;
	
	printf("Digite valor a variavel x: ");
	scanf("%d", &x);
	printf("Digite valor a variavel y: ");
	scanf("%d", &y);
	
	x=aux;
	y=x;
	aux=y;
	
	printf("\nValor a variavel X: %d", x);
	printf("\nValor a variavel y: %d", y);
	
	return 0;
}
