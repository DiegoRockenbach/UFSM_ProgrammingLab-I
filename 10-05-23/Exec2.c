#include <stdio.h>

int main(){

  int i, tamVetor;
  
  tamVetor = 20;

  int iInverso = tamVetor, vetor[tamVetor], vetorInverso[tamVetor];

  for (i = 0; i < tamVetor; i++){
    printf("\nInsira um valor para a posição %d do vetor: \n", i);
    scanf("%d", &vetor[i]);
    vetorInverso[iInverso-1] = vetor[i];
    iInverso--;
  }

  printf("\nO vetor inserido é: \n");

  for (i = 0; i < tamVetor; i++){
    printf("%d; ", vetor[i]);
  }

  printf("\nE o vetor inverso a este é: \n");

  for (i = 0; i < tamVetor; i++){
    printf("%d; ", vetorInverso[i]);
  }

  printf("\n\n");


  system("pause");
  return 0;
}