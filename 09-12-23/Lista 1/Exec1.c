#include <stdio.h>

int main(){

  int limInf, limSup, i = 0;

  printf("\nInsira, respectivamente, os limites inferior e então superior de determinado intervalo númerico inteiro: \n");
  scanf("%d %d", &limInf, &limSup);
  printf("\nOs números ímpares dentro desse intervalo são:\n");

  for (i = limInf; i <= limSup; i++) {
    if (i%2 != 0) {
      printf("%d ", i);
    }
  }
  printf("\n\n");

  system("pause");
  return 0;
}