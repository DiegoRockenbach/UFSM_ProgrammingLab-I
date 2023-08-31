#include <stdio.h>

int x, y, z;
int main(){

  printf("\nInsira dois valores inteiros que serão atribuídos às variáveis X e Y: \n");
  scanf("%d %d", &x, &y);
  
  z = x > y ? x : y;
  printf("\nO maior valor inserido foi %d.\n\n", z);

  system("pause");
  return 0;
}