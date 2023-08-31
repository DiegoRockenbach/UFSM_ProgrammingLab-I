#include <stdio.h>

float precoAlcool, precoGasolina, kplAlcool, kplGasolina, consumoTotalAlcool, consumoTotalGasolina;
int main() {

  printf("\nInsira o preço do litro de álcool: \n");
  scanf("%f", &precoAlcool);
  printf("\nAgora, insira o preço do litro de gasolina: \n");
  scanf("%f", &precoGasolina);
  printf("\nInsira quantos Km por litro seu carro realiza abastecido com álcool: \n");
  scanf("%f", &kplAlcool);
  printf("\nInsira também quantos Km por litro seu carro realiza abastecido com gasolina: \n");
  scanf("%f", &kplGasolina);

  consumoTotalAlcool = precoAlcool/kplAlcool;
  consumoTotalGasolina = precoGasolina/kplGasolina;
  if (consumoTotalAlcool < consumoTotalGasolina) {
    printf("\nÉ mais econômico abastecer seu carro com álcool do que com gasolina!\n\n");
  }
  else {
    printf("\nÉ mais econômico abastecer seu carro com gasolina do que com álcool!\n\n");
  }

  system("pause");
  return 0;
}