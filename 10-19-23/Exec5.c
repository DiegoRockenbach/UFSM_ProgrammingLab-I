#include <stdio.h>
#include <string.h>

void inverteString(char string[], int tamString){

  int i = 0, j = 0;
  char temp[tamString-1];

  while (string[i] != '\0'){
    temp[i] = string[i];
    i++;
  }

  i = 0;
  for (j = tamString-2; j > (tamString-1)/2; j--){
    string[i] = string[j];
    i++;
  }

  for (j = (tamString-1)/2; j >= 0; j--){
    string[i] = temp[j];
    i++;
  }

}

int main(){

  char str[30];

  printf("\nInsira uma string a ser invertida:\n");
  fgets(str, sizeof(str), stdin);
  inverteString(str, strlen(str));
  printf("\nA string inserida após ser invertida é a seguinte: %s\n", str);

}