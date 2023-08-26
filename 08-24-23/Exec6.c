#include <stdio.h>

char sexo;
float altura, pesoIdeal;
int main(){

  printf("\nInsira seu sexo biológico (M para masculino, F para feminino): \n");
  scanf(" %c", &sexo);
  printf("\nInsira sua altura: \n");
  scanf("%f", &altura);

  if (sexo == 'M' || sexo == 'm') {
    pesoIdeal = (72.7 * altura) - 58;
    printf("\nSeu peso ideal, de acordo com determinada tabela médica, é de %.2fKg!\n\n", pesoIdeal);
  }
  if (sexo == 'F' || sexo == 'f') {
    pesoIdeal = (62.1 * altura) - 44.7;
    printf("\nSeu peso ideal, de acordo com determinada tabela médica, é de %.2fKg!\n\n", pesoIdeal);
  }

  system("pause");
  return 0;
}