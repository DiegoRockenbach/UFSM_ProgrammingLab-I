#include <stdio.h>

int checaPrimo(int primo){

  int i = 2;

  while (i <= 9) {
    if (primo%i == 0 && primo != i){
      primo++;
      i = 1;
    }
    i++;
  }
  
  return primo;
}

int main(){

  int cont = 0, i, n, nAux, primo = 2, quantFatores = 0;

  printf("\nInsira um número inteiro maior que 1: \n");
  scanf("%d", &n);

  nAux = n;

  while (nAux > 1) {
    primo = checaPrimo(primo);

    if (nAux%primo == 0){
      nAux = nAux/primo;
      primo = 1;
      quantFatores++;
    }
    primo++;
  }

  int fator[quantFatores], multiplicidade[quantFatores];

  for (i = 0; i <= quantFatores-1; i++){
    multiplicidade[i] = 1;
  }

  while (n > 1){

    primo = checaPrimo(primo);

    if (n%primo == 0){
      n = n/primo;

      fator[cont] = primo;
      if (fator[cont-1] == fator[cont]){
        primo--;
        cont--;
        multiplicidade[cont]++;
      }
      cont++;
      primo = 1;
    }
    primo++;
  }

  for (i = 0; i <= cont-1; i++){
    printf("\nFator %d, multiplicidade %d;", fator[i], multiplicidade[i]);
  }

  printf("\n\n");

  system("pause");
  return 0;
}