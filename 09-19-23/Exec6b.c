#include <stdio.h>

int main(){

  int n, somaPares = 0, quantPares = 0;
  float media;

  do {
    printf("\nInsira quantos números desejar, para que deles sejam calculada a média dos pares: (insira 0 para encerrar a inserção)\n");
    scanf("%d", &n);
    if (n%2 == 0 && n != 0) {
      somaPares = somaPares + n; 
      quantPares++;
    }
  } while (n != 0);

  media = (float) somaPares/quantPares;
  printf("\nForam inseridos %d números pares, cuja soma dos valores totaliza %d, tendo média total entre si de %.2f.\n\n", quantPares, somaPares, media);

  system("pause");
  return 0;
}