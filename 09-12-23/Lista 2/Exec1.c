#include <stdio.h>

void somaInt(int n){

  int i, somaTotal = 0;

  for (i = 0; i <= n; i++){
    somaTotal = somaTotal + i;
  }
  printf("\nA soma de todos os valores inteiros até o número %d é %d.\n\n", n, somaTotal);

}

int main(){

  int n;

  printf("\nInsira um valor inteiro \'n\', que será o limite superior da soma de todos os valores inteiros: \n");
  scanf("%d", &n);
  somaInt(n);

  system("pause");
  return 0;
}