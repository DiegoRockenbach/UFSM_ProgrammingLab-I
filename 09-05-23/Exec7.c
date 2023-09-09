#include <stdio.h>

float precoEntrada() {
  char diaSemana, musicaVivo;
  float precoNormal, precoFinal;

  printf("\nQual é o preço normal da entrada?\n");
  scanf("%f", &precoNormal);
  printf("\nQual dia da semana é hoje? (D = Domingo, 2 = Segunda, 3 = Terça, ... S = Sábado)\n");
  scanf(" %c", &diaSemana);
  printf("\nHoje é dia de música ao vivo? (S = Sim, N = Não)\n");
  scanf(" %c", &musicaVivo);

  precoFinal = 0;

  if (diaSemana == 'D' || diaSemana == 'd' || diaSemana == '2' || diaSemana == '3'){
    precoFinal = precoFinal-(precoNormal*0.25);
  }
  if (musicaVivo == 'S' || musicaVivo == 's'){
    precoFinal = precoFinal+(precoNormal*0.15);
  }

  if (precoFinal < 0) {
    precoFinal = precoFinal+precoNormal;
  }
  else if (precoFinal == 0) {
    precoFinal = precoNormal;
  }

  return precoFinal;
}

int main(){

  printf("\nO preço da entrada com os descontos e acréscimos devidamente aplicados é de %.2f\n\n", precoEntrada());

  system("pause");
  return 0;
}