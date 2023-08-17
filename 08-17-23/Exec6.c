#include <stdio.h>

int num, numDez, resto;
int main(){

  printf("\nInsira um número inteiro de três algarismos\n\n");
  scanf("%d", &num);

  numDez = num/10;
  resto = numDez%10;

  printf("\nO algorismo das dezenas do número inserido é %d\n\n", resto);
  
  system("pause");
  return 0;
}