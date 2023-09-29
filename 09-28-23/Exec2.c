#include <stdio.h>

void substituiVetor(float vetor[], int tamVetor){

  int i;

  for (i = 0; i < tamVetor; i++){
    if (vetor[i] == 0){
      vetor[i] = -99;
    }
  }
}

int main(){

  int i, tamVetor;

  printf("\nQuantas posições deseja que seu vetor tenha?\n");
  scanf("%d", &tamVetor);

  float vetor[tamVetor];

  for (i = 0; i < tamVetor; i++){
    printf("\nInsira um valor para o índice %d do vetor (caso ele for 0, ele será posteriormente substituído por -99): \n", i);
    scanf("%f", &vetor[i]);
  }

  substituiVetor(vetor, tamVetor);

  for(i = 0; i < tamVetor; i++){
    printf("\nNo índice %d, seu vetor tem um valor de %.2f;", i, vetor[i]);
  }

  system("pause");
  return 0;
}