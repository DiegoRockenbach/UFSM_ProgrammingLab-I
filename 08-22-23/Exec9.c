#include <stdio.h>

int cent5, cent10, cent25, cent50, real;
float somaCents, total;
int main(){
  printf("\nInsira a quantidade de moedas de 5 centavos que você têm: \n");
  scanf("%d", &cent5);
  printf("\nInsira a quantidade de moedas de 10 centavos que você têm: \n");
  scanf("%d", &cent10);
  printf("\nInsira a quantidade de moedas de 25 centavos que você têm: \n");
  scanf("%d", &cent25);
  printf("\nInsira a quantidade de moedas de 50 centavos que você têm: \n");
  scanf("%d", &cent50);
  printf("\nInsira a quantidade de moedas de 1 real que você têm: \n");
  scanf("%d", &real);
  cent5 = cent5*5;
  cent10 = cent10*10;
  cent25 = cent25*25;
  cent50 = cent50*50;
  somaCents = cent5 + cent10 + cent25 + cent50;
  somaCents = somaCents/100;
  total = somaCents + real;
  printf("\nSomando o valor de todos as moedas, o valor total que você economizou é de R$ %.2f\n\n", total);
  system("pause");
  return 0;
}