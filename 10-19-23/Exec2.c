#include <stdio.h>

int checaPrimo(int primo){

  int i = 2;

  while (i <= 9) {
    if (primo%i == 0 && primo != i){
      primo++;
      i = 1;
    }
    i++;
  }

  return primo;
}

void retornaMaiorMenorPrimo(int n, int *p1, int *p2){

  int primoAnt;

  for (*p1 = 2; *p1 < n; *p1 = *p1+1){
    primoAnt = *p1;
    *p1 = checaPrimo(*p1);
  }

  if (*p1-1 == n){
    *p2 = n+1;
    *p2 = checaPrimo(*p2);
  }
  else {
    *p2 = *p1-1;
  }
  *p1 = primoAnt-1;

}

int main(){

  int n, p1 = 2, p2 = 1;

  printf("\nInsira um número natural N: \n");
  scanf("%d", &n);

  retornaMaiorMenorPrimo(n, &p1, &p2);

  printf("\nO número natural N inserido foi %d;", n);
  printf("\nO maior número primo menor que N é %d;", p1);
  printf("\nE o menor número primo maior que N é %d;\n\n", p2);


  system("pause");
  return 0;
}