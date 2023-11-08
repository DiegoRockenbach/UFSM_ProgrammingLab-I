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

int removeCharRepetidosStr(char str[], int tamString){

  int i, j, iAux, checkDeletou = 0, quantCharDeletados = 0;
  char charDeletado;

  tamString = tamString-1;

  for (i = 0; i < tamString; i++){
    for (j = 0; j < tamString; j++){
      if (str[i] == str[j] && i != j){
        charDeletado = str[i];
        deletaCharStr(str, i);
        quantCharDeletados++;
        deletaCharStr(str, j-1);
        quantCharDeletados++;
        tamString = tamString-2;
        i = 0;
        j = 0;
        checkDeletou = 1;
      }
      if (checkDeletou == 1){
        for (iAux = 0; iAux < tamString; iAux++){
          if (str[iAux] == charDeletado){
            deletaCharStr(str, iAux);
            quantCharDeletados++;
            tamString = tamString-1;
            iAux = 0;
          }
        }
      }
    }
  }

  return quantCharDeletados;
}

int main(){

  int quantCharDeletados;
  char str[30];

  printf("\nInsira uma string que terá seus caracteres repetidos excluídos:\n");
  fgets(str, sizeof(str), stdin);
  quantCharDeletados = removeCharRepetidosStr(str, strlen(str));
  printf("\nA string, que teve %d caracteres removidos, se tornou %s;\n\n", quantCharDeletados, str);

  system("pause");
  return 0;
}