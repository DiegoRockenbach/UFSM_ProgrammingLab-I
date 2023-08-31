#include <stdio.h>

int numMes;
int main() {

  printf("\nInsira o número de algum mês (1-12): \n");
  scanf("%d", &numMes);
  switch (numMes) {
    case 2:
      printf("\nO mês correspondente ao código inserido tem 28 dias!\n\n");
      break;

    case 4: case 6: case 9: case 11:
      printf("\nO mês correspondente ao código inserido tem 30 dias!\n\n");
      break;
    
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
      printf("\nO mês correspondente ao código inserido tem 31 dias!\n\n");
      break;

    default:
      printf("\nO código de mês inserido foi inválido! Se deseja inserir um código válido referente a algum mês, insira algum valor dentro do intervalo de 1 a 12.\n\n");
      break;

  }

  system("pause");
  return 0;
}