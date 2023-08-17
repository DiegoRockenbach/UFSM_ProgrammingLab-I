#include <stdio.h>

float celsius, fahrenheit;
int main(){

  printf("\nInsira uma temperatura exemplo em graus Celsius: \n\n");
  scanf("%f", &celsius);
  fahrenheit = (celsius*9/5) + 32;
  printf("\n\nA sua temperatura exemplo era de %.1f°C. Convertendo isso para fahrenheit, temos %.1f°F\n\n", celsius, fahrenheit);
  
  system("pause");
  return 0;
}