#include <stdio.h>

int num1, num2;
int main(){

  printf("\nInsira quaisquer dois números inteiros: \n");
  scanf("%d %d", &num1, &num2);

  printf("\nO sucessor do primeiro número inserido é %d, e o antecessor do segundo número inserido é %d;\n\n", ++num1, --num2);
  
  system("pause");
  return 0;
}