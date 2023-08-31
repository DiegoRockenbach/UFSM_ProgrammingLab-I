#include <stdio.h>

int num;
int main(){

  printf("\nInsira um número inteiro qualquer: \n");
  scanf("%d", &num);

  printf((num%2 == 0) ? "\nO número inserido é par!\n\n" : "\nO número inserido é ímpar!\n\n");

  system("pause");
  return 0;
}