#include <stdio.h>
#include <stdlib.h>

void calculaQuocienteResto(int n1, int n2){
  int i, cont = 0, quociente, resto, result = n1;

  for (i = n2; i < n1+n2; i += n2){
    result = result - n2;
    cont++;
  }
  
  if (result == 0){
    quociente = cont;
    resto = result;
  }
  else if (result < 0){
    quociente = cont-1;
    resto = result+n2;
  }
  printf("\nO quociente da divisão %d/%d é %d, e seu resto é %d.\n\n", n1, n2, quociente, resto);

}

int main(){

  int n1, n2;

  printf("\nInsira dois valores naturais: \n");
  scanf("%d %d", &n1, &n2);
  calculaQuocienteResto(n1, n2);

  system("pause");
  return 0;
}