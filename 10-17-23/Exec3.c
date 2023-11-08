#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool boolPalindromo(char string[], int tam){

  tam = tam-1;  //  pra ignorar o \0

  int i, iContra = tam-1;
  bool isPalindromo = true;

  for (i = 0; i < tam; i++){
    if (string[i] != string[iContra]){
      isPalindromo = false;
    }
    iContra--;
  }
  
  return isPalindromo;
}

int main(){

  char string[30];

  printf("\nInsira uma string qualquer: \n");
  fgets(string, sizeof(string), stdin);

  printf("\n%d;\n", boolPalindromo(string, strlen(string)));

  printf("\n\n");

  system("pause");
  return 0;
}