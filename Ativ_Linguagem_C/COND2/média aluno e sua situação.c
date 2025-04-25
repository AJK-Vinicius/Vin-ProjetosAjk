#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Declaração de variáveis 
	
	int nota;
			
	//Entrada de dados
	
	printf ("Digite a média: ");
	scanf ("%d", &nota);
			
	//Verificação
	
	if (nota>=0 && nota <=10)
	printf ("Nota válida");
	else printf ("Nota inválida");
	
	if (nota>=5 && nota<=10)
	printf ("\nAprovado");
	
	if (nota>=3 && nota<=4)
	printf ("\nExame");
		
	if (nota>=0 && nota<=2)
	printf ("\nReprovado");	
		
	return 0;
}















