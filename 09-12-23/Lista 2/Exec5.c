#include <stdio.h>

void imprimeSoma(){

  int num, i, soma = 0, quantNum = 0;

  for(i = 0; i < 20; i++){
    printf("\nInsira um número inteiro: \n");
    scanf("%d", &num);
    if (num*num < 225) {
      soma += num;
      quantNum++;
    }
  }

  printf("\n%d dos números inseridos tinham quadrados menores que 225, e a soma destes números é igual a %d.\n\n", quantNum, soma);

}

int main(){

  imprimeSoma();

  system("pause");
  return 0;
}