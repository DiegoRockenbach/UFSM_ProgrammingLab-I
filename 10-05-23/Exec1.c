#include <stdio.h>

int main(){

  int i, contPos = 0, tamVetor;
  
  tamVetor = 100;

  int vetorA[tamVetor];

  for (i = 0; i < tamVetor; i++){
    printf("\nInsira um valor para a posição %d do vetor: \n", i);
    scanf("%d", &vetorA[i]);
  }

  for (i = 0; i < tamVetor; i++){
    if (vetorA[i] > 0){
      contPos++;
    }
  }

  int vetorB[contPos];
  contPos = 0;

  for (i = 0; i < tamVetor; i++){
    if (vetorA[i] > 0){
      vetorB[contPos] = vetorA[i];
      contPos++; 
    }
  }

  printf("\n");

  for (i = 0; i < contPos; i++){
    printf("%d; ", vetorB[i]);
  }
  
  printf("\n\n");


  system("pause");
  return 0;
}