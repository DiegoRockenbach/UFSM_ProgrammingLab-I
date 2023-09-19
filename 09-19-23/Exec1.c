#include <stdio.h>

int main(){

  float n, soma = 0;

  do {
    printf("\nInsira quantos valores positivos desejar: (caso deseja encerrar a inserção, insira um valor negativo)\n");
    scanf("%f", &n);
    if (n > 0) {
      soma = soma + n;
    }
  } while (n >= 0);

  printf("\nSoma total dos valores = %.2f\n\n", soma);

  system("pause");
  return 0;
}