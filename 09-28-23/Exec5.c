#include <stdio.h>

int main(){

  int i, invert = 9, vetorOrig[10], temp;

  for (i = 0; i < 10; i++){
    printf("\nInsira um valor para popular o vetor na posição %d: \n", i);
    scanf("%d", &vetorOrig[i]);
  }
  printf("\nVetor original: \n");
  for (i = 0; i < 10; i++){
    printf("%d; ", vetorOrig[i]);
  }
  printf("\n\n");

  for (i = 0; i < 5; i++){  // Se ir até i < 10 o vetor invertido se "inverte" de volta ao normal
    temp = vetorOrig[i];
    vetorOrig[i] = vetorOrig[invert-i];
    vetorOrig[invert-i] = temp;
  }

  printf("\nVetor invertido: \n");
  for (i = 0; i < 10; i++){
    printf("%d; ", vetorOrig[i]);
  }
  printf("\n\n");


  system("pause");
  return 0;
}