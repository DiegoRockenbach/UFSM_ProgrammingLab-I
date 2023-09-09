#include <stdio.h>

float calculaJuros(float valorCompra, int prazoPag){
  float valorTotal;

  if (prazoPag >= 1 && prazoPag <= 3) {
    valorTotal = valorCompra;
  }
  else if (prazoPag >= 4 && prazoPag <= 7) {
    valorTotal = valorCompra+(valorCompra*(0.5/100));
  }
  else if (prazoPag >= 8 && prazoPag <= 12) {
    valorTotal = valorCompra+(valorCompra*(1.5/100));
  }
  else if (prazoPag >= 13 && prazoPag <= 20) {
    valorTotal = valorCompra+(valorCompra*(3/100));
  }
  else {
    printf("\nO prazo inserido é inválido!\n\n");
  }

  return valorTotal;
  
}

int main(){
  int prazoPag;
  float valorCompra;

  printf("\nInsira o valor da compra e, em seguida, quantos dias de prazo tem seu pagamento:\n");
  scanf("%f %d", &valorCompra, &prazoPag);

  printf("\nO valor total da compra, somado aos juros, foi de R$ %.2f\n\n", calculaJuros(valorCompra, prazoPag));

  system("pause");
  return 0;
}