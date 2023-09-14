#include <stdio.h>

void floyd(int n){

  int i, iAux, valor = 1, quantVal = 0;

  for (i = 1; i <= n; i++) {
    printf("\n");
    quantVal = quantVal+1;
    for (iAux = 1; iAux <= quantVal; iAux++){
      printf("%02d  ", valor);
      valor += 1;
    }
  }

  printf("\n\n");

}

int main(){

  int n;

  printf("\nInsira um valor inteiro \'n\', que será o número de linhas para um Triângulo de Floyd: \n");
  scanf("%d", &n);

  floyd(n);

  system("pause");
  return 0;
}