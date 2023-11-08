#include <stdio.h>

int main(){

  int i, j, numLinhas, numColunas, contA = 0, contB = 0, contDif = 0;

  numLinhas = 50;
  numColunas = 50;

  int M[numLinhas][numColunas];

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("\nInsira um valor para ocupar as seguintes coordenadas: linha %d, coluna %d: \n", i, j);
      scanf("%d", &M[i][j]);
      if ((i > 0) && (i == j)){
        contB++;
      }
      else if ((i < numLinhas-1) && (i == numLinhas - j - 1)){
        contA++;
      }
    }
  }

  int A[contA], B[contB];
  contA = 0;
  contB = 0;

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      if ((i > 0) && (i == j)){
        B[contB] = M[i-1][j];
        contB++;
      }
      if ((i < numLinhas-1) && (i == numLinhas - j - 1)){
        A[contA] = M[i+1][j];
        contA++;
      }
    }
  }  

  for (i = 0; i < contA; i++){
    for (j = 0; j < contB; j++){
      if (A[i] == B[j]){
        A[i] = 9999;
        B[j] = 9999;
      }
    }
  }

  for (i = 0; i < contA; i++){
    if (A[i] != 9999){
      contDif++;
    }
  }
  for (i = 0; i < contB; i++){
    if (B[i] != 9999){
      contDif++;
    }
  }


  int dif[contDif];
  contDif = 0;

  for (i = 0; i < contA; i++){
    if (A[i] != 9999){
      dif[contDif] = A[i];
      contDif++;
    }
  }
  for (i = 0; i < contB; i++){
    if (B[i] != 9999){
      dif[contDif] = B[i];
      contDif++;
    }
  }

  printf("\n\nO vetor dif, que é composta pelos números que diferem entre os vetores A e B, é o seguinte: \n");
  for (i = 0; i < contDif; i++){
    printf("%d; ", dif[i]);
  }

  printf("\n\n");

  system("pause");
  return 0;
}