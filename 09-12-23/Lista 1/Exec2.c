#include <stdio.h>

int main(){

  int i, val, maior = 0;

  for (i = 1; i < 21; i++) {
    printf("\nInsira o %d° valor:\n", i);
    scanf("%d", &val);
    if (val > maior) {
      maior = val;
    }
  }
  printf("\nO maior valor inserido foi %d.\n\n", maior);

  system("pause");
  return 0;
}