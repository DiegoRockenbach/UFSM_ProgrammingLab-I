#include <stdio.h>

int main(){

  int intSup, intInf, puloConversao, i, tamanhoArray, cont = 0;

  printf("\nInsira o intervalo superior para conversão de Celsius -> Fahrenheit: \n");
  scanf("%d", &intSup);
  printf("\nAgora, insira o intervalo inferior: \n");
  scanf("%d", &intInf);

  tamanhoArray = intSup-intInf;
  int valoresConvertidos[tamanhoArray];

  printf("\nInsira também a cada quantas unidades você deseja que a conversão seja realizada: \n");
  scanf("%d", &puloConversao);

  for (i = intInf; i <= intSup; i += puloConversao){
    valoresConvertidos[cont] = (i*1.8)+32;
    cont++;
  }

  for (i = 0; i < cont; i++) {
    printf("\n%d °C -> %d °F", intInf+puloConversao*i, valoresConvertidos[i]);
  }

  printf("\n\n");

  system("pause");
  return 0;
}