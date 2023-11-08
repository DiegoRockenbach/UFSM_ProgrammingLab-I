#include <stdio.h>

int main(){

  int i, tam, maiorTam = 0, indMaiorTam, vetorTam[10];
  char palavras[10][40];

  for (i = 0; i < 10; i++){
    printf("\nInsira uma palavra: \n");
    fgets(palavras[i], 40, stdin);
    
    tam = 0;
    while (palavras[i][tam] != '\0'){
      tam++;
    }

    vetorTam[i] = tam-1;

    if (vetorTam[i] > maiorTam){
      maiorTam = vetorTam[i];
      indMaiorTam = i;
    }
  }
  
  printf("\nO vetor das palavras é o seguinte: \n");
  for (i = 0; i < 10; i++){
    printf("%s; ", palavras[i]);
  }
  printf("\n\n");

  printf("\nE o vetor de seus respectivos tamanhos é o seguinte: \n");
  for (i = 0; i < 10; i++){
    printf("%d; ", vetorTam[i]);
  }

  printf("\n\nPortanto, a maior palavra foi %s, com %d letras!\n", palavras[indMaiorTam], vetorTam[indMaiorTam]);

  system("pause");
  return 0;
}