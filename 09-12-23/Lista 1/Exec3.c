#include <stdio.h>

int main(){

  int matricula, i;
  float n1, n2, n3, mediaP;

  for (i=1; i < 11; i++) {
    printf("\nInsira sua matrícula: \n");
    scanf("%d", &matricula);
    printf("\nAgora, insira suas 3 notas: \n");
    scanf("%f %f %f", &n1, &n2, &n3);
    mediaP = ((n1*4)+(n2*3)+(n3*3))/10;
    printf("\nSua matrícula é: %d;\n", matricula);
    printf("\nSuas 3 notas são, respectivamente: %.2f, %.2f e %.2f;\n", n1, n2, n3);
    printf("\nSua média é: %.2f", mediaP);
    if (mediaP >= 7) {
      printf("\nAPROVADO\n\n");
    }
    else {
      printf("\nREPROVADO\n\n");    
    }
  }

  
  

  system("pause");
  return 0;
}