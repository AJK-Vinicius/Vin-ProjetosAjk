#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i, sum=0;
	i=1;
	printf("Contando\n");
	
	while(i<=10){
		
		printf("A somat�ria dos n�meros de 1 a 10 �: %d\n", sum);
		i++, sum += i;
		
		
		
	}	
			
	

	return 0; 
}
