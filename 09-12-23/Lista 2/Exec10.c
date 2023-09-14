#include <stdio.h>

int main(){

  int n, m, j, i;

  printf("\nUm número \'i\' é congruente módulo \'m\' a \'j\' se \'i\' %% \'m\' = \'j\' %% m\n");
  printf("\nSeguindo tal raciocínio, insira, respectivamente, os valores \'n\' (a quantidade de números naturais congruentes a ser exibida), \'m\' e \'j\' (todos devem ser positivos): \n");
  scanf("%d %d %d", &n, &m, &j);

  printf("\n");

  for (i = 0; i <= n; i++) {
    if (i%m == j%m){
      printf("%d; ", i);
    }
  }

  printf("\n\n");

  system("pause");
  return 0;
}