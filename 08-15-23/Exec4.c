#include <stdio.h>

char intString[50];
int main(){

  printf("\nInsira uma palavra para ser lida em uma variável teste: \n");
  scanf("%s", intString);
  printf("\nA palavra inserida foi \"%s\"\n\n", intString);

  system("pause");
  return 0;
}