#include <stdio.h>

float calculaDivisao(int n){

  int i;
  float h = 0;

  for (i = 1; i <= n; i++){
    h = (float) h - 1/ (float) i;
  }

  return h;
}

int main(){

  int n;

  printf("\nInsira um número inteiro: \n");
  scanf("%d", &n);

  printf("\nH = %.2f\n\n", calculaDivisao(n));

  system("pause");
  return 0;
}