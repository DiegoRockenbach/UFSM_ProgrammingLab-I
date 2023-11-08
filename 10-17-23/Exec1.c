#include <stdio.h>

void manipulaString(){

  int i;
  char string[30], stringCopy[sizeof(string)], c1, c2;

  printf("\nInsira uma string qualquer: \n");
  fgets(string, sizeof(string), stdin);

  for (i = 0; i < sizeof(string); i++){
    stringCopy[i] = string[i];
  }

  printf("\nAgora, insira dois caracteres (c1 e c2): \n");
  scanf(" %c %c", &c1, &c2);

  for (i = 0; i < sizeof(string); i++){
    if (string[i] == c1){
      string[i] = c2;
    }
  }

  printf("\nA string original é %s", stringCopy);
  printf("\nE a string com os caracteres substituídos é %s", string);

}

int main(){

  manipulaString();

  printf("\n\n");

  system("pause");
  return 0;
}