#include <stdio.h>

void ordenaVetorDecrescente(int vetAB[20]){

  int i, iAux, indiceSave, maiorValor = 0, vetC[20];

  for (i = 0; i < 20; i++){
    for (iAux = 0; iAux < 20; iAux++){
      if (vetAB[iAux] > maiorValor){
        maiorValor = vetAB[iAux];
        indiceSave = iAux;
      }
    }
    vetC[i] = maiorValor;
    vetAB[indiceSave] = -9999;
    maiorValor = 0;
  }

  printf("\nVetores A & B concatenado e decrescente (Vetor C): \n");

  for (i = 0; i < 20; i++){
    printf("%d; ", vetC[i]);
  }

  printf("\n\n");
}

int main(){

  int i, vetA[10], vetB[10], vetAB[20];

  for (i = 0; i < 10; i++){
    printf("\nInsira um valor para a posição %d do vetor A: \n", i);
    scanf("%d", &vetA[i]);
  }

  for (i = 0; i < 10; i++){
    printf("\nAgora, insira um valor para a posição %d do vetor B: \n", i);
    scanf("%d", &vetB[i]);
  }

  for (i = 0; i < 20; i++){
    if(i < 10){
      vetAB[i] = vetA[i];
    }
    else{
      vetAB[i] = vetB[i-10];
    }
  }

  ordenaVetorDecrescente(vetAB);
  
  system("pause");
  return 0;
}