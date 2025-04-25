#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int valor, total;
	
	printf("Digite o valor do DVD: ");
	scanf("%d", &valor);
	
	total= valor*3;
	
	printf("\nO valor de três DVD'S: %d", total);
	
	
	return 0;
}
