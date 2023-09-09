#include <stdio.h>>

void precoEstacionamento(int h1, int m1, int h2, int m2){
  int diferencaMinutos, horasArredondado;
  float valorPagamento;

  if (h1 < h2) {
    if (m2 >= m1) {
      diferencaMinutos = (m2 - m1) + (h2 - h1)*60;
    }
    else if (m2 < m1) {
      h2 = h2 - 1;
      m2 = m2 + 60;
      diferencaMinutos = (m2 - m1) + (h2 - h1)*60;
    }
  }
  else if (h1 >= h2) {
    h2 = h2 + 24;
    if (m2 >= m1) {
      diferencaMinutos = (m2 - m1) + (h2 - h1)*60;
    }
    else if (m2 < m1) {
      h2 = h2 - 1;
      m2 = m2 + 60;
      diferencaMinutos = (m2 - m1) + (h2 - h1)*60;
    }
  }
  horasArredondado = diferencaMinutos/60;
  if (diferencaMinutos%60 != 0) {
    horasArredondado += 1;
  }


  if (horasArredondado == 1){
    valorPagamento = 1;
  }
  if (horasArredondado == 2){
    valorPagamento = 2;
  }
  if (horasArredondado == 3){
    valorPagamento = 3.40;
  }
  if (horasArredondado == 4){
    valorPagamento = 4.80;
  }
  if (horasArredondado == 5){
    valorPagamento = 6.80;
  }
  if (horasArredondado > 5){
    valorPagamento = 6.80+(horasArredondado-5)*2;
  }

  printf("\nVocê tem de pagar R$ %.2f pelo estacionamento\n\n", valorPagamento);
}

int main(){
  int h1, m1, h2, m2;

  printf("\nInsira dois inteiros, (horas e minutos) referente a quando você estacionou:\n");
  scanf("%d %d", &h1, &m1);
  printf("\nAgora insira mais dois inteiros, (horas e minutos) referente a quando você saiu do estacionamento:\n");
  scanf("%d %d", &h2, &m2);
  precoEstacionamento(h1, m1, h2, m2);

  system("pause");
  return 0;
}