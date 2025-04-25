#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Declaração de variáveis 
	
	int id;
			
	//Entrada de dados
	
	printf ("Digite sua idade: ");
	scanf ("%d", &id);
			
	//Verificação
	
	if (id <16){
	printf ("Não eleitor");}
	if (id >=18 && id<=65){
	printf ("Eleitor obrigatório");}
	if (id >=16 && id<18 || id>65 ){
	printf ("Eleitor facutativo");}		
	
	return 0;
}

