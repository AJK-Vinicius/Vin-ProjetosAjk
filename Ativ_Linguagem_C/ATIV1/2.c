#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int v1, v2, v3, v4, media;
	
	printf("Digite o valor do carro 1: ");
	scanf("%d", &v1);
	printf("Digite o valor do carro 2: ");
	scanf("%d", &v2);
	printf("Digite o valor do carro 3: ");
	scanf("%d", &v3);
	printf("Digite o valor do carro 4: ");
	scanf("%d", &v4);
			
	media=(v1+v2+v3+v4)/4;
	
	
	printf("Média das concessionárias: %d", media);
	
	return 0;
}
