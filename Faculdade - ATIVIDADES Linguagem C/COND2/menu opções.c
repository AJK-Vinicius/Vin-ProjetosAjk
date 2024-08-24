#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;
    
    printf("Menu de opcoes:\n");
    printf("1- Somar dois numeros.\n");
    printf("2- Multiplicar dois numeros.\n");
    printf("3- Subtrair dois numeros.\n");
    printf("4- Dividir dois numeros.\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1:
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            resultado = num1 + num2;
            printf("Resultado: %.2f", resultado);
            break;
            
        case 2:
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            resultado = num1 * num2;
            printf("Resultado: %.2f", resultado);
            break;
            
        case 3:
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            resultado = num1 - num2;
            printf("Resultado: %.2f", resultado);
            break;
            
        case 4:
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            if(num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f", resultado);
            } else {
                printf("Erro: divisao por zero!");
            }
            break;
            
        default:
            printf("Opcao invalida!");
    }
    
    return 0;
}
