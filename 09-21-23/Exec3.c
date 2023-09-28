#include <stdio.h>

void casaDezParImp(int n){
  
  int casaDez;

  casaDez = n%100;
  casaDez = casaDez/10;

  if (casaDez%2 == 0){
    printf("\nO dígito da casa das dezenas do número inserido é %d, e, portanto, é par.\n\n", casaDez);
  }
  else {
    printf("\nO dígito da casa das dezenas do número inserido é %d, e, portanto, é ímpar.\n\n", casaDez);
  }
}

int main(){

  int n, casaDez;
  do {
    printf("\nInsira um número inteiro de 3 dígitos: \n");
    scanf("%d", &n);
    if (n < 100 || n > 999) {
      printf("\nValor inválido inserido!\n\n");
      break;
    }
    else {
      casaDezParImp(n);
    }
  } while (n > 99 || n < 1000);
  

  system("pause");
  return 0;
}