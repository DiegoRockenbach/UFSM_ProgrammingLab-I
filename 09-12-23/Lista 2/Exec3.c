#include <stdio.h>

void imprimeNum(){
  
  int i, numeros[200], pares = 0, media = 0, impares = 0, somatorio = 0;
  
  for (i = 0; i <= 200; i++) {
    printf("\nInsira um número inteiro: \n");
    scanf("%d", &numeros[i]);
  }

  for (i = 0; i <= 200; i++) {
    
    if (numeros[i]%2 == 0){
      pares += 1;
      media = media + numeros[i];
    }
    else {
      impares += 1;
      somatorio = somatorio + numeros[i];
    }
  }
  media = media/pares;
  
  printf("\nQuantidade de pares: %d;\nMédia dos pares: %d;\nQuantidade de ímpares: %d;\nSomatório dos ímpares: %d;\n\n", pares, media, impares, somatorio);

}

int main(){

  imprimeNum();

  system("pause");
  return 0;
}