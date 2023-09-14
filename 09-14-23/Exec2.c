#include <stdio.h>

int calculaSoma(int n, int m) {
  
  int soma, i = n;

  while (i <= m+1) {
    soma += i;
    i++;
  }

  return soma;
}

int main(){

  int n, m;

  printf("\nInsira uma dupla de números inteiros \'n\' e \'m\' (insira 0 para qualquer um dos valores para encerrar a inserção): \n");
  scanf("%d %d", &n, &m);

  while (n != 0 || m != 0) {
    printf("\n%d\n", calculaSoma(n, m));

    printf("\nInsira uma dupla de números inteiros \'n\' e \'m\': \n");
    scanf("%d %d", &n, &m);
  }

  system("pause");
  return 0;
}