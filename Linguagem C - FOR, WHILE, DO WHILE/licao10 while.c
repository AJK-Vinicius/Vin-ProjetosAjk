#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i, num, pares = 0;
	i=1;
	printf("Contando\n");
	
	while(i<=30){
		
		printf("Digite o %d� n�mero: ", i);
        scanf("%d", &num);
        if (num % 2 == 0) {
        pares++;}
	
	
		printf("Foram encontrados %d n�meros pares.\n", pares);
	
		i = i++;
		
		
	}	
			
	

	return 0; 
}

