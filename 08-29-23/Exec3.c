#include <stdio.h>

float pontA, pontB, pontC, viceCampeao;
int main (){

  printf("\nInforme as pontuações dos três competidores do torneio regional de bocha de sua cidade: \n");
  scanf("%f %f %f", &pontA, &pontB, &pontC);
  if (pontA < pontB && pontB < pontC) {
    viceCampeao = pontB;
  }
  else if (pontA < pontC && pontC < pontB) {
    viceCampeao = pontC;
  }
  else if (pontB < pontA && pontA < pontC) {
    viceCampeao = pontA;
  }
  else if (pontB < pontC && pontC < pontA) {
    viceCampeao = pontC;
  }
  else if (pontC < pontA && pontA < pontB) {
    viceCampeao = pontA;
  }
  else if (pontC < pontB && pontB < pontA) {
    viceCampeao = pontA;
  }
  printf("\nO vice-campeão do torneio regional de bocha de determinada cidade foi o competidor de pontuação %.2f\n\n", viceCampeao);

  system("pause");
  return 0;
}