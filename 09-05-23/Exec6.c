#include <stdio.h>

char calculoPagina(){
  char resultado[1];
  float larguraPagina, alturaPagina, larguraF1, alturaF1, larguraF2, alturaF2, temp;

  printf("\nInsira a largura e altura das páginas do album:\n");
  scanf("%f %f", &larguraPagina, &alturaPagina);
  printf("\nAgora, insira a largura e altura de determinada foto (chamaremos de foto 1):\n");
  scanf("%f %f", &larguraF1, &alturaF1);
  printf("\nPor último, insira a largura e altura de outra determinada foto (chamaremos de foto 2)\n");
  scanf("%f %f", &larguraF2, &alturaF2);

  
  if (alturaF1+alturaF2 <= alturaPagina && larguraF1 <= larguraPagina && larguraF2 <= larguraPagina) {
    resultado[1] = 'S';
  }
  else {  // Gira F1 = F1 girada e F2 padrão
    temp = alturaF1;
    alturaF1 = larguraF1;
    larguraF1 = temp;
    if (alturaF1+alturaF2 <= alturaPagina && larguraF1 <= larguraPagina && larguraF2 <= larguraPagina) {
      resultado[1] = 'S';
    }
    else {  // "Desgira" F1 e gira F2 = F1 padrão e F2 girada
      temp = alturaF1;
      alturaF1 = larguraF1;
      larguraF1 = temp;
      temp = alturaF2;
      alturaF2 = larguraF2;
      larguraF2 = temp;
      if (alturaF1+alturaF2 <= alturaPagina && larguraF1 <= larguraPagina && larguraF2 <= larguraPagina) {
        resultado[1] = 'S';
      }
      else {  // Gira F1 = F1 girada e F2 girada
        temp = alturaF1;
        alturaF1 = larguraF1;
        larguraF1 = temp;
        if (alturaF1+alturaF2 <= alturaPagina && larguraF1 <= larguraPagina && larguraF2 <= larguraPagina) {
          resultado[1] = 'S';
        }
        else {
          resultado[1] = 'N';
        }
      }
    }
  }

  return resultado[1];

}


int main (){

  printf("\n%c\n\n", calculoPagina());

  system("pause");
  return 0;
}