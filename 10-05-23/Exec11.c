#include <stdio.h>

int main(){

  int i, tamVetor, cont = 1, maiorSequencia = 1;
  
  tamVetor = 10;

  int vetor[tamVetor];

  for (i = 0; i < tamVetor; i++){
    printf("\nInsira um valor para a posição %d do vetor: \n", i);
    scanf("%d", &vetor[i]);
  }


  for (i = 0; i < tamVetor; i++){
    if (vetor[i] < vetor[i+1]){
      cont++;
    }
    else {
      if (cont > maiorSequencia){
        maiorSequencia = cont;
        cont = 0;
      }
    }
  }


  printf("\nO número de elementos da maior sub lista ordenada crescentemente é %d;\n\n", maiorSequencia);


  system("pause");
  return 0;
}