#include <stdio.h>
#include <math.h>

int main(){

  int i, j, numLinhas, numColunas, numQuad;
  float result;

  numLinhas = 5;
  numColunas = 5;

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
      if (i+j == numColunas-1 && i != numLinhas-1){
        if (M[i+1][j]%2 != 0){
          numQuad = pow(M[i+1][j], 2);
          result = result + numQuad;
        }
      }
      else if (i+j == numColunas-1 && i == numLinhas-1){
        if (M[i][j]%2 != 0){
          numQuad = pow(M[i][j], 2);
          result = result + numQuad;
        }
      }
    }
  }

  result = sqrt(result);

  printf("\nA raiz quadrada da soma dos quadrados dos números ímpares localizados abaixo da diagonal secundária é %.2f;\n\n", result);

  system("pause");
  return 0;
}