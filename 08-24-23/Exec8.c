#include <stdio.h>
#include <math.h>

float a, b, c, semiPerimetro, resultado;
int main() {

  printf("\nInsira três valores numéricos racionais, supostos a serem as medidas dos lados de um triângulo: \n");
  scanf("%f %f %f", &a, &b, &c);

  if (a < b+c && a > fabs(b-c) && b < a+c && b > fabs(a-c) && c < a+b && c > fabs(a-b)) {
    semiPerimetro = (a+b+c)/2;
    resultado = sqrt(semiPerimetro*(semiPerimetro-a)*(semiPerimetro-b)*(semiPerimetro-c));
    printf("\nA área do triângulo gerado a partir dos lados informados é %.2fm².\n\n", resultado);
  }
  else {
    printf("\nCom os lados informados, é impossível formar um triângulo.\n\n");
  }

  system ("pause");
  return 0;
}