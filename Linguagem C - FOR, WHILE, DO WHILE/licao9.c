#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Declaração de variáveis
	float num1, num2, num3, num4, num5, soma;
	//Para face


	//Entrada de dados
	printf ("Altura da pessoa 1: ");
	scanf ("%f",&num1);
	printf ("\nAltura da pessoa 2: ");
	scanf ("%f",&num2);
	printf ("\nAltura da pessoa 3: ");
	scanf ("%f",&num3);
	printf ("\nAltura da pessoa 4: ");
	scanf ("%f",&num4);
	printf ("\nAltura da pessoa 5: ");
	scanf ("%f",&num5);
	
	//Verificação
	
	soma=(num1+num2+num3+num4+num5)/5;
	printf("\nResultado:%f",soma);

	return 0;	
}
