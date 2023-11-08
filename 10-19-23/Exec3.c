#include <stdio.h>

void inverteOrdem(int *n){
  
  int temp = *n;

  *n = 0;

  while (temp != 0){
    *n = *n * 10 + (temp%10);
    temp = temp/10;
  }

}

int main(){

  int n, quantDigitos;

  printf("\nInsira um número natural inteiro: \n");
  scanf("%d", &n);

  printf("\nO número inserido foi %d;\n", n);
  inverteOrdem(&n);
  printf("\nE, após ter sua ordem invertida, o número inserido passou a ser %d;\n\n", n);

  system("pause");
  return 0;
}