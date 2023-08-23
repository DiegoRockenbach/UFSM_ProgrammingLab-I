#include <stdio.h>

float precoCombust, odometroInic, odometroFinal, distanciaPercorrida, litrosDia, valorPassag, mediaCombust, mediaLucro, gastoDia;
int main(){

  printf("\nInsira a marcação do odômetro ao começo do dia:\n");
  scanf ("%f", &odometroInic);
  printf("\nAgora, insira a marcação do odômetro ao final do dia:\n");
  scanf ("%f", &odometroFinal);
  printf("\nAgora, insira também quantos livros de combustível foram gastos no dia em questão e qual o valor total em reais que recebeu de seus passageiros, respectivamente:\n");
  scanf("%f %f", &litrosDia, &valorPassag);

  precoCombust = 6.99; //Preço do litro de combustível
  distanciaPercorrida = odometroFinal - odometroInic; //Distância percorrida no dia (km)
  mediaCombust = distanciaPercorrida/litrosDia; // Média do consumo de combustível por km rodado (km/l)
  gastoDia = litrosDia*precoCombust; // Quanto foi gasto no dia? (R$)
  mediaLucro = valorPassag - gastoDia;

  printf("\nDeste modo, a média do consumo de combustível por quilômetro rodado foi de %.2f km/l, e o lucro líquido recebido foi de %.2f R$\n\n", mediaCombust, mediaLucro);
  system("pause");
  return 0;
}