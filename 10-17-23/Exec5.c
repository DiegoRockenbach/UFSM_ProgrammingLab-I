#include <stdio.h>
#include <string.h>

int main(){

  int i, quantEspacos = 0;
  char string[30], stringCopy[30];

  printf("\nInsira uma string de até 30 caracteres (incluindo espaços em branco): \n");
  fgets(string, sizeof(string), stdin);
  strcpy(stringCopy, string);

  for (i = 0; i < 30; i++){
    if (string[i] == ' '){
      stringCopy[i] = '*';
      quantEspacos++;
    }
  }

  printf("\nA string original é %s", string);
  printf("A cópia da string, já alterada, é %s", stringCopy);
  printf("%d caracteres foram alterados;\n\n", quantEspacos);


  system("pause");
  return 0;
}