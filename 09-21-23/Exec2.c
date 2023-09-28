#include <stdio.h>

int main(){

  int n, menorVal = 1000, somaLimitada = 0, somaTotal = 0, quantVal = 0;
  float media;

  do {
    printf("\nInsira um valor inteiro positivo: (-1 se deseja encerrar a inserção)\n");
    scanf("%d", &n);
    if (n > 100 && n < 1000){
      if (n < menorVal) {
        menorVal = n;
      }
      somaLimitada += n;
      quantVal++;
    }
    somaTotal += n;
  } while (n != -1);
  media = (float) somaLimitada/quantVal;
  
  printf("\n>O menor valor dentre os maiores que 100 e menores que 1000: %d\n", menorVal);
  printf(">A média dos valores dentre os maiores que 100 e menores que 1000: %.2f\n", media);
  printf(">A soma dos valores dentre os maiores que 100 e menores que 1000: %d\n", somaLimitada);
  printf(">A soma de todos os valores lidos: %d\n\n", somaTotal+1);

  system("pause");
  return 0;
}