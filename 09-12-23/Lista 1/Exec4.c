#include <stdio.h>

int main(){

  int n, i, checkNotPrimo = 0;

  printf("\nInsira um valor inteiro qualquer: \n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    if (i != n && i != 1) {
      if (n%i==0){
        printf("%d ", i);
        checkNotPrimo = 1;
      }
    }
  }
  if (checkNotPrimo == 1) {
    printf("\n%d não é um número primo!\n\n", n);
  }
  else {
    printf("\n%d é um número primo!\n\n", n);
  }

  system("pause");
  return 0;
}