#include <stdio.h>

char operacao;
int x, y, resultado;
int main() {

  printf("\nInsira dois valores inteiros que serão atribuídos para as variáveis X e Y: \n");
  scanf("%d %d", &x, &y);
  printf("\nAgora, escolha qual opção você deseja:\n");
  printf("Opção A: Calcula e exibe a média aritmética dos dois valores.\n");
  printf("Opção P: Calcula e exibe a média ponderada dos valores, supondo pesos 4 para X e 6 para Y.\n");
  printf("Opção R: Calcula e exibe o resto inteiro da divisão de Y por X.\n");
  scanf(" %c", &operacao);

  switch (operacao) {
    case 'A':
      resultado = (x + y)/2;
      printf("\nA média aritmética dos dois valores inseridos é igual a %d.\n\n", resultado);
      break;

    case 'P':
      resultado = ((x*4)+(y*6))/(4+6);
      printf("\nA média ponderada dos dois valores inseridos é igual a %d.\n\n", resultado);
      break;

    case 'R':
      if (x == 0) {
        printf("\nNão é possível realizar uma divisão por 0!\n\n");
      }
      else {
        resultado = y%x;
        printf("\nO resto inteiro da divisão de Y por X é igual a %d.\n\n", resultado);
      }
      break;

    default:
      printf("\nA opção escolhida não é válida! Se deseja inserir uma opção válida, escreva \'A\', \'P\' ou \'R\'.\n\n");
      break;
  }

  system("pause");
  return 0;
}