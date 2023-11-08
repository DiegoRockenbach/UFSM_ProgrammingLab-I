#include <stdio.h>
#include <string.h>

int main(){

  int i = 0, k;
  char string[50];

  printf("\nInsira uma string qualquer: \n");
  fgets(string, sizeof(string), stdin);
  
  printf("\nInsira um número inteiro natural para ser a constante K: \n");
  scanf("%d", &k);

  while (string[i] != '\0'){
    string[i] = string[i]+k;
    i++;
  }

  printf("\nA string codificada em cifra de césar com a constante k é a seguinte: %s\n", string);

  system("pause");
  return 0;
}