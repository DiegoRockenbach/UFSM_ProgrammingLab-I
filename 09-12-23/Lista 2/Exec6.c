#include <stdio.h>

void imprimeNaturais(int n, int i){

  int cont;

  printf("\n");

  for (cont = 0; cont <= n; cont += i){
    if (cont >= 0){
      printf("%d ", cont);
    }
  }

  printf("\n\n");

}

int main(){

  int n, i;

  printf("\nInsira um número para ser o limite superior de um intervalo: \n");
  scanf("%d", &n);
  printf("\nAgora, insira o incremento para o laço de repetição: \n");
  scanf("%d", &i);

  imprimeNaturais(n, i);

  system("pause");
  return 0;
}