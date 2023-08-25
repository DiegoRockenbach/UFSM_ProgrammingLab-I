#include <stdio.h>
#include <math.h>

float a;
int main(){

  printf("\nInsira um número: \n");
  scanf("%f", &a);
  if (a>0) {
    a = 1/a;
    printf("\nO inverso do número inserido é %.2f\n\n", a);
  }
  else {
    a = fabs(a);

    printf("\nO valor absoluto do número inserido é %.2f\n\n", a);
  }

  system ("pause");
  return 0;
}