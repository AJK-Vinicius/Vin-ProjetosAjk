#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	//Declaração de variáveis
	
	int num;
	
	//Entrada de dados
	printf("Digite sua idade:  ");
	scanf ("%d", &num );
	
	
	//Verificação
	
	if (num >=18)
	{printf("Maior idade");}
	else { printf("Menor idade"); }
	
	return 0;
}
