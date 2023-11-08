#include <stdio.h>

int main(){

  int i, iAux, tamVetor, temp;
  
  tamVetor = 10;

  int vetor[tamVetor];

  for (i = 0; i < tamVetor; i++){  
    printf("\nInsira um valor para a posição %d do vetor: \n", i);
    scanf("%d", &vetor[i]);

    iAux = i;
    while ((iAux != 0) && (vetor[iAux] > vetor[iAux-1])){
      temp = vetor[iAux];
      vetor[iAux] = vetor[iAux-1];
      vetor[iAux-1] = temp;
      iAux--;
    }
  }

  printf("\n\nO vetor inserido, ordenado em ordem decrescente, é o seguinte: \n");
  
  for (i = 0; i < tamVetor; i++){
    printf("%d; ", vetor[i]);
  }
  printf("\n\n");

  system("pause");
  return 0;
}