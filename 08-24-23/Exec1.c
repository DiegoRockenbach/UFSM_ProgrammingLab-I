#include <stdio.h>

int a, b, bd;
int main(){

  printf("\nInsira dois valores inteiros: \n");
  scanf("%d %d", &a, &b);
  
  if (b>a) {
    bd = a;
    a = b;
    b = bd;
  }
  if (a%b == 0) {
    printf("\n\nOs valores são múltiplos!\n\n");
  }
  else {
    printf("\n\nOs valores não são múltiplos\n\n");
  }

  system("pause");
  return 0;
}