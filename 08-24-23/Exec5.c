#include <stdio.h>
#include <math.h>

float a, b, c, delta, raizNeg, raizPos, raizUnica;
int main(){

  printf("\nPressupondo uma equação de segundo grau, insira o valor de A:\n");
  scanf("%f", &a);
  printf("\nAgora, insira o valor de B:\n");
  scanf("%f", &b);
  printf("\nE, por último, insira o valor de C:\n");
  scanf("%f", &c);
  
  delta = (pow(b,2)-4*a*c); // Equação de segundo grau: (-b±√b²-4ac)/2a

  if (a==0) {
    raizUnica = -c/b;
    printf("\n\nVisto que o valor inserido para A foi zero, forma-se uma equação de primeiro grau, com sua única raiz sendo %.2f\n\n", raizUnica);
  }
  else if (delta<0) {
    printf("\nA equação com os valores inseridos não tem raízes.\n\n");
  }
  else {
    delta = sqrt(delta);
    raizPos = ((-b)+delta)/(2*a);
    raizNeg = ((-b)-delta)/(2*a);
    printf("\nA raíz positiva da equação em questão é %.2f, e a raiz negativa é %.2f.\n\n", raizPos, raizNeg);
  }

  system("pause");
  return 0;
}