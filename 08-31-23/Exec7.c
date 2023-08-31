#include <stdio.h>

char codSexo;
float altura, pesoIdeal;
int main() {

  printf("\nInsira seu sexo biológico: \'M\' para masculino e \'F\' para feminino: \n");
  scanf(" %c", &codSexo);
  printf("\nInsira também sua altura: \n");
  scanf("%f", &altura);

  switch (codSexo) {
    case 'M':
      pesoIdeal = (altura - 100)*0.9;
      printf("\nSeu peso ideal é de %.2f!\n\n", pesoIdeal);
      break;

    case 'F':
      pesoIdeal = (altura - 100)*0.85;
      printf("\nSeu peso ideal é de %.2f!\n\n", pesoIdeal);
      break;

    default:
      printf("\nO código inserido não é válido! Neste programa, os únicos códigos de sexo computados são dois: \'M\' e \'F\'.\n\n");
      break;
  }

  system("pause");
  return 0;
}