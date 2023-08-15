#include <stdio.h>

int varInt;
int main(){

  printf("\nInsira um valor para uma variável inteira: \n");
  scanf("%d", &varInt);
  printf("\nO valor inserido para a variável foi: %d \n\n", varInt);
  system("pause");
  return 0;
}