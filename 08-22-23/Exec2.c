#include <stdio.h>

int a, b, c;
float d;
int main(){

  a = 5;
  b = 2;
  c = a/b;
  printf("\nO valor da variável inteira 'c' é de %d\n", c);

  d = (int)a/b;
  printf("\nO valor da variável real 'd' é de %f\n\n", d);

  system ("pause");
  return 0;
}