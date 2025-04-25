#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i;
	i=5;
	printf("Contando\n");
	
	while(i<=200){
		
		printf("%d",i);	
		i+1;
		
		
		
	}	
			
	

	return 0; 
}

