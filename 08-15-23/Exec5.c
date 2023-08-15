#include <stdio.h>

char nome[50];
int idade;
int main(){
  
  printf("\nInsira seu primeiro nome e em seguida sua idade: \n");
  scanf("%s %d", nome, &idade);
  printf("\nO nome inserido foi \"%s\"; \nA idade inserida foi de %d anos;\n\n", nome, idade);

  system("pause");
  return 0;
}