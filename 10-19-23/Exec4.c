#include <stdio.h>
#include <string.h>

int checaPrimoEsq(int primo){

  int i = 2;

  while (i <= 9) {
    if (primo%i == 0 && primo != i){
      primo--;
      i = 1;
    }
    i++;
  }
  
  return primo;
}

int checaPrimoDir(int primo){

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

void devolvePrimos(int n, int *x, int *y){

  *x = n-1;
  *y = n+1;

  *x = checaPrimoEsq(*x);
  *y = checaPrimoDir(*y);

}

int main(){

  int n, x = 0, y = 0;

  printf("\nInsira um números inteiro natural N:\n");
  scanf("%d", &n);

  printf("\nO valor inserido foi %d;", n);
  devolvePrimos(n, &x, &y);
  printf("\nO maior número primo menor que %d é %d, e o menor número primo maior que %d é %d;\n\n", n, x, n, y);


  system("pause");
  return 0;
}