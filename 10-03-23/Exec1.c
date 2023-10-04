#include <stdio.h>

int main(){

  int i, j, numLinhas, numColunas;

  numLinhas = 10;
  numColunas = 10;

  int matriz [numLinhas][numColunas];

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("\nInsira um valor para ocupar as seguintes coordenadas: linha %d, coluna %d: \n", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("\nOs elementos inseridos na matriz, exceto os que estão em sua diagonal secundária, são: \n");

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      if (i != numLinhas - j - 1){
        printf("\nlinha %d, coluna %d: %d;", i, j, matriz[i][j]);
      }
    }
  }

  printf("\n\n");
  

  system("pause");
  return 0;
}