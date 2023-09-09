#include <stdio.h>

void calculoInterseccao() {
  int x0R1, x1R1, y0R1, y1R1, x0R2, x1R2, y0R2, y1R2;
  printf("\nInsira quatro inteiros representando as coordenadas do primeiro retângulo: (respectivamente x0R1, y0R1, x1R1 e y1R1)\n");
  scanf("%d %d %d %d", &x0R1, &y0R1, &x1R1, &y1R1);

  if (x0R1 < 0 || x1R1 < 0 || y0R1 < 0 || y1R1 < 0) {
    printf("\nA entrada de dados foi inválida!\n\n");
    return 0;
  }
  else if (x0R1 > 1000000 || x1R1 > 1000000 || y0R1 > 1000000 || y1R1 > 1000000) {
    printf("\nA entrada de dados foi inválida!\n\n");
    return 0;
  }
  else if (x0R1 >= x1R1 || y0R1 >= y1R1) {
    printf("\nA entrada de dados foi inválida!\n\n");
    return 0;
  }

  printf("\nAgora, insira quatro inteiros representando as coordenadas do segundo retângulo: (respectivamente x0R2, y0R2, x1R2 e y1R2)\n");
  scanf("%d %d %d %d", &x0R2, &y0R2, &x1R2, &y1R2);

  if (x0R2 < 0 || x1R2 < 0 || y0R2 < 0 || y1R2 < 0) {
    printf("\nA entrada de dados foi inválida!\n\n");
    return 0;
  }
  else if (x0R2 > 1000000 || x1R2 > 1000000 || y0R2 > 1000000 || y1R2 > 1000000) {
    printf("\nA entrada de dados foi inválida!\n\n");
    return 0;
  }
  else if (x0R2 >= x1R2 || y0R2 >= y1R2) {
    printf("\nA entrada de dados foi inválida!\n\n");
    return 0;
  }


  if (x0R2 <= x1R1 || y0R2 <= y1R1) {
    printf("\n1\n\n");
  }
  else {
    printf("\n0\n\n");
  }
}

int main() {

  calculoInterseccao();

  system("pause");
  return 0;
}