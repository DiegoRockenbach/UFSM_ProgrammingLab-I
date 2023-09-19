#include <stdio.h>

int main(){

  int quantValores = 0;
  float n, produto = 1;

  do {
    printf("\nInsira quantos valores positivos desejar: (caso deseja encerrar a inserção, insira um valor negativo)\n");
    scanf("%f", &n);
    if (n > 0) {
      produto = produto * n;
      quantValores++;
    }
  } while (n > 0);

  printf("\nProduto de todos os valores: %.2f\nQuantidade de valores multiplicados: %d\n\n", produto, quantValores);

  system("pause");
  return 0;
}