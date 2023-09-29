#include <stdio.h>

int main(){

  int i, tamVetor, menorVal = 9999, posMenorVal;

  printf("\nQuantas posições você deseja que seu vetor tenha? \n");
  scanf("%d", &tamVetor);

  int vetor[tamVetor];

  for (i = 0; i < tamVetor; i++){
    printf("\nInsira um valor para ocupar a posição %d no vetor: \n", i);
    scanf("%d", &vetor[i]);
    if (vetor[i] < menorVal){
      menorVal = vetor[i];
      posMenorVal = i;
    }
  }

  printf("\nO menor valor inserido no vetor foi %d, na posição %d.\n\n", vetor[i], posMenorVal);

  system("pause");
  return 0;
}