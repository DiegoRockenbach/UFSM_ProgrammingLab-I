#include <stdio.h>

int cod;
int main() {

  printf("\nInsira abaixo qual é o código do produto em questão: \n");
  scanf("%d", &cod);
  
  switch (cod) {
    
    case 1:
      printf("\nAlimento não perecível.\n\n");
      break;

    case 2 ... 4:
      printf("\nAlimento perecível.\n\n");
      break;

    case 5 ... 6:
      printf("\nHigiene pessoal.\n\n");
      break;

    case 7:
      printf("\nUtensílios domésticos.\n\n");
      break;

    case 8 ... 12:
      printf("\nLimpeza.\n\n");
      break;

    default:
      printf("\nCódigo inválido!\n\n");
      break;

  }

  system("pause");
  return 0;
}