#include <stdio.h>

void calculaMultiplosSimultaneos (int n, int a, int b){

  int i = 1, cont = 1;

  while (cont <= n) {
    if (i%a == 0 && i%b == 0){
      printf("\n%d; \n", i);
      cont++;
    }
    i++;
  }


}

int main(){

  int n, a, b;

  printf("\nInsira um valor inteiro positivo N: \n");
  scanf("%d", &n);
  printf("\nAgora, insira um valor inteiro positivo A: \n");
  scanf("%d", &a);
  printf("\nPor último, insira um valor inteiro positivo B: \n");
  scanf("%d", &b);

  calculaMultiplosSimultaneos(n, a, b);

  printf("\n\n");

  system("pause");
  return 0;
}