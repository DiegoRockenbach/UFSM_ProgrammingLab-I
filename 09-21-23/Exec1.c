#include <stdio.h>

int checaPrimo(int primo){

  int i = 2;

  printf("\no primo é %d;\n", primo);

  while (i <= 9) {
    if (primo%i == 0 && primo != i){
      primo++;
      i = 1;
      printf("\nprimo = %d; i = %d;\n\n", primo, i);
    }
    i++;
  }
  
  return primo;
}

void imprimeArranjo(int n){
  int primo1, primo2;


  for (primo1 = 2; primo1 < n; primo1++){
    primo1 = checaPrimo(primo1);

    for (primo2 = 2; primo2 < primo1; primo2++){
      primo2 = checaPrimo(primo2);

      if (primo1 + primo2 == n){
        printf("\n%d + %d = %d\n", primo1, primo2, n);
      }
    }
  }
}


int main(){

  int n;

  do{
    printf("\nInsira um número inteiro, positivo e par: (0 para encerrar a inserção)\n");
    scanf("%d", &n);
    if (n%2 == 0 && n>0){
      imprimeArranjo(n);
    }
    else {
      printf("\nValor incorreto inserido!\n\n");
      return 0;
    }
  } while (n != 0);
  

  system("pause");
  return 0;
}