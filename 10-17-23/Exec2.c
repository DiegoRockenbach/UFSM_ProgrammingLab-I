#include <stdio.h>

int main(){

  int i, cont = 0;
  char C, S[30];

  printf("\nInsira uma string S: \n");
  fgets(S, sizeof(S), stdin);
  
  printf("\nAgora, insira um caractere C: \n");
  scanf(" %c", &C);

  for (i = 0; i < sizeof(S); i++){
    if (S[i] == C){
      cont++;
    }
  }

  int V[cont];
  cont = 0;

  for (i = 0; i < sizeof(S); i++){
    if (S[i] == C){
      V[cont] = i;
      cont++;
    }
  }

  printf("\n");

  for (i = 0; i < cont; i++){
    printf("%d; ", V[i]);
  }

  printf("\n\n");

  system("pause");
  return 0;
}