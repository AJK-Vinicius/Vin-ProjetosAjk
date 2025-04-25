#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i;
	i=500;
	printf("Contando\n");
	
	while(i>=1){
		
		printf("%d",i);	
		i--;
		
		
		
	}	
			
	

	return 0; 
}
