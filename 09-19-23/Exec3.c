#include <stdio.h>

int main() {

  int n1, n2, md1, md2, i = 1;

  printf("\nInsira um número inteiro: \n");
  scanf("%d", &n1);
  printf("\nAgora, insira outro número inteiro: \n");
  scanf("%d", &n2);

  do {    /// Descobre o máximo divisor de n1
    if (n1%i == 0){
      md1 = i;
    }
    i++;
  } while (i < n1);

  i = 1;

  do {    /// Descobre o máximo divisor de n2
    if (n2%i == 0){
      md2 = i;
    }
    i++;
  } while (i < n2);

  i = 1;

  do {    /// Repete até igualar os dois 'máximos divisores' de n1 e n2
    if (md1 > md2) {
      do {
        if (n1%i == 0){
          md1 = i;
        }
        i++;
      } while (i <= md2);
    }

    else if (md2 > md1) {
      do {
        if (n2%i == 0){
          md2 = i;
        }
        i++;
      } while (i <= md1);
    }
  } while (md1 != md2);

  printf("\nO MDC (Máximo divisor comum) de %d e %d é %d\n\n", n1, n2, md1);

  system("pause");
  return 0;
}