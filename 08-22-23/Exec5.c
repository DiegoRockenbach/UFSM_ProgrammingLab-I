#include <stdio.h>

int a, b, backup;
int main(){

  printf("\nInsira dois valores inteiros para as variáveis 'a' e 'b', respectivamente:\n");
  scanf("%d %d", &a, &b);
  printf("\nOs valores inseridos foram: a=%d b=%d\n", a, b);
  backup = b;
  b = a;
  a = backup;
  printf("\nApós ser realizada a troca de valores, as variáveis estão populadas com: a=%d b=%d\n\n", a, b);

  system("pause");
  return 0;
}