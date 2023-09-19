#include <stdio.h>

int main(){

  int num, i = 0, quadrado;

  printf("\nInsira um número inteiro e positivo: \n");
  scanf("%d", &num);

  do {
    i++;
    quadrado = i*i;
  } while (quadrado <= num);

  printf("\nO menor inteiro positivo cujo quadrado é maior que o número previamente inserido é %d.\n\n", i);

  system("pause");
  return 0;
}