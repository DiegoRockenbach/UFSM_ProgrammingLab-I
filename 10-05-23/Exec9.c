#include <stdio.h>

int main(){

  int i, tamVetorA;
  
  tamVetorA = 10;

  float vetorA[tamVetorA], vetorB[tamVetorA];

  for (i = 0; i < tamVetorA; i++){
    printf("\nInsira um valor para a posição %d do vetor A: \n", i);
    scanf("%f", &vetorA[i]);
  }

  for (i = 0; i < tamVetorA; i++){
    if (i%2 == 0){
      vetorB[i] = vetorA[i]*3;
    }
    else {
      vetorB[i] = vetorA[i]/2;
    }
  }


  printf("\n\nO vetor A é o seguinte: \n");

  for (i = 0; i < tamVetorA; i++){
    printf("%.2f; ", vetorA[i]);
  }

  printf("\n\nE o vetor B é o seguinte: \n");

  for (i = 0; i < tamVetorA; i++){
    printf("%.2f; ", vetorB[i]);
  }

  system("pause");
  return 0;
}