#include <stdio.h>

int main(){

  int n, i, valAnt, valNovo, resultado;

  printf("\nInsira quantos valores da sequência de Fibonacci deseja visualizar: \n");
  scanf("%d", &n);
  valAnt = 1;
  valNovo = 1;
  for (i = 3; i <= n; i++) {
    if (i == 3) {
      printf("0 1 1 ");  
    }
    else {
      resultado = valAnt+valNovo;
      printf("%d ", resultado);
      valAnt = valNovo;
      valNovo = resultado;
    }
  }
  printf("\n\n");

  system("pause");
  return 0;
}