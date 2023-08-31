#include <stdio.h>

short int beegValue, n1, n2, resultado;
char operacao;
int main() {

  printf("\nInsira um número inteiro seguido de um espaço, um caractere de adição (+) ou multiplicação (*), dependendo de qual operação deseja realizar, seguido de outro espaço e outro valor inteiro.\n(Ex: 5 + 4)\n");
  scanf("%d %c %d", &n1, &operacao, &n2);
  if (operacao == '+') {
    resultado = n1 + n2;
  }
  else if (operacao == '*') {
    resultado = n1 * n2;
  }
  if (resultado < 0) {
    printf("\nOverflow!\n\n");
  }
  else {
    printf("\nResultado: %d; Ok.\n\n", resultado);
  }

  system("pause");
  return 0;
}