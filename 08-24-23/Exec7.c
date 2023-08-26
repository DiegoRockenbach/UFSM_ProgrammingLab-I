#include <stdio.h>

char operacao;
float a, b, resultado;
int main(){

  printf("\nInsira dois números racionais: \n");
  scanf("%f %f", &a, &b);
  printf("\nInsira qual operação você deseja realizar com os dois números inseridos (+ para soma, - para subtração, * para multiplicação e / para divisão)\n");
  scanf(" %c", &operacao);

  if (operacao=='+') {
    resultado = a + b;
    printf("\nA equação gerada com base nas opções escolhidas foi: %.2f %c %.2f = %.2f\n\n", a, operacao, b, resultado);
  }
  else  if (operacao=='-') {
    resultado = a - b;
    printf("\nA equação gerada com base nas opções escolhidas foi: %.2f %c %.2f = %.2f\n\n", a, operacao, b, resultado);
  }
  else  if (operacao=='*') {
    resultado = a * b;
    printf("\nA equação gerada com base nas opções escolhidas foi: %.2f %c %.2f = %.2f\n\n", a, operacao, b, resultado);
  }
  else  if (operacao=='/' && b != 0) {
    resultado = a / b;
    printf("\nA equação gerada com base nas opções escolhidas foi: %.2f %c %.2f = %.2f\n\n", a, operacao, b, resultado);
  }
  else {
    printf("\nNão foi possível realizar o cálculo com os valores escolhidos!\n\n");
  }

  system("pause");
  return 0;
}