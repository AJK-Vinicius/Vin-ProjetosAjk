#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int a,b,c,d,s,r;
	
	printf("Digite valor de A: ");
	scanf("%d", &a);
	printf("Digite valor de B: ");
	scanf("%d", &b);	
	printf("Digite valor de C: ");
	scanf("%d", &c);
	
	r=(a+b)*(a+b);
	s=(b+c)*(b+c);
	d=(r+s)/2;
	
	printf("\nResultado: %d", d);
	
		
	return 0;
}
