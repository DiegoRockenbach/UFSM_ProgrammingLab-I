#include <stdio.h>

int main(){

  int i, j, numLinhas, numColunas, vetor[3];

  numLinhas = 3;
  numColunas = 3;

  int matriz [numLinhas][numColunas];

  for (i = 0; i < 3; i++){
    printf("\nInsira um valor para ocupar a posição %d de um vetor: \n", i);
    scanf("%d", &vetor[i]);
  }

  printf("\nAgora, insira uma matriz: \n");

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("\nInsira um valor para ocupar as seguintes coordenadas: linha %d, coluna %d: \n", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  for (i = 0; i < numLinhas; i++){
    matriz[i][0] = matriz[i][0]*vetor[0];
  }

  for (i = 0; i < numLinhas; i++){
    matriz[i][1] = matriz[i][1]*vetor[1];
  }

  for (i = 0; i < numLinhas; i++){
    matriz[i][2] = matriz[i][2]*vetor[2];
  }
  
  
  printf("\nMultiplicando a primeira coluna da matriz pelo primeiro elemento do vetor, a segunda coluna pelo segundo elemento, e a terceira coluna pelo terceiro elemento, temos a setuinte matriz: \n");

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }


  system("pause");
  return 0;
}