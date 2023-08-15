#include <stdio.h>

int varInt;
float varFloat;
int main(){  
  printf("\nInsira dois valores: um para uma variável inteira, e outro para uma variável real, nessa ordem: \n");
  scanf("%d %f", &varInt, &varFloat);
  printf("\nO valor inserido para a variável inteira foi %d, e o valor inserido para a variável real foi %.2f \n\n", varInt, varFloat);
  
  system("pause");
  return 0;
}