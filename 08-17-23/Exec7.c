#include <stdio.h>

int data, dia, mes, ano, i;
int main(){

  printf("\nInsira uma data no formato ddmmaa: (dia, mês, e ano, sem separação)\n\n");
  scanf("%d", &data);
  dia = data/10000;
  i = data/100;
  mes = i%100;
  ano = data%100;
  printf("\nO dia da data inserida é %02d, o mês da data inserida é %02d, e o ano da data inserida é %02d\n\n", dia, mes, ano);
  
  system("pause");
  return 0;
}