#include <stdio.h>

int main(){
  
  int i, j, numLinhas, numColunas;

  numLinhas = 2;
  numColunas = 3;

  int matrizOrig [numLinhas][numColunas], matrizTrans [numColunas][numLinhas];

  for (i = 0; i < numColunas; i++){
    for (j = 0; j < numLinhas; j++){
      matrizTrans[i][j] = 0;
    }
  }

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("\nInsira um valor para ocupar as seguintes coordenadas: linha %d, coluna %d: \n", i, j);
      scanf("%d", &matrizOrig[i][j]);
    }
  }

  for (i = 0; i < numColunas; i++){
    for (j = 0; j < numLinhas; j++){
      matrizTrans[i][j] = matrizOrig[j][i];
    }
  }

  printf("\nA matriz transposta da matriz original tem os seguintes valores: \n");

  for (i = 0; i < numColunas; i++){
    for (j = 0; j < numLinhas; j++){
      printf("\nlinha %d, coluna %d: %d;", i, j, matrizTrans[i][j]);
    }
  }

  printf("\n\n");

  system("pause");
  return 0;
}