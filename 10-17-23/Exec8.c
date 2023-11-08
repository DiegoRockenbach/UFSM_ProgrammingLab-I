#include <stdio.h>
#include <string.h>

void desintercalaStrings(char stringB[40], char stringC[80]){

  int i, alt = 1, contA = 0;
  char stringA[40];

  for (i = 0; i < strlen(stringA)*2; i++){
    if (alt == 1){
      stringA[contA] = stringC[i];
      contA++;
      alt = 2;
    }
    else if (alt == 2){
      alt = 1;
    }
  }

  printf("\nE, gerada a partir das strings B e C, a string A: %s\n\n", stringA);

}

void intercalaStrings(char stringA[40], char stringB[40]){

  int i, alt = 1, contA = 0, contB = 0;
  char stringC[80];

  for (i = 0; i < strlen(stringA)*2; i++){
    if (alt == 1){
      stringC[i] = stringA[contA];

      contA++;
      alt = 2;
    }
    else if (alt == 2){
      stringC[i] = stringB[contB];

      contB++;
      alt = 1;
    }
  }

  printf("\nString C: %s\n\n", stringC);

  desintercalaStrings(stringB, stringC);
}

int main(){

  char stringA[40], stringB[40];

  printf("\nInsira uma string qualquer 'A': \n");
  fgets(stringA, sizeof(stringA), stdin);

  printf("\nInsira uma string qualquer 'B': \n");
  fgets(stringB, sizeof(stringB), stdin);

  intercalaStrings(stringA, stringB);

  system("pause");
  return 0;
}