#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i, num, ant, suc;
	i=1;
	

	
	while(i<=5){
		
		printf("Digite um número: %d",i);
		scanf("%d", &num);
	
		ant=num-1;
		suc=num+1;
		
		printf("Número anterior: %d\n",ant);
		printf("Número atual: %d\n", num);
		printf("Número sucessor: %d\n\n\n", suc);	
		i++;
		
		
		
	}	
			
	

	return 0; 
}

