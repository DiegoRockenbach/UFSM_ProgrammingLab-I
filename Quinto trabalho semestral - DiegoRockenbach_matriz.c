#include <stdio.h>

int calculaMed(int vetorAdj[], int quantAdj){

  int i, troca = 1, temp, mediana;

  while (troca == 1){
    troca = 0;
    for (i = 0; i < quantAdj-1; i++){
      if (vetorAdj[i] > vetorAdj[i+1]){
        troca = 1;
        temp = vetorAdj[i];
        vetorAdj[i] = vetorAdj[i+1];
        vetorAdj[i+1] = temp;
      }
    }
  }

  printf("\nAdjacentes ordenados crescentemente: ");

  for (i = 0; i < quantAdj; i++){
    printf("%d; ", vetorAdj[i]);
  }


  if (quantAdj%2 == 0){
    mediana = vetorAdj[(quantAdj/2)-1] + vetorAdj[quantAdj/2];
    mediana = mediana/2;
  }
  else {
    mediana = quantAdj/2;
    mediana = vetorAdj[mediana];
  }


  printf("\nMediana inteira da sequência: %d\n", mediana);

  return mediana;
}

int main(){

  int i, j, quantAdj, L, C;

  printf("\nInsira quantas linhas deseja que as matrizes tenham (deve ser > 0 e <= 100): \n");
  scanf("%d", &L);
  printf("\nAgora, insira quantas colunas deseja que as matrizes tenham (deve também ser > 0 e <= 100): \n");
  scanf("%d", &C);

  int M[L][C], Med[L][C], adj4[4], adj6[6], adj9[9];

  for (i = 0; i < L; i++){
    for (j = 0; j < C; j++){
      printf("\nInsira um valor para ocupar a seguinte posição na matriz: linha %d, coluna %d: \n", i, j);
      scanf("%d", &M[i][j]);
    }
  }

  printf("\nA matriz inserida foi a seguinte: \n\n");
  for (i = 0; i < L; i++){
    for (j = 0; j < C; j++){
      printf("%02d ", M[i][j]);
    }
    printf("\n");
  }


  for (i = 0; i < L; i++){  // EM TODA MENÇÃO DE "ADJACENTES", JÁ ESTÁ INCLUÍDO O PRÓPRIO VALOR ALÉM DE SEUS ADJACENTES
    for (j = 0; j < C; j++){
      if (i == 0 && j == 0) {
        quantAdj = 4;
        adj4[0] = M[i][j];
        adj4[1] = M[i][j+1];
        adj4[2] = M[i+1][j];
        adj4[3] = M[i+1][j+1];

        printf("\nO VALOR É %d!", M[i][j]);
        printf("\nAdjacentes desordenados: %d; %d; %d; %d;", adj4[0], adj4[1], adj4[2], adj4[3]);

        Med[i][j] = calculaMed(adj4, quantAdj);
      }

      else if (i == 0 && j == C-1) {
        quantAdj = 4;
        adj4[0] = M[i][j];
        adj4[1] = M[i][j-1];
        adj4[2] = M[i+1][j];
        adj4[3] = M[i+1][j-1];

        printf("\nO VALOR É %d!", M[i][j]);
        printf("\nAdjacentes desordenados: %d; %d; %d; %d;", adj4[0], adj4[1], adj4[2], adj4[3]);

        Med[i][j] = calculaMed(adj4, quantAdj);
      }

      else if (i == L-1 && j == 0) {
        quantAdj = 4;

        adj4[0] = M[i][j];
        adj4[1] = M[i-1][j];
        adj4[2] = M[i][j+1];
        adj4[3] = M[i-1][j+1];

        printf("\nO VALOR É %d!", M[i][j]);
        printf("\nAdjacentes desordenados: %d; %d; %d; %d;", adj4[0], adj4[1], adj4[2], adj4[3]);

        Med[i][j] = calculaMed(adj4, quantAdj);
      }

      else if (i == L-1 && j == C-1) {
        quantAdj = 4;

        adj4[0] = M[i][j];
        adj4[1] = M[i][j-1];
        adj4[2] = M[i-1][j];
        adj4[3] = M[i-1][j-1];

        printf("\nO VALOR É %d!", M[i][j]);
        printf("\nAdjacentes desordenados: %d; %d; %d; %d;", adj4[0], adj4[1], adj4[2], adj4[3]);

        Med[i][j] = calculaMed(adj4, quantAdj);
      }
      
      else if (i == 0 && j > 0 && j < C-1){
        quantAdj = 6;

        adj6[0] = M[i][j];
        adj6[1] = M[i][j-1];
        adj6[2] = M[i][j+1];
        adj6[3] = M[i+1][j-1];
        adj6[4] = M[i+1][j];
        adj6[5] = M[i+1][j+1];

        printf("\nO VALOR É %d!", M[i][j]);
        printf("\nAdjacentes desordenados: %d; %d; %d; %d; %d; %d;", adj6[0], adj6[1], adj6[2], adj6[3], adj6[4], adj6[5]);

        Med[i][j] = calculaMed(adj6, quantAdj);
      }

      else if (i > 0 && i < L-1 && j == C-1){
        quantAdj = 6;

        adj6[0] = M[i][j];
        adj6[1] = M[i-1][j-1];
        adj6[2] = M[i-1][j];
        adj6[3] = M[i][j-1];
        adj6[4] = M[i+1][j-1];
        adj6[5] = M[i+1][j];

        printf("\nO VALOR É %d!", M[i][j]);
        printf("\nAdjacentes desordenados: %d; %d; %d; %d; %d; %d;", adj6[0], adj6[1], adj6[2], adj6[3], adj6[4], adj6[5]);

        Med[i][j] = calculaMed(adj6, quantAdj);
      }

      else if (i > 0 && i < L-1 && j == 0){
        quantAdj = 6;

        adj6[0] = M[i][j];
        adj6[1] = M[i-1][j];
        adj6[2] = M[i-1][j+1];
        adj6[3] = M[i][j+1];
        adj6[4] = M[i+1][j];
        adj6[5] = M[i+1][j+1];

        printf("\nO VALOR É %d!", M[i][j]);
        printf("\nAdjacentes desordenados: %d; %d; %d; %d; %d; %d;", adj6[0], adj6[1], adj6[2], adj6[3], adj6[4], adj6[5]);

        Med[i][j] = calculaMed(adj6, quantAdj);
      }

      else if (i == L-1 && j > 0 && j < C-1){
        quantAdj = 6;

        adj6[0] = M[i][j];
        adj6[1] = M[i][j-1];
        adj6[2] = M[i-1][j-1];
        adj6[3] = M[i-1][j];
        adj6[4] = M[i-1][j+1];
        adj6[5] = M[i][j+1];

        printf("\nO VALOR É %d!", M[i][j]);
        printf("\nAdjacentes desordenados: %d; %d; %d; %d; %d; %d;", adj6[0], adj6[1], adj6[2], adj6[3], adj6[4], adj6[5]);

        Med[i][j] = calculaMed(adj6, quantAdj);
      }

      else if (i > 0 && i < L-1 && j > 0 && j < C-1) {
        quantAdj = 9;

        adj9[0] = M[i][j];
        adj9[1] = M[i-1][j-1];
        adj9[2] = M[i-1][j];
        adj9[3] = M[i-1][j+1];
        adj9[4] = M[i][j-1];
        adj9[5] = M[i][j+1];
        adj9[6] = M[i+1][j-1];
        adj9[7] = M[i+1][j];
        adj9[8] = M[i+1][j+1];

        printf("\nO VALOR É %d!", M[i][j]);
        printf("\nAdjacentes desordenados: %d; %d; %d; %d; %d; %d; %d; %d; %d;", adj9[0], adj9[1], adj9[2], adj9[3], adj9[4], adj9[5], adj9[6], adj9[7], adj9[8]);

        Med[i][j] = calculaMed(adj9, quantAdj);
      }
    }
  }

  printf("\n\nMatriz Med:\n\n");
  for (i = 0; i < L; i++){
    for (j = 0; j < C; j++){
      printf("%02d ", Med[i][j]);
    }
    printf("\n");
  }

  printf("\n\n");

  system("pause");
  return 0;
}