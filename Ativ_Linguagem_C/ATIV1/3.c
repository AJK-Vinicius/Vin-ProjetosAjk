#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float salario, nsalario, taxa, aumento;
	
	printf("Digite o sal�rio: ");
	scanf("%f", &salario);	
	printf("Digite o percentual de aumento: ");
	scanf("%f", &taxa);	
	
	aumento=(salario*taxa)/100;
	nsalario=salario+aumento;
	
	printf("\nValor do aumento:  %f\n",aumento);
	printf("Novo sal�rio: %f",nsalario);
	
	return 0;
}
