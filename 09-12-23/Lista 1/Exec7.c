#include <stdio.h>

int main(){

  int tab, limite, resultado, i;

  printf("\nInsira a tabuada de qual número deseja visualizar: \n");
  scanf("%d", &tab);
  printf("\nAgora, insira o limite superior da tabuada gerada: \n");
  scanf("%d", &limite);
  for (i = 1; i <= limite; i++) {
    resultado = tab * i;
    printf("%d X %d = %d\n", tab, i, resultado);
  }
  printf("\n");

  system("pause");
  return 0;
}