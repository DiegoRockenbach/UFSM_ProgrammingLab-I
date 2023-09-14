#include <stdio.h>

char verificaTriangular(int num){

  int i;
  char isTriangular = 'N';

  while (i <= num) {
    if ((i*(i+1)*(i+2)) == num) {
      isTriangular = 'S';
    }
    i++;
  }

  return isTriangular;
}

int main(){

  int num;

  printf("\nInsira um número inteiro positivo para verificar se o mesmo é triangular: \n");
  scanf("%d", &num);

  printf("\n%c\n\n", verificaTriangular(num));

  system("pause");
  return 0;
}