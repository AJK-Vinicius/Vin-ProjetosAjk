#include <stdio.h> 
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");	
	
	
	int i , sum = 0;
	i=1;
	
	
	do{
		printf("A somatória dos números de 1 a 10 é: %d\n", sum);
		i++, sum += i;
		
	}
	while(i<=10);
			
	return 0;
}

