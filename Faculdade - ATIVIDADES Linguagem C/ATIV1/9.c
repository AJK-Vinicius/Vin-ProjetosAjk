#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int salmin, horast, valorh, salbruto, imposto, salliq;
	
	printf("Digite o sal�io minimo: ");
	scanf("%d", &salmin);
	printf("Digite as horas trabalhadas: ");
	scanf("%d", &horast);
	
	valorh=salmin/2;
	salbruto=horast*valorh;
	imposto=salbruto*0.03;
	salliq=salbruto-imposto;
	
	printf("\nSeu sal�rio liquido � de: %d", salliq);
	
	return 0;
}
