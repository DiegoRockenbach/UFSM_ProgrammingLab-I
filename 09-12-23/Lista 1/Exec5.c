#include <stdio.h>

int main(){

  int dividendo = 1, divisor = 1, cont, s;

  for (cont = 1; cont < 50; cont++) {
    dividendo += 2;
    divisor += 1;
  }
  s = dividendo/divisor;

  printf("\n%d/%d = %d\n\n", dividendo, divisor, s);

  system("pause");
  return 0;
}