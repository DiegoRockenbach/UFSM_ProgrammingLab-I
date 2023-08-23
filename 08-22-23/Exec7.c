#include <stdio.h>

float lTerreno, hTerreno, areaTerreno, lCasa, hCasa, areaCasa, areaLivreM2, areaLivrePercent;
int main(){

  printf("\nInsira, em metros, a largura e a altura de um terreno, respectivamente:\n");
  scanf("%f %f", &lTerreno, &hTerreno);
  printf("\nInsira agora, também em metros, respectivamente a largura e a altura da casa localizada nesse terrno:\n");
  scanf("%f %f", &lCasa, &hCasa);
  
  areaTerreno = lTerreno * hTerreno;
  areaCasa = lCasa * hCasa;
  areaLivreM2 = areaTerreno - areaCasa;
  areaLivrePercent = (areaLivreM2*100)/areaTerreno;
  printf("\nDeste modo, a área total do terreno é de %.2fm²;\n", areaTerreno);
  printf("\nA área do terreno ocupada pela casa é de %.2fm²;\n", areaCasa);
  printf("\nA área do terreno que não está ocupada pela casa é de %.2fm²;\n", areaLivreM2);
  printf("\nA área do terreno que não está ocupada pela casa é de %.2f%%;\n\n", areaLivrePercent);

  system ("pause");
  return 0;
}