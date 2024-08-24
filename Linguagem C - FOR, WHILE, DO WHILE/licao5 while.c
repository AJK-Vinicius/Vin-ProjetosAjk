#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i;
	i=2;
	printf("Contando\n");
	
	while(i<=20){
		
		printf("%d",i);	
		i++;
		
		
		
	}	
			
	

	return 0; 
}

