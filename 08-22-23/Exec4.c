#include <stdio.h>

float pagHora, horasMes, salarioBruto, salarioLiquido, IR, INSS, contSind;
int main(){

  printf("\nPor favor, insira o valor em reais que você recebe por hora trabalhada: \n");
  scanf("%f", &pagHora);
  printf("\nAgora, insira quantas horas você trabalha no mês: \n");
  scanf("%f", &horasMes);
  salarioBruto = pagHora * horasMes;
  IR = 0.11*salarioBruto;
  INSS = 0.08*salarioBruto;
  contSind = 0.05*salarioBruto;
  salarioLiquido = salarioBruto - (IR + INSS + contSind);
  printf("\nDeste modo, seu salário mensal bruto seria de R$ %.2f\n\n", salarioBruto);
  printf("\nE, aplicando sobre seu salário bruto o desconto de 15%% (R$ %.2f) do IR, 8%% (R$ %.2f) do INSS e 5%% (R$ %.2f) da contribuição sindical...\n", IR, INSS, contSind);
  printf("\nSeu salário líquido mensal seria de R$ %.2f\n\n", salarioLiquido);

  system("pause");
  return 0;
}