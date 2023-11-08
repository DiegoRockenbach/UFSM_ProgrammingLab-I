#include <stdio.h>
#include <string.h>

int main(){

  int posicao;
  char string1[20], string2[40], stringFinal[80];

  printf("\nInsira uma string:\n");
  fgets(string1, sizeof(string1), stdin);

  printf("\nInsira outra string:\n");
  fgets(string2, sizeof(string2), stdin);

  printf("\nInsira um valor inteiro natural: \n");
  scanf("%d", &posicao);

  strncpy(stringFinal, string1, posicao);
  stringFinal[posicao] = '\0';
  strcat(stringFinal, string2);
  strcat(stringFinal, string1 + posicao);

  printf("\nA string final é %s\n", stringFinal);

  system("pause");
  return 0;
}