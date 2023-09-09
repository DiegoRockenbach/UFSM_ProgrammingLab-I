#include <stdio.h>

int dataIPVA(int numVeiculo) {
  int dataVenc;

  numVeiculo = numVeiculo%100;
  if (numVeiculo == 10) {
    dataVenc = numVeiculo;
  }
  else {
    numVeiculo = numVeiculo%10;
    dataVenc = numVeiculo;
  }

  return dataVenc;
}

int main() {
  int mes, numVeiculo;

  printf("\nInsira o número correspondente ao mês atual: (1 para janeiro, 2 para fevereiro, 3 para março, etc.)\n");
  scanf("%d", &mes);
  printf("\nAgora, insira quatro dígitos da placa de determinado veículo: (ex: 4125)\n");
  scanf("%d", &numVeiculo);

  dataIPVA(numVeiculo);
  if (dataIPVA(numVeiculo) == mes) {
    printf("\nO seu IPVA vai vencer neste mês! Pague-o o mais cedo possível\n\n");
  }
  else {
    printf("\n\nA data de vencimento do seu IPVA é do mês %d\n\n", dataIPVA(numVeiculo));
  }

  system("pause");
  return 0;
}