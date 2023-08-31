#include <stdio.h>

float consumo, totalConta;
int main(){

  printf("\nInsira o consumo de água da sua residência, em m³: \n");
  scanf("%f", &consumo);


  if (consumo <= 10) {
    totalConta = 7;
  }
  else if (consumo >= 11 && consumo <= 30) {
    totalConta = 7 + consumo - 10;
  }
  else if (consumo >= 31 && consumo <= 100) {
    totalConta = 7 + 20 + (consumo - 30)*2;
  }
  else if (consumo >= 101) {
    totalConta = 7 + 20 + 140 + (consumo - 100)*5;
  }

  printf("\nO consumo de água mensal de sua residência foi de R$ %.2f\n\n", totalConta);

  system("pause");
  return 0;
}