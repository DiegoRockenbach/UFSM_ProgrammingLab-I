#include <stdio.h>

int main(){

  int i, vetorOrig[50], quantPares = 0, quantImpares = 0, contPares = 0, contImpares = 0;

  for (i = 0; i < 50; i++){
    printf("\nInsira um valor para ocupar a posição %d do vetor: \n", i);
    scanf("%d", &vetorOrig[i]);
    if (vetorOrig[i]%2 == 0){
      quantPares++;
    }
    else {
      quantImpares++;
    }
  }

  int vetorPares[quantPares], vetorImpares[quantImpares];

    for (i = 0; i < 50; i++){
    if (vetorOrig[i]%2 == 0){
      vetorPares[contPares] = vetorOrig[i];
      contPares++;
    }
    else {
      vetorImpares[contImpares] = vetorOrig[i];
      contImpares++;
    }
  }

  printf("\nO vetor original pode ser separado em dois vetores, sendo estes: \n\n");
  printf("Pares: \n");
  for (i = 0; i < quantPares; i++){
    printf("%d; ", vetorPares[i]);
  }
  printf("\nÍmpares: \n");
  for (i = 0; i < quantImpares; i++){
    printf("%d; ", vetorImpares[i]);
  }

  printf("\n\n");

  system("pause");
  return 0;
}