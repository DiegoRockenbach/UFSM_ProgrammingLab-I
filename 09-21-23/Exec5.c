#include <stdio.h>

int main(){

  int n, i, posicao = 1, cont = 0, elementos[400];
  
  do {
    printf("\nInsira um número inteiro e positivo: (0 se deseja encerrar a inserção)\n");
    scanf("%d", &n);
    if (n%posicao == 0 && n != 0){
      elementos[cont] = n;
      cont++;
    }
    posicao++;
  } while (n != 0);
  
  printf("\n");

  for (i = 0; i <= cont-1; i++){
    printf("%d; ", elementos[i]);
  }

  printf("\n\n");


  system("pause");
  return 0;
}