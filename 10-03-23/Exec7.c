#include <stdio.h>

int main(){

  int i, j, numLinhas, numColunas;

  numLinhas = 4;
  numColunas = 4;

  int matriz1 [numLinhas][numColunas], matriz2 [numLinhas][numColunas], matrizMaior [numLinhas][numColunas];

  printf("\nPreencha os valores da primeira matriz: \n");

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("\nInsira um valor para ocupar as seguintes coordenadas: linha %d, coluna %d: \n", i, j);
      scanf("%d", &matriz1[i][j]);
    }
  }

  printf("\nAgora, preencha os valores da segunda matriz: \n");

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("\nInsira um valor para ocupar as seguintes coordenadas: linha %d, coluna %d: \n", i, j);
      scanf("%d", &matriz2[i][j]);
    }
  }

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      if (matriz1[i][j] > matriz2[i][j]){
        matrizMaior[i][j] = matriz1[i][j];
      }
      else {
        matrizMaior[i][j] = matriz2[i][j];
      }
    }
  }

  printf("\nAssim, as três matrizes são as seguintes: \n");
  printf("\nMatriz 1: \n");

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("%d ", matriz1[i][j]);
    }
    printf("\n");
  }

  printf("\nMatriz 2: \n");

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("%d ", matriz2[i][j]);
    }
    printf("\n");
  }

  printf("\nMatriz com os maiores valores de cada posição das outras duas matrizes: \n");

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("%d ", matrizMaior[i][j]);
    }
    printf("\n");
  }


  system("pause");
  return 0;
}