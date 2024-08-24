#include <stdio.h>
#include <locale.h>


//Principal

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//variaveis
	
	int op1, op2, op3, op4;
	
	//entrada
	printf("    Menu de opções:\n");
	printf("    ---------------\n");
	printf("    Opções:\n");
	printf("    ---------------\n");	
	printf("    1.Multiplicar\n");
	printf("    2.Dividir\n");
	printf("    3.Somar\n");
	printf("    4.Subtratir\n\n");
	printf("    Digite sua opção:");
	scanf("%d", &op1, &op2, &op3, &op4);
	
	//saída
		

	return 0;
}
