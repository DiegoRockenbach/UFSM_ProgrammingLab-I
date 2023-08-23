#include <stdio.h>

float ms, kh;
int main(){

  printf("\nInsira um valor de velocidade no formato de metros por segundos (m/s): \n");
  scanf("%f", &ms);
  kh = ms * 3.6;
  printf("\nA velocidade inserida foi de %.2f m/s, e, convertendo tal velocidade para quilômetros por hora, temos %.2f km/h\n\n\n", ms, kh);

  system("pause");
  return 0;
}