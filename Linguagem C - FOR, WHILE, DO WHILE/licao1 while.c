#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i;
	i=1;
	printf("Contando\n");
	
	while(i<=25){
		
		printf("%d",i);	
		i++;
		
		
		
	}	
			
	

	return 0; 
}

