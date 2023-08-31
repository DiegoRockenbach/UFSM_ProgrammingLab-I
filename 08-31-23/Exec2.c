#include <stdio.h>

char operacao;
float a, b, resultado;
int main(){

  printf("\nInsira dois valores reais quaisquer:\n");
  scanf("%f %f", &a, &b);
  printf("\nAgora, escolha qual operação deseja realizar com os números acima. Insira \'+\' para soma, \'-\' para subtração, \'*\' para multiplicação e \'/\' para divisão:\n");
  scanf(" %c", &operacao);

  switch (operacao) {
    case '+':
      resultado = a + b;
      printf("\n%.2f %c %.2f = %.2f\n\n", a, operacao, b, resultado);
      break;

    case '-':
      resultado = a - b;
      printf("\n%.2f %c %.2f = %.2f\n\n", a, operacao, b, resultado);
      break;

    case '*':
      resultado = a * b;
      printf("\n%.2f %c %.2f = %.2f\n\n", a, operacao, b, resultado);
      break;

    case '/':
      if (b<=0) {
        printf("\nÉ impossível realizar uma divisão por 0!\n\n");
      }
      else {
        resultado = a/b;
        printf("\n%.2f %c %.2f = %.2f\n\n", a, operacao, b, resultado);
      }
      
      break;

    default:
      printf("\nInsira um caractere de operação válid! As opções são \'+\', \'-\', \'*\' e \'/\'");
      break;
  }

  system("pause");
  return 0;
}