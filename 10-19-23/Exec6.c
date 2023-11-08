#include <stdio.h>
#include <string.h>

void deletaCharStr(char str[], int posChar){

  int i;

  i = posChar;
  while (str[i] != '\0'){
    str[i] = str[i+1];
    i++;
  }
  str[i-1] = '\0';

}

void removeCharRepetidosStr(char str[], int tamString){

  int i, j, iAux, checkDeletou = 0;
  char charDeletado;

  tamString = tamString-1;

  for (i = 0; i < tamString; i++){
    for (j = 0; j < tamString; j++){
      if (str[i] == str[j] && i != j){
        charDeletado = str[i];
        deletaCharStr(str, i);
        deletaCharStr(str, j-1);
        tamString = tamString-2;
        i = 0;
        j = 0;
        checkDeletou = 1;
      }
      if (checkDeletou == 1){
        for (iAux = 0; iAux < tamString; iAux++){
          if (str[iAux] == charDeletado){
            deletaCharStr(str, iAux);
            tamString = tamString-1;
            iAux = 0;
          }
        }
      }
    }
  }
  
}

int main(){

  char str[30];

  printf("\nInsira uma string que terá seus caracteres repetidos excluídos:\n");
  fgets(str, sizeof(str), stdin);
  removeCharRepetidosStr(str, strlen(str));
  printf("\nA string, após ter seus caracteres repetidos excluídos, se tornou %s;\n\n", str);

  system("pause");
  return 0;
}