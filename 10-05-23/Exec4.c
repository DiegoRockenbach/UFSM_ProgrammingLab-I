#include <stdio.h>

int main(){

  int i, tamVetor, contPares = 0;
  
  tamVetor = 10;

  int vetor[tamVetor];

  for (i = 0; i < tamVetor; i++){
    printf("\nInsira um valor para a posição %d do vetor: \n", i);
    scanf("%d", &vetor[i]);
    if (vetor[i]%2 == 0){
      contPares++;
    }
  }

  printf("\nO vetor inserido apresenta[] %d valores pares;\n\n", contPares);

  system("pause");
  return 0;
}