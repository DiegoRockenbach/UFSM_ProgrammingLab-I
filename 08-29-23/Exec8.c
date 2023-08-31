#include <stdio.h>

float areaQuadra, areaCord, cordX, cordY;
int main() {

  printf("\nInsira as coordenadas X e Y, respectivamente, nas quais a bola teve contato com o solo: (Ex: 340 259)\n");
  scanf("%f %f", &cordX, &cordY);
  areaQuadra = 432*468;
  
  areaCord = cordX * cordY;
  if (areaCord > areaQuadra) {
    printf("\nA bola caiu fora da quadra!\n\n");
  }
  else {
    printf("\nA bola caiu dentro da quadra!\n\n");
  }

  system("pause");
  return 0;
}