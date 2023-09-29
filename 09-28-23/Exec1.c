#include <stdio.h>

int main(){

  int vetor[10], i, numComp, quantOcur = 0;
  
  for (i = 0; i < 10; i++){
    printf("\nInsira um valor para o índice %d do vetor: \n", i);
    scanf("%d", &vetor[i]);
  }

  printf("\nAgora, insira qual valor você deseja verificar o número de ocorrências no vetor previamente populado:\n");
  scanf("%d", &numComp);

  for (i=0; i < 10; i++){
    if (vetor[i] == numComp){
      quantOcur++;
    }
  }

  printf("\nO número inserido aparece no vetor %d vezes.\n\n", quantOcur);

  system("pause");
  return 0;
}