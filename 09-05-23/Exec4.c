#include <stdio.h>

void gastoDiesel() {
  float kmRodados, precoTotal;

  printf("\nInsira quantos km serão rodados com a van:\n");
  scanf("%f", &kmRodados);

  if (kmRodados < 0 || kmRodados > 900) {
    printf("\nO valor inserido foi inválido!\n\n");
    return 0;
  }

  precoTotal = (kmRodados/10)*2.50;

  if (kmRodados/10 > 45) {
    precoTotal = (kmRodados/10)*2.30;
  }

  printf("\nR$ %.2f.\n\n", precoTotal);
}

int main(){

  gastoDiesel();

  system("pause");
  return 0;
}