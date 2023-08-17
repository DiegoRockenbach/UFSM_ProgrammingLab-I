#include <stdio.h>

int idade, dias;
int main(){

  printf ("\nInforme sua idade:\n");
  scanf ("%d", &idade);
  dias = idade*365;
  printf ("\nCom %d anos, você já viveu %d dias\n\n", idade, dias);
  return (0);
  
  system("pause");
  return 0;
}