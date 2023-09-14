#include <stdio.h>

int main(){

  int num, primos, i;

  printf("\nInsira um número inteiro (insira um valor <= a 0 para encerrar a inserção): \n");
  scanf("%d", &num);

  while (num > 0){
    while (i <= num) {
      if (i != 0 && i != 1) {
        if(num%i == 0) {
          primos++;
        }
      }
      i++;
    }
    printf("\nInsira um número inteiro (insira um valor <= a 0 para encerrar a inserção): \n");
    scanf("%d", &num);
  }

  printf("\nForam inseridos %d números primos.\n\n", primos);

  system("pause");
  return 0;
}