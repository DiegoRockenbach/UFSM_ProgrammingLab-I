#include <stdio.h>
#include <math.h>

int main(){

  int i, j, numLinhas, numColunas;

  numLinhas = 3;
  numColunas = 3;

  int MOrig[numLinhas][numColunas], MFinal[numLinhas][numColunas];

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("\nInsira um valor para ocupar as seguintes coordenadas: linha %d, coluna %d: \n", i, j);
      scanf("%d", &MOrig[i][j]);
    }
  }

  printf("\nA matriz inserida foi a seguinte: \n");
  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("%d ", MOrig[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      MFinal[i][j] = MOrig[numLinhas-1-j][i];
    }
  }

  printf("\nE a matriz final foi a seguinte: \n");
  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("%d ", MFinal[i][j]);
    }
    printf("\n");
  }

  system("pause");
  return 0;
}