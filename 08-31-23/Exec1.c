#include <stdio.h>

int i;
float a, b, c;
int main (){

  printf("\nInsira 3 valores reais para, respectivamente, as variáveis A, B e C: \n");
  scanf("%f %f %f", &a, &b, &c);
  printf("\nAgora, insira qual opção você deseja escolher:\n");
  printf("Opção 1: Escreve os valores A, B e C em ordem crescente.\n");
  printf("Opção 2: Escreve os valores A, B e C em ordem decrescente.\n");
  printf("Opção 3: Escreve os valores A, B e C de forma que o maior valor fique entre os outros dois.\n");
  scanf("%d", &i);

  switch (i) {
    case 1:

      if (a > b && a > c) {
        if (b > c) {
          printf("\n%.2f - %.2f - %.2f\n\n", c, b, a);
        }
        else {
          printf("\n%.2f - %.2f - %.2f\n\n", b, c, a);
        }
      }

      if (b > a && b > c) {
        if (a > c) {
          printf("\n%.2f - %.2f - %.2f\n\n", c, a, b);
        }
        else {
          printf("\n%.2f - %.2f - %.2f\n\n", a, c, b);
        }
      }

      if (c > a && c > b) {
        if (a > b) {
          printf("\n%.2f - %.2f - %.2f\n\n", b, a, c);
        }
        else {
          printf("\n%.2f - %.2f - %.2f\n\n", a, b, c);
        }
      }

      else {
        printf("\nOs três valores reais devem ser diferentes entre si!\n\n");
      }

      break;

    case 2:

      if (a > b && a > c) {
        if (b > c) {
          printf("\n%.2f - %.2f - %.2f\n\n", a, b, c);
        }
        else {
          printf("\n%.2f - %.2f - %.2f\n\n", a, c, b);
        }
      }

      if (b > a && b > c) {
        if (a > c) {
          printf("\n%.2f - %.2f - %.2f\n\n", b, a, c);
        }
        else {
          printf("\n%.2f - %.2f - %.2f\n\n", b, c, a);
        }
      }

      if (c > a && c > b) {
        if (a > b) {
          printf("\n%.2f - %.2f - %.2f\n\n", c, a, b);
        }
        else {
          printf("\n%.2f - %.2f - %.2f\n\n", c, b, a);
        }
      }

      else {
        printf("\nOs três valores reais devem ser diferentes entre si!\n\n");
      }

      break;

    case 3:

      if (a > b && a > c) {
        printf("\n%.2f - %.2f - %.2f\n\n", b, a, c);
      }

      if (b > a && b > c) {
        printf("\n%.2f - %.2f - %.2f\n\n", a, b, c);
      }

      if (c > a && c > b) {
        printf("\n%.2f - %.2f - %.2f\n\n", a, c, b);
      }

      else {
        printf("\nOs três valores reais devem ser diferentes entre si!\n\n");
      }

      break;

    default:
      printf("\nA opção inserida não foi válida! Caso deseja inserir uma opção válida, escolha entre os valores \'1\', \'2\' ou \'3\'.\n\n");
  }

  system("pause");
  return 0;
}