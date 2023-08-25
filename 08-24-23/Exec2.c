#include <stdio.h>

int a;
int main(){

  printf("\nInsira um número: \n");
  scanf("%d", &a);
  if (a>0) {
    printf("\nO valor inserido é um número positivo\n\n");
  }
  if (a<0) {
    printf("\nO valor inserido é um número negativo\n\n");
  }
  if (a==NULL) {
    printf("\nO valor inserido é nulo\n\n");
  }

  system("pause");
  return 0;
}