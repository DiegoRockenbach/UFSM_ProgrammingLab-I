#include <stdio.h>

int main(){

  int i, j, numLinhas, numColunas, soma;

  numLinhas = 10;
  numColunas = 10;

  int M[numLinhas][numColunas];

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("\nInsira um valor para ocupar as seguintes coordenadas: linha %d, coluna %d: \n", i, j);
      scanf("%d", &M[i][j]);
    }
  }

  printf("\nA matriz inserida foi a seguinte: \n");
  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("%d ", M[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      if (i == j && i == 0){
        soma = soma + M[i][j];
      }
      else if (i == j && i != 0){
        soma = soma + M[i-1][j];
      }
    }
  }

  printf("\nA soma dos elementos acima da diagonal principal é %d;\n\n", soma);

  system("pause");
  return 0;
}