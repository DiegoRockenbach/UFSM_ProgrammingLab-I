#include <stdio.h>
#include <time.h>

int geraCartaMostrada(int cartaMostrada, int cartaEscolhida){

  int i;

  cartaMostrada = 2 + rand() % 2;
  for (i = 0; cartaMostrada == cartaEscolhida; i++) {
    cartaMostrada = 2 + rand() % 2;
  }

  return cartaMostrada;
}

int trocaCarta(int cartaEscolhida, int cartaMostrada) {
  
  int i, antigaCartaEscolhida;

  antigaCartaEscolhida = cartaEscolhida;
  
  for (i = 1; i > 0; i++) {
    if (cartaEscolhida != antigaCartaEscolhida && cartaEscolhida != cartaMostrada){
      break;
    }
    else {
      cartaEscolhida = 1 + rand() % 3;
    }
  }

  return cartaEscolhida;
}


int main(){

  int i, cartaEscolhida, cartaMostrada, vitoriasTrocando = 0, derrotasTrocando = 0, vitoriasMantendo = 0, derrotasMantendo = 0, quantPartidas, recomendacao;
  float percentVitoriasTrocando = 0, percentDerrotasTrocando = 0, percentVitoriasMantendo = 0, percentDerrotasMantendo = 0;
  time_t seed;

  quantPartidas = 1000000;

  srand((unsigned) time(&seed));  /* espadao = 1; bastiao = 2; seteEspadas = 3; */
  

  for (i = 0; i < quantPartidas; i++){   /* TROCANDO CARTAS */
    cartaEscolhida = 1 + rand() % 3;

    cartaMostrada = geraCartaMostrada(cartaMostrada, cartaEscolhida);
    cartaEscolhida = trocaCarta(cartaEscolhida, cartaMostrada);

    if (cartaEscolhida == 1){
      vitoriasTrocando++;
    }
    else{
      derrotasTrocando++;
    }

  }

  for (i = 0; i < quantPartidas; i++){   /* MANTENDO CARTAS */
    cartaEscolhida = 1 + rand() % 3;

    cartaMostrada = geraCartaMostrada(cartaMostrada, cartaEscolhida);
    if (cartaEscolhida == 1){
      vitoriasMantendo++;
    }
    else{
      derrotasMantendo++;
    }

  }

  percentVitoriasMantendo = (float) (vitoriasMantendo*100)/i;
  percentDerrotasMantendo = (float) (derrotasMantendo*100)/i;

  printf("\n\n> Estratégia 1 (sem mudança de carta):");
  printf("\nPartidas jogadas: %d", i);
  printf("\nPartidas ganhas: %d", vitoriasMantendo);
  printf("\nPartidas perdidas: %d", derrotasMantendo);
  printf("\n%% de derrotas: %.2f%%", percentDerrotasMantendo);
  printf("\n%% de vitórias: %.2f%%", percentVitoriasMantendo);

  percentVitoriasTrocando = (float) (vitoriasTrocando*100)/i;
  percentDerrotasTrocando = (float) (derrotasTrocando*100)/i;

  printf("\n\n> Estratégia 2 (com mudança de carta):");
  printf("\nPartidas jogadas: %d", i);
  printf("\nPartidas ganhas: %d", vitoriasTrocando);
  printf("\nPartidas perdidas: %d", derrotasTrocando);
  printf("\n%% de derrotas: %.2f%%", percentDerrotasTrocando);
  printf("\n%% de vitórias: %.2f%%", percentVitoriasTrocando);

  
  if (vitoriasMantendo > vitoriasTrocando) {
    recomendacao = 1;
  }
  else if (vitoriasTrocando > vitoriasMantendo) {
    recomendacao = 2;
  }
  else {
    recomendacao = 3; /* INDIFERENTE */
  }
  
  
  if (recomendacao == 3) {
    printf("\n\n> Recomendação: Indiferente\n\n");
  }
  else {
    printf("\n\n> Recomendação: Estratégia %d\n\n", recomendacao);
  }
  

  system("pause");
  return 0;
}