#include <stdio.h>

float A, B, C, D;
int main(){

  printf("\nInsira o peso das bolas A, B, C e D das hastes horizontais do móbile: \n");
  scanf("%f %f %f %f", &A, &B, &C, &D);
  
  if (A==B+C+D && D==B+C && B==C) {
    printf("\nO seu móbile está completamente equilibrado!\n\n");
  }
  else {
    printf("\nO seu móbile não está equilibrado!\n\n");
  }

  printf("");

  system("pause");
  return 0;
}