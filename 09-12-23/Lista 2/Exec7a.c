#include <stdio.h>

int calculaDivisao(int n){

  int i, h = 0;

  for (i = 1; i <= n; i++){
    h = h + 1/i;
  }

  return h;
}

int main(){

  int n;

  printf("\nInsira um número inteiro: \n");
  scanf("%d", &n);

  printf("\nH = %d\n\n", calculaDivisao(n));

  system("pause");
  return 0;
}