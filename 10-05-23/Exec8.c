#include <stdio.h>

int main(){

  int i, tamVetorA, tamVetorB, tamVetorV, cont = 0, troca = 1, temp;
  
  tamVetorA = 5;
  tamVetorB = 5; //  Devem ser iguais para o vetorV não quebrar
  tamVetorV = tamVetorA*2;

  int vetorA[tamVetorA], vetorB[tamVetorB], vetorV[tamVetorV];

  for (i = 0; i < tamVetorA; i++){
    printf("\nInsira um valor para a posição %d do vetor A: \n", i);
    scanf("%d", &vetorA[i]);
  }

  printf("\nAgora, para o vetor B: \n");

  for (i = 0; i < tamVetorB; i++){
    printf("\nInsira um valor para a posição %d do vetor B: \n", i);
    scanf("%d", &vetorB[i]);
  }

  for (i = 0; i < tamVetorA; i++){
    vetorV[cont] = vetorA[i];
    cont++;
    vetorV[cont] = vetorB[i];
    cont++;
  }

  while (troca == 1){   //  Ordena de forma decrescente (que acaba com o propósito de intercalar os elementos, mas ok)
    troca = 0;
    for (i = 0; i < tamVetorV-1; i++){
      if (vetorV[i] < vetorV[i+1]){
        troca = 1;
        temp = vetorV[i];
        vetorV[i] = vetorV[i+1];
        vetorV[i+1] = temp;
      }
    }
  }

  printf("\n\nO vetor V é o seguinte: \n");

  for (i = 0; i < tamVetorV; i++){
    printf("%d; ", vetorV[i]);
  }


  system("pause");
  return 0;
}