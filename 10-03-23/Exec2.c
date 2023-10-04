#include <stdio.h>

int main(){

  int i, j, numLinhas, numColunas;

  numLinhas = 3;
  numColunas = 3;

  int matrizOrig [numLinhas][numColunas], matrizSec [numLinhas][numColunas];

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      matrizSec[i][j] = 0;
    }
  }

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("\nInsira um valor para ocupar as seguintes coordenadas: linha %d, coluna %d: \n", i, j);
      scanf("%d", &matrizOrig[i][j]);
      if ((i+j)%2 == 0){
        matrizSec[i][j] = matrizOrig[i][j];
      }
    }
  }

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("\nlinha %d, coluna %d: %d;", i, j, matrizSec[i][j]);
    }
  }

  printf("\n\n");

  system("pause");
  return 0;
}