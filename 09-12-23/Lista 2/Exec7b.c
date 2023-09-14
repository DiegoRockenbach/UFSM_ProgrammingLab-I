#include <stdio.h>

float calculaDivisao(float n){

  float i, h = 0;

  for (i = 1; i <= n; i++){
    h = h + 1/i;
  }

  return h;
}

int main(){

  float n;

  printf("\nInsira um número inteiro: \n");
  scanf("%f", &n);

  printf("\nH = %.2f\n\n", calculaDivisao(n));

  system("pause");
  return 0;
}