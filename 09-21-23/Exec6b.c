#include <stdio.h>

int main(){

  int n, quantPares = 0, somaPares = 0;
  float mediaPares;

  do {
    printf("\nInsira valores inteiros positivos, dos quais serão calculados a média dos pares: (0 para encerrar a inserção)\n");
    scanf("%d", &n);
    if (n == 0){
      break;
    }
    else {
      if (n%2 == 0){
        somaPares += n;
        quantPares++;
      }
    }
  } while (n != 0);
  
  mediaPares = somaPares/quantPares;

  printf("\nA média dos pares inseridos é %.2f\n\n", mediaPares);
  


  system("pause");
  return 0;
}