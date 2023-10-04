#include <stdio.h>

int main(){

  int i, j, numLinhas, numColunas, valStore, iStore, jStore, checkBreak = 0;

  numLinhas = 5;
  numColunas = 5;

  int matriz [numLinhas][numColunas], matrizTemp [numLinhas][numColunas];

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("\nInsira um valor para ocupar as seguintes coordenadas: linha %d, coluna %d: \n", i, j);
      scanf("%d", &matriz[i][j]);
      matrizTemp[i][j] = matriz[i][j];
    }
  }


  printf("\nTrocando a segunda linha pela quinta, temos a seguinte matriz: \n");

  for (j = 0; j < numColunas; j++){
    matriz[1][j] = matriz[4][j];
    matriz[4][j] = matrizTemp[1][j];
  }

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("%d ", matriz[i][j]);
      matrizTemp[i][j] = matriz[i][j];
    }
    printf("\n");
  }


  printf("\nAgora, trocando a terceira coluna pela quinta, temos a seguinte matriz: \n");

  for (i = 0; i < numLinhas; i++){
    matriz[i][2] = matriz[i][4];
    matriz[i][4] = matrizTemp[i][2];
  }

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("%d ", matriz[i][j]);
      matrizTemp[i][j] = matriz[i][j];
    }
    printf("\n");
  }


  printf("\nPor último, trocando a diagonal principal pela secundária, temos a seguinte matriz: \n");

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      if (i == j && i == numLinhas-j-1){  // Ponto de encontro das diagonais (a partir daqui, muda o funcionamento do for)
        checkBreak = 1;
        break;
      }
      if (i == j){  // Diagonal primária
        valStore = matriz[i][j];
        iStore = i;
        jStore = j;
      }
      if (i == numLinhas-j-1){  // Diagonal secundária
        matriz[iStore][jStore] = matrizTemp[i][j];
        matriz[i][j] = valStore;
      }
    }
    if (checkBreak != 0){
      iStore = i;
      break;
    }
  }

  for (i = iStore; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      if (i == numLinhas-j-1){  // Diagonal secundária
        valStore = matriz[i][j];
        iStore = i;
        jStore = j;
      }
      if (i == j){  // Diagonal primária
        matriz[iStore][jStore] = matrizTemp[i][j];
        matriz[i][j] = valStore;
      }
    }
  }

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }



  system("pause");
  return 0;
}