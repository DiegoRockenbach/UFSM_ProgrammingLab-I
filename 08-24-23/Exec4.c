#include <stdio.h>

int a;
int main(){

  printf("\nInsira um número: \n");
  scanf("%d", &a);
  if (a%3 == 0 && a%7 == 0) {
    printf("\nO número inserido é divisível por 3 e por 7!\n\n");
  }
  else {
    printf("\nO número inserido ou não é divisível por 3, ou por 7, ou por ambos!\n\n");
  }

  system("pause");
  return 0;
}