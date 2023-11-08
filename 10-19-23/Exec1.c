#include <stdio.h>

void retornaNumDiv(int *num){

  int i, quantDiv = 0;

  for (i = 1; i <= *num; i++) {
    if (*num%i == 0){
      quantDiv++;
    }
  }

  *num = quantDiv;

}

int main(){

  int i, n, num;

  printf("\nInsira um número natural N que corresponde a quantos números deseja inserir: \n");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("\nInsira um valor inteiro: \n");
    scanf("%d", &num);
    retornaNumDiv(&num);
    printf("\nO número inserido possui %d divisores inteiros.\n\n", num);
  }

  system("pause");
  return 0;
}