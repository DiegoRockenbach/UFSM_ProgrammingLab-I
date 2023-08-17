#include <stdio.h>

float razao, termo1, termo10;
int main(){

  printf("\nInsira a razão de uma progressão aritmética e o valor de seu primeiro termo, nessa ordem: \n");
  scanf("%f %f", &razao, &termo1);
  termo10 = termo1+(10-1)*razao;
  printf("\n\n Assim, o décimo termo dessa PA seria %.2f\n\n", termo10);
  
  system("pause");
  return 0;
}