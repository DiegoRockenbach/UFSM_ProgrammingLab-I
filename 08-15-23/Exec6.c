#include <stdio.h>

int x;
float y;
double z;
int main(){
  printf("\nInsira valores para uma variável inteira, uma variável float e uma variável double, nessa ordem: \n");
  scanf("%d %f %lf", &x, &y, &z);
  printf("\nOs valores inseridos para as variáveis foram, respectivamente, %d, %.3f e %.4lf \n\n", x, y, z);
  
  system("pause");
  return 0;
}