#include <stdio.h>

#define PI 3.14159

int main(){
  const float DOLLAR = 4.98;
  
  printf("\nValor de PI: %.3f \n\n", PI);
  printf("Valor atual de 1 dólar em reais: R$ %.2f\n\n", DOLLAR);
  
  system("pause");
  return 0;
}