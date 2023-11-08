#include <stdio.h>

void localizaElemento(int numLinhas, int numColunas, int M[numLinhas][numColunas]){

  int i, j, valLido, cordXVal = -1, cordYVal = -1;

  printf("\nInsira um valor a ser localizado na matriz: \n");
  scanf("%d", &valLido);

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      if (M[i][j] == valLido){
        cordXVal = i;
        cordYVal = j;
      }
    }
  }

  if (cordXVal == -1 || cordYVal == -1){
    printf("\nNão foi possível localizar o elemento inserido na matriz;\n");
  }
  else {
    printf("\nO elemento inserido está na matriz nas coordenadas [%d][%d];\n", cordXVal, cordYVal);
  }

}

void mediaEleLinha(int numLinhas, int numColunas, int M[numLinhas][numColunas]){
  
  int i, j, mediaEleLinha[numLinhas];

  for (i = 0; i < numLinhas; i++){
    mediaEleLinha[i] = 0;
  }

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      mediaEleLinha[i] = mediaEleLinha[i] + M[i][j];
    }
    mediaEleLinha[i] = mediaEleLinha[i]/numColunas;
  }

  printf("\n");
  for (i = 0; i < numLinhas; i++){
    printf("%d; ", mediaEleLinha[i]);
  }

}

void maiorEleColunas(int numLinhas, int numColunas, int M[numLinhas][numColunas]){

  int i, j, maiorEleColuna[numColunas];

  for (j = 0; j < numColunas; j++){
    maiorEleColuna[j] = -9999;
  }

  for (j = 0; j < numColunas; j++){
    for (i = 0; i < numLinhas; i++){
      if (M[i][j] > maiorEleColuna[j]){
        maiorEleColuna[j] = M[i][j];
      }
    }
  }

  printf("\n");
  for (j = 0; j < numColunas; j++){
    printf("%d; ", maiorEleColuna[j]);
  }

}

int main(){

  int i, j, numLinhas, numColunas, opcao, contNegativos = 0, produtoTotal = 0;

  numLinhas = 8;
  numColunas = 7;

  int M[numLinhas][numColunas];

  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("\nInsira um valor para ocupar as seguintes coordenadas: linha %d, coluna %d: \n", i, j);
      scanf("%d", &M[i][j]);
      if (M[i][j] < 0){
        contNegativos++;
      }
      if ((M[i][j] != 0) && (produtoTotal != 0)){
        produtoTotal = produtoTotal * M[i][j];
      }
      if ((M[i][j] != 0) && (produtoTotal == 0)){
        produtoTotal = M[i][j];
      }
    }
  }

  printf("\nA matriz inserida foi a seguinte: \n");
  for (i = 0; i < numLinhas; i++){
    for (j = 0; j < numColunas; j++){
      printf("%d ", M[i][j]);
    }
    printf("\n");
  }

  do {
    printf("\n\n1) O maior elemento de cada coluna da matriz:\n");
    printf("\n2) A média dos elementos de cada linha:\n");
    printf("\n3) O produto de todos os elementos diferentes de zero:\n");
    printf("\n4) A quantidade de elementos negativos:\n");
    printf("\n5) As coordenadas de um elemento cujo valor será lido:\n");
    printf("\n6) Sair do programa;\n\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      maiorEleColunas(numLinhas, numColunas, M);
      break;

    case 2:
      mediaEleLinha(numLinhas, numColunas, M);
      break;

    case 3:
      printf("\nO produto total da matriz inserida é %d;\n", produtoTotal);
      break;

    case 4:
      printf("\nNa matriz inserida, há %d elementos negativos;\n", contNegativos);
      break;

    case 5:
      localizaElemento(numLinhas, numColunas, M);
      break;

    default:
      return 0;
      break;
    }

  } while (opcao != 6);


  system("pause");
  return 0;
}