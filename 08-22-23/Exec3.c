#include <stdio.h>

float base, altura, area;
int main(){

  printf("\nInsira valores para a base e a altura de um triângulo, respectivamente: \n");
  scanf("%f %f", &base, &altura);
  printf("\n\nFormando um triângulo centimétrico com os valores inseridos, sua base seria de %.2fcm e sua altura seria de %.2fcm.\n", base, altura);
  area = (base*altura)/2;
  printf("Deste modo, sua área seria de %.2fcm\n\n\n", area);

  system("pause");
  return 0;
}