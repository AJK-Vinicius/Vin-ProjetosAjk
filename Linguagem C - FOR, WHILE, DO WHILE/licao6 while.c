#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i, num, ant, suc;
	i=1;
	

	
	while(i<=5){
		
		printf("Digite um n�mero: %d",i);
		scanf("%d", &num);
	
		ant=num-1;
		suc=num+1;
		
		printf("N�mero anterior: %d\n",ant);
		printf("N�mero atual: %d\n", num);
		printf("N�mero sucessor: %d\n\n\n", suc);	
		i++;
		
		
		
	}	
			
	

	return 0; 
}

