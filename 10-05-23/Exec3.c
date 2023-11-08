#include <stdio.h>

int main(){

  int i, tamVetor, maiorVal = 0, menorVal = 9999;
  
  tamVetor = 30;

  int vetor[tamVetor];

  for (i = 0; i < tamVetor; i++){
    printf("\nInsira um valor para a posição %d do vetor: \n", i);
    scanf("%d", &vetor[i]);
    if (vetor[i] > maiorVal){
      maiorVal = vetor[i];
    }
    if (vetor[i] < menorVal){
      menorVal = vetor[i];
    }
  }

  printf("\nO menor valor inserido no vetor foi %d, e o maior valor foi %d. Portanto, a diferença entre eles é de %d;\n\n", menorVal, maiorVal, maiorVal-menorVal);

  system("pause");
  return 0;
}