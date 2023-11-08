#include <stdio.h>

void geraUniao(int X[], int Y[], int tamX, int tamY){

  int i, iAux, cont = 0;

  for (i = 0; i < tamX; i++){
    for (iAux = 0; iAux < tamY; iAux++){
      if (X[i] == Y[iAux]){
        cont++;
      }
    }
  }

  int Z[cont];
  cont = 0;

  for (i = 0; i < tamX; i++){
    for (iAux = 0; iAux < tamY; iAux++){
      if (X[i] == Y[iAux]){
        Z[cont] = X[i];
        cont++;
      }
    }
  }

  printf("\n\nO vetor Z é o seguinte: \n");
  for (i = 0; i < cont; i++){
    printf("%d; ", Z[i]);
  }

}


void geraDiferenca(int X[], int Y[], int tamX, int tamY){

  int i, iAux, cont = 0, tempX[tamX], tempY[tamY];


  for (i = 0; i < tamX; i++){   //  Preenche os vetores temp com uma cópia exata de X e Y para não sobrescrever os valores originais
    tempX[i] = X[i];
  }
  for (i = 0; i < tamY; i++){
    tempY[i] = Y[i];
  }


  for (i = 0; i < tamX; i++){
    for (iAux = 0; iAux < tamY; iAux++){
      if (tempX[i] == tempY[iAux]){
        tempX[i] = 9999;
        tempY[iAux] = 9999;
      }
    }
  }


  for (i = 0; i < tamX; i++){
    if (tempX[i] != 9999){
      cont++;
    }
  }
  for (i = 0; i < tamY; i++){
    if (tempY[i] != 9999){
      cont++;
    }
  }

  int Z[cont];
  cont = 0;

  for (i = 0; i < tamX; i++){
    if (tempX[i] != 9999){
      Z[cont] = X[i];
      cont++;
    }
  }
  
  for (i = 0; i < tamY; i++){
    if (tempY[i] != 9999){
      Z[cont] = Y[i];
      cont++;
    }
  }

  printf("\n\nO vetor Z é o seguinte: \n");
  for (i = 0; i < cont; i++){
    printf("%d; ", Z[i]);
  }

}

void geraSoma(int X[], int Y[], int tamX){

  int i, cont = 0;

  int Z[tamX];  // Deve ser do mesmo tamanho que X/Y
  cont = 0;

  for (i = 0; i < tamX; i++){
    Z[cont] = X[i] + Y[i];
    cont++;
  }

  printf("\n\nO vetor Z é o seguinte: \n");
  for (i = 0; i < cont; i++){
    printf("%d; ", Z[i]);
  }

}


void geraProduto(int X[], int Y[], int tamX){

  int i, cont = 0;

  int Z[tamX];  // Deve ser do mesmo tamanho que X/Y
  cont = 0;

  for (i = 0; i < tamX; i++){
    Z[cont] = X[i] * Y[i];
    cont++;
  }

  printf("\n\nO vetor Z é o seguinte: \n");
  for (i = 0; i < cont; i++){
    printf("%d; ", Z[i]);
  }

}

int main() {

  int i, tamVetorX, tamVetorY;
  char opcao;
  
  tamVetorX = 10;
  tamVetorY = 10; //  Devem ser iguais para a soma/produto dos vetores funcionar

  int vetorX[tamVetorX], vetorY[tamVetorY];

  for (i = 0; i < tamVetorX; i++){
    printf("\nInsira um valor para a posição %d do vetor X: \n", i);
    scanf("%d", &vetorX[i]);
  }

  printf("\nAgora, para o vetor Y: \n");

  for (i = 0; i < tamVetorY; i++){
    printf("\nInsira um valor para a posição %d do vetor Y: \n", i);
    scanf("%d", &vetorY[i]);
  }

  printf("\nO vetor X é o seguinte: \n");
  for (i = 0; i < tamVetorX; i++){
    printf("%d; ", vetorX[i]);
  }

  printf("\n\nE o vetor Y é o seguinte: \n");
  for (i = 0; i < tamVetorY; i++){
    printf("%d; ", vetorY[i]);
  }

  
  do {
    printf("\n\n");
    printf("\nAgora, escolha qual opção deseja visualizar: \n");
    printf("a) União: Valores comuns a X e Y;\n");
    printf("b) Diferença: Valores que diferem entre X e Y;\n");
    printf("c) Soma: A soma dos valores de X e Y;\n");
    printf("d) Produto: O produto dos valores de X e Y;\n");
    printf("e) Sair: Sair do programa;\n");
    scanf(" %c", &opcao);

    switch (opcao) {

    case 'a':
      geraUniao(vetorX, vetorY, tamVetorX, tamVetorY);
      break;

    case 'b':
      geraDiferenca(vetorX, vetorY, tamVetorX, tamVetorY);
      break;

    case 'c':
      geraSoma(vetorX, vetorY, tamVetorX);
      break;

    case 'd':
      geraProduto(vetorX, vetorY, tamVetorX);
      break;

    case 'e':
      printf("\n\n");
      break;

    default:
      printf("\nValor inválido inserido!\n");
      break;

    }
  } while (opcao != 'e');

  system("pause");
  return 0;
}