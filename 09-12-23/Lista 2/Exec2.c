#include <stdio.h>

int main(){

  int soma[20], i, cont = 0;

  for (i = 100; i <= 200; i++){
    if (i%13 == 0){
      soma[cont] = i;
      cont++;
    }
  }

  printf("\n");

  for (i = 0; i <= cont; i++){
    if (soma[i] < 100 || soma[i] > 200){
      break;
    }
    else {
      printf("%d ", soma[i]);
    }
  }

  printf("\n\n");

  system("pause");
  return 0;
}