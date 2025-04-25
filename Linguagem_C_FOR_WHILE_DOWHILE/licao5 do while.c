#include <stdio.h> 
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");	
	
	
	int i;
	i=2;
	
	
	do{
		printf("%d",i);
		i = i++;
		
	}
	while(i<=20);
			
	return 0;
}

