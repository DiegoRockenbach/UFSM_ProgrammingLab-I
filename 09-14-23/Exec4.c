#include <stdio.h>

int main(){

  int ano;
  float chico, juca;

  chico = 1.50;
  juca = 1.10;

  while (juca <= chico) {
    chico += 0.02;
    juca += 0.03;
    ano++;
  }

  printf("\nSerão necessários %d anos para Juca se tornar maior que Chico. Nesse ano, Jucá terá %.2fm e Chico terá %.2fm.\n\n", ano, juca, chico);

  system("pause");
  return 0;
}