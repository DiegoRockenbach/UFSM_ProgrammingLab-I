#include <stdio.h>

float precoBase, precoNovo;
int main(){

  printf("\nInsira o preço base de um produto qualquer: \n\n");
  scanf("%f", &precoBase);
  precoNovo = precoBase - precoBase*0.1;
  printf("\nO preço base do produto inserido era de %.2f, e aplicando um desconto de 10%% a este valor, temos um preço novo de %.2f\n\n", precoBase, precoNovo);
  precoNovo = precoBase + precoBase*0.2;
  printf("O preço base do produto inserido era de %.2f. Agora, aplicando um aumento de 20%% a este valor, temos um preço novo de %.2f\n\n", precoBase, precoNovo);
  system("pause");
  return 0;
}