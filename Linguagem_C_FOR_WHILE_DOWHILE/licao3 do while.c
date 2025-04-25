#include <stdio.h> 
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");	
	
	
	int i;
	i=5;
	
	
	do{
		printf("%d",i);
		i+1;
		
	}
	while(i<=200);
			
	return 0;
}

