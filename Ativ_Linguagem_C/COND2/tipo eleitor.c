#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Declara��o de vari�veis 
	
	int id;
			
	//Entrada de dados
	
	printf ("Digite sua idade: ");
	scanf ("%d", &id);
			
	//Verifica��o
	
	if (id <16){
	printf ("N�o eleitor");}
	if (id >=18 && id<=65){
	printf ("Eleitor obrigat�rio");}
	if (id >=16 && id<18 || id>65 ){
	printf ("Eleitor facutativo");}		
	
	return 0;
}

