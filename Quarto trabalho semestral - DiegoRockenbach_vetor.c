#include <stdio.h>
#include <math.h>

int main(){

  int i, iAux, t, contPar = 0, contImpar = 0, parteIntConvert;

  do {
    printf("\nInsira um valor inteiro natural t: \n");
    scanf("%d", &t);
  } while (t < 0);

  double v1[t], v2[t], v3[t*2], v4[t*2], v5[t], v6[t], vSoma[t*2], vTemp[t*2], parteInt, n;

  for (i = 0; i < t; i++){
    printf("\nPor favor, insira um elemento para a posição %d do vetor v1: \n", i);
    scanf("%lf", &v1[i]);
    for (iAux = 0; iAux < t; iAux++){
      if (i == iAux){
        continue;
      }
      while (v1[i] == v1[iAux]) {
        printf("\nVocê inseriu um valor idêntico a outro valor já presente no vetor. Por favor, insira outro valor: \n");
        scanf("%lf", &v1[i]);
      }
    }
  }

  printf("\nAgora, insira o vetor v2: \n");

  for (i = 0; i < t; i++){
    printf("\nPor favor, insira um elemento para a posição %d do vetor v2: \n", i);
    scanf("%lf", &v2[i]);
    for (iAux = 0; iAux < t; iAux++){
      if (i == iAux){
        continue;
      }
      while (v2[i] == v2[iAux]) {
        printf("\nVocê inseriu um valor idêntico a outro valor já presente no vetor. Por favor, insira outro valor: \n");
        scanf("%lf", &v2[i]);
      }
    }
  }

  do {
    printf("\nInsira um valor inteiro n: \n");
    scanf("%lf", &n);
  } while (n < 0);


  for (i = 0; i < t*2; i++){    // POPULA V3
    if (i%2 == 0 && contPar == 1){
      v3[i] = v2[i/2];
      contPar = 0;
    }
    else if (i%2 == 0 && contPar == 0){
      v3[i] = v1[i/2];
      contPar = 1;
    }
    else if (i%2 != 0 && contImpar == 1){
      v3[i] = v1[i/2];
      contImpar = 0;
    }
    else if (i%2 != 0 && contImpar == 0){
      v3[i] = v2[i/2];
      contImpar = 1;
    }
  }


  i = 0;
  for (iAux = (t*2)-1; iAux >= 0; iAux--){    // POPULA V4
    modf(v3[iAux], &parteInt);
    parteIntConvert = parteInt;
    if (parteIntConvert%2 == 0){
      v4[i] = v3[iAux] + n;
      vSoma[i] = n;
    }
    if (parteIntConvert%2 != 0){
      v4[i] = v3[iAux] + (n*2);
      vSoma[i] = n*2;
    }
    i++;
  }

  printf("\nVetor v1: \n");
  for (i = 0; i < t; i++){
    printf("%.1f; ", v1[i]);
  }

  printf("\nVetor v2: \n");
  for (i = 0; i < t; i++){
    printf("%.1f; ", v2[i]);
  }

  printf("\nVetor v3: \n");
  for (i = 0; i < t*2; i++){
    printf("%.1f; ", v3[i]);
  }
  printf("\nVetor 4: \n");
  for (i = 0; i < t*2; i++){
    printf("%.1f; ", v4[i]);
  }
  
  for (i = 0; i < t*2; i++){
    v4[i] = v4[i] - vSoma[i];
    vTemp[i] = v4[i];
  }

  i = 0;
  for (iAux = (t*2)-1; iAux >= 0; iAux--){
    v4[i] = vTemp[iAux];
    i++;
  }

  for (i = 0; i < t*2; i++){
    if (i%2 == 0 && contPar == 1){
      v6[i/2] = v4[i];
      contPar = 0;
    }
    else if (i%2 == 0 && contPar == 0){
      v5[i/2] = v4[i];
      contPar = 1;
    }
    else if (i%2 != 0 && contImpar == 1){
      v5[i/2] = v4[i];
      contImpar = 0;
    }
    else if (i%2 != 0 && contImpar == 0){
      v6[i/2] = v4[i];
      contImpar = 1;
    }
  }

  printf("\nVetor 5: \n");
  for (i = 0; i < t; i++){
    printf("%.1f; ", v5[i]);
  }
  printf("\nVetor 6: \n");
  for (i = 0; i < t; i++){
    printf("%.1f; ", v6[i]);
  }

  printf("\n\n");

  system("pause");
  return 0;
}