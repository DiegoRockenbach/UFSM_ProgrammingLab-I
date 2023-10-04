#include <stdio.h>

int main(){

  int i, j, numLinhas, numColunas, checkPrinc = 0, checkSec = 0;
  float prodDiagPrinc = 0, prodDiagSec = 0, determinante;

  numLinhas = 2;
  numColunas = 2;

  int matriz [numLinhas][numColunas];

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("\nInsira um valor para ocupar as seguintes coordenadas: linha %d, coluna %d: \n", i, j);
      scanf("%d", &matriz[i][j]);
      if (i == j && checkPrinc != 0){
        prodDiagPrinc = prodDiagPrinc * matriz[i][j];
      }
      else if (i == j && checkPrinc == 0){
        prodDiagPrinc = matriz[i][j];
        checkPrinc = 1;
      }

      if (i == numLinhas-j-1 && checkSec != 0){
        prodDiagSec = prodDiagSec * matriz[i][j];
      }
      else if (i == numLinhas-j-1 && checkSec == 0){
        prodDiagSec = matriz[i][j];
        checkSec = 1;
      }
    }
  }

  determinante = prodDiagPrinc - prodDiagSec;


  printf("\nProdDiagPrinc: %.2f; ProdDiagSec: %.2f;\n\n", prodDiagPrinc, prodDiagSec);

  printf("\nO determinante da matriz inserida é %.2f;\n\n", determinante);

  system("pause");
  return 0;
}