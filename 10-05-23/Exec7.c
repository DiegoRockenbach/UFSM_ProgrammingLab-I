#include <stdio.h>

int main(){

  int i, tamVetor, maiorEle = 0, menorEle = 9999;
  float percentPares = 0, mediaTotal = 0;
  
  tamVetor = 10;

  int vetor[tamVetor];

  for (i = 0; i < tamVetor; i++){
    printf("\nInsira um valor para a posição %d do vetor: \n", i);
    scanf("%d", &vetor[i]);
    if (vetor[i] > maiorEle){
      maiorEle = vetor[i];
    }
    if (vetor[i] < menorEle) {
      menorEle = vetor[i];
    }
    if (vetor[i]%2 == 0){
      percentPares++;
    }
    mediaTotal = mediaTotal + vetor[i];
  }

  percentPares = (percentPares*100)/tamVetor;
  mediaTotal = mediaTotal/tamVetor;

  printf("\nO maior elemento inserido no vetor foi %d;\n", maiorEle);
  printf("O menor elemento inserido no vetor foi %d;\n", menorEle);
  printf("%.2f%% dos elementos inseridos no vetor foram números pares;\n", percentPares);
  printf("E a média de todos os elementos inseridos no vetor foi de %.2f;\n", mediaTotal);

  printf("\n\n");


  system("pause");
  return 0;
}