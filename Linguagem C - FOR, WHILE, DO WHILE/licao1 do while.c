#include <stdio.h> 
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");	
	
	
	int i;
	i=1;
	
	
	do{
		printf("%d",i);
		i = i+1;
		
	}
	while(i<=25);
			
	return 0;
}

