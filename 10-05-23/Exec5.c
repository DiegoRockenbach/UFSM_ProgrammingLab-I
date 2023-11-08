#include <stdio.h>

int main(){

  int i, iAux, tamVetorA, tamVetorB, contRepetidos = 0, contRepetidosC = 0;
  
  tamVetorA = 10;
  tamVetorB = 20;

  int vetorA[tamVetorA], vetorB[tamVetorB];

  for (i = 0; i < tamVetorA; i++){
    printf("\nInsira um valor para a posição %d do vetor A: \n", i);
    scanf("%d", &vetorA[i]);
  }

  printf("\nAgora, para o vetor B: \n");

  for (i = 0; i < tamVetorB; i++){
    printf("\nInsira um valor para a posição %d do vetor B: \n", i);
    scanf("%d", &vetorB[i]);
  }

  for (i = 0; i < tamVetorB; i++){
    for (iAux = 0; iAux < tamVetorA; iAux++){
      if (vetorB[i] == vetorA[iAux]){
        contRepetidos++;
      }
    }
  }

  int vetorC[contRepetidos];
  contRepetidos = 0;

  for (i = 0; i < tamVetorB; i++){
    for (iAux = 0; iAux < tamVetorA; iAux++){
      if (vetorB[i] == vetorA[iAux]){
        vetorC[contRepetidos] = vetorB[i];
        contRepetidos++;
      }
    }
  }

  printf("\nCont repetidos = %d\n", contRepetidos);

  for (i = 0; i < contRepetidos; i++){
    for (iAux = i; iAux < contRepetidos; iAux++){
      if (vetorC[i] == vetorC[iAux]){
        contRepetidosC++;
      }
    }
  }

  int vetorD[contRepetidosC];
  contRepetidosC = 0;

  for (i = 0; i < contRepetidos; i++){
    for (iAux = i; iAux < contRepetidos; iAux++){
      if (vetorC[i] == vetorC[iAux]){
        vetorD[contRepetidosC] = vetorC[i];
        vetorC[i] = 9999;
        contRepetidosC++;
      }
    }
  }

  printf("\nO vetor A é o seguinte: \n");

  for (i = 0; i < tamVetorA; i++){
    printf("%d; ", vetorA[i]);
  }

  printf("\n\nO vetor B é o seguinte: \n");

  for (i = 0; i < tamVetorB; i++){
    printf("%d; ", vetorB[i]);
  }

  printf("\n\nE o vetor C é o seguinte: \n");

  for (i = 0; i < contRepetidosC; i++){
    printf("%d; ", vetorD[i]);
  }

  printf("\n\n");

  system("pause");
  return 0;
}