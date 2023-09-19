#include <stdio.h>
#include <time.h>

void jogo() {

  int numGerado, chute, quantTentativas = 0;
  time_t seed;  /// Gera a seed random baseado no Unix timestamp

  srand((unsigned) time(&seed));    /// Gera randomização da função rand baseada na seed gerada previamente
  numGerado = rand() % 10;    /// Gera um número aleatório num intervalo aberto de 0-9

  printf("\nUm número inteiro aleatório foi gerado no intervalo aberto de 0-9.\n");

  do {
    printf("Qual você acha que foi ele? (insira um valor fora do intervalo para encerrar a inserção)\n");
    scanf("%d", &chute);
    if (chute == numGerado){
      printf("\nParabéns, você acertou!\n");
    }
    quantTentativas++;
  } while (chute < 0 || chute > 9 || chute != numGerado);
  printf("\nVocê levou %d tentativas para acertar o número.\n\n", quantTentativas);

}

int main() {

  int jogarNovamente;

  do {
    jogo();
    printf("\nDeseja jogar novamente? (1 = sim, qualquer outro valor = não)\n\n");
    scanf("%d", &jogarNovamente);
  } while (jogarNovamente == 1);

  system("pause");
  return 0;
}