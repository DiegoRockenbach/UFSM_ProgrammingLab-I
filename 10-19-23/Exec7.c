#include <stdio.h>
#include <string.h>

void duplicaCharStr(char str[], int tamString){

  int i, j, check = 1;
  char temp[tamString-1];

  while (str[i] != '\0'){
    temp[i] = str[i];
    i++;
  }

  tamString = tamString*2;
  str[tamString] = '\0';

  for (i = 0; i < tamString; i++){
    if (check == 1){
      str[i] = temp[j];
      check = 2;
    }
    else if (check == 2){
      str[i] = temp[j];
      j++;
      check = 1;
    }
  }

}

int main(){

  char str[30];

  printf("\nInsira uma string que terá todos seus caracteres duplicados:\n");
  fgets(str, sizeof(str), stdin);
  duplicaCharStr(str, strlen(str)-1);
  printf("\nA string, após ter seus caracteres duplicados, se tornou %s;\n\n", str);

  system("pause");
  return 0;
}