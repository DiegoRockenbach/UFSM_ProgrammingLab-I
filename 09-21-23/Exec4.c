#include <stdio.h>

void imprimeDivisores(int n){

  int i;

  printf("Divisores de %d:\n", n);
  for (i = 1; i <= n; i++){
    if (n%i == 0){
      printf("%d; ", i);
    }
  }
  printf("\n\n");

}

int main(){

  int n;
  char resposta[1];

  do {
    printf("\nInsira um número inteiro positivo: \n");
    scanf("%d", &n);
    imprimeDivisores(n);

    printf("\nDeseja encerrar a execução? (Y/N)\n");
    scanf(" %c", &resposta[1]);

  } while (resposta[1] == 'Y');
  

  system("pause");
  return 0;
}