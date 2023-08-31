#include <stdio.h>

int A, B, C;
int main() {

  printf("\nSupondo um jogo de \"Dois ou Um\", insira três valores inteiros, sendo eles sempre 2 ou 1: \n");
  scanf("%d %d %d", &A, &B, &C);
  printf("\nSuponhamos que o valor A foi escolhido por Ana, o valor B foi escolhido por Bob e o valor C foi escolhido por Karen!\n");
  if (A != B && B == C) {
    printf("\nAna ganhou essa rodada!\n\n");
  }
  else if (A != B && A == C) {
    printf("\nBob ganhou essa rodada!\n\n");
  }
  else if (A != C && A == B) {
    printf("\nCaren ganhou essa rodada!\n\n");
  }
  else {
    printf("\nOcorreu um empate (*)\n\n");
  }

  system("pause");
  return 0;
}