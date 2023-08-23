#include <stdio.h>

int quantCarros, quantCarrosFinalAno, carrosAlugMes;
float diaria, faturamentoAnual, somaMultas, diariaNoMes;
int main(){

  printf("\nInsira a quantidade de carros que a locadora possui e também o valor que ela cobra por diária: \n");
  scanf("%d %f", &quantCarros, &diaria);
  diariaNoMes = diaria*30;
  carrosAlugMes = quantCarros/3;
  faturamentoAnual = (carrosAlugMes*diariaNoMes)*12;
  printf("\nO faturamento anual da locadora é de R$ %.2f\n", faturamentoAnual);
  somaMultas = (carrosAlugMes/10) * (diariaNoMes * 0.1);
  printf("\nO faturamento mensal que a locadora tem com multas é de R$ %.2f\n", somaMultas);
  quantCarrosFinalAno = quantCarros - (quantCarros * 0.05) + quantCarros/8;
  printf("\nAo final do ano, a nova quantidade de carros que a locadora terá é de %d\n\n", quantCarrosFinalAno);

  system("pause");
  return 0;
}