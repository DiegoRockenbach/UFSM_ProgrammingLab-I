#include <stdio.h>

int peso1, peso2, nota1, nota2;
float media;
int main(){

  printf("\nInsira os respectivos pesos para as provas 1 e 2: \n\n");
  scanf("%d %d", &peso1, &peso2);
  printf("\nOs pesos inseridos foram %d e %d \n", peso1, peso2);
  printf("\nAgora, insira as notas das provas 1 e 2, nessa ordem: \n\n");
  scanf("%d %d", &nota1, &nota2);
  media = (peso1*nota1) + (peso2*nota2);
  media = media/(peso1+peso2);

  printf("\n\nDeste modo, a média ponderada das notas em questão é de %.1f\n\n", media);

  system("pause");
  return 0;
}