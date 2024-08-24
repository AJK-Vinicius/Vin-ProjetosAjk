//biblioteca
#include <stdio.h>
#include <locale.h>


//caixa principal
int main() {
  setlocale(LC_ALL,"portuguese");	
	
  //VARIAVEIS		
  float A[100], aux;
  int i, j;

  // ENTRADA
  for (i = 0; i < 100; i++) {
    printf("Qual o %d valor? ", i + 1);
    scanf("%f", &A[i]);
  }

  //--------------------------------
  for (i = 0; i < 99; i++) {
    for (j = i + 1; j < 100; j++) {
      if (A[i] > A[j]) {
        aux = A[i];
        A[i] = A[j];
        A[j] = aux;
      }
    }
  }
  //--------------------------------	
  // SAIDA
  printf("Vetor em ordem crescente:\n");
  for (i = 0; i < 100; i++) {
    printf("%.2f ", A[i]);
  }

  return 0;
}

