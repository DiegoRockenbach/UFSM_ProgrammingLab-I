#include <stdio.h>

int geraSomaDosDivisores(int num){

  int i, somaDiv = 0;

  for (i = 1; i < num; i++){
    if (num%i == 0){
      somaDiv = somaDiv + i;
    }
  }

  return somaDiv;
}

int main(){

  int n1, n2 = 1, somaDivN1 = 0, somaDivN2 = 0;

  printf("\nPrograma que imprime todos os pares de números amigáveis entre 1 e 1000: \n\n");

  for (n1 = 1; n1 < 1000; n1++){
    somaDivN1 = geraSomaDosDivisores(n1);
    while (n2 < 1000) {
      somaDivN2 = geraSomaDosDivisores(n2);
      if (somaDivN1 == n2 && somaDivN2 == n1 && n2 >= n1){
        printf("%d & %d; \n", n1, n2);
      }
      n2++;
    }
    n2 = 1;
  }

  printf("\n\n");

  system("pause");
  return 0;
}