#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Declara��o de vari�veis 
	
	int nota;
			
	//Entrada de dados
	
	printf ("Digite a m�dia: ");
	scanf ("%d", &nota);
			
	//Verifica��o
	
	if (nota>=0 && nota <=10)
	printf ("Nota v�lida");
	else printf ("Nota inv�lida");
	
	if (nota>=5 && nota<=10)
	printf ("\nAprovado");
	
	if (nota>=3 && nota<=4)
	printf ("\nExame");
		
	if (nota>=0 && nota<=2)
	printf ("\nReprovado");	
		
	return 0;
}















