#include <stdio.h>

void calculaQuadrado(int num){

  int i = 1, soma = 0, quantImpares = 0;

  while (soma < num) {
    if (i%2 != 0) {
      soma += i;
      quantImpares++;
    }
    i++;
  }

  if (soma == num) {
    printf("\nO número %d é um quadrado perfeito, calculado através da soma de ímpares.\n\n", num);
  }
  else {
    printf("\nO número %d não é um quadrado perfeito.\n\n", num);
  }
}

int main(){

  int num;

  printf("\nInsira um número inteiro, do qual será calculada a raiz através da soma de ímpares: \n");
  scanf("%d", &num);
  calculaQuadrado(num);

  system("pause");
  return 0;
}