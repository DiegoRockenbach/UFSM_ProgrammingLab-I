#include <stdio.h>
#include <string.h>
#include <time.h>

// http://www-usr.inf.ufsm.br/~joaquim/UFSM/Alg/TF%20-%20Card%20game%20-%20dumb%20play.pdf


int converteValorCarta(char cartaRecebida){

  int cartaConvertida;
  
  if (cartaRecebida == '1'){
    cartaConvertida = 1;
  }
  else if (cartaRecebida == '2'){
    cartaConvertida = 2;
  }
  else if (cartaRecebida == '3'){
    cartaConvertida = 3;
  }
  else if (cartaRecebida == '4'){
    cartaConvertida = 4;
  }
  else if (cartaRecebida == '5'){
    cartaConvertida = 5;
  }
  else if (cartaRecebida == '6'){
    cartaConvertida = 6;
  }
  else if (cartaRecebida == '7'){
    cartaConvertida = 7;
  }
  else if (cartaRecebida == 'J'){
    cartaConvertida = 8;
  }
  else if (cartaRecebida == 'Q'){
    cartaConvertida = 9;
  }
  else if (cartaRecebida == 'K'){
    cartaConvertida = 10;
  }
  else if (cartaRecebida == 'A'){
    cartaConvertida = 11;
  }
  else if (cartaRecebida == 'C'){
    cartaConvertida = 12;
  }
  else {
    printf("\nO valor recebido é incompatível;\n\n");
    return 0;
  }

  return cartaConvertida;
}

int geraCartaRandom(int numCartasBaralho){

  int indCartaEscolhida;

  indCartaEscolhida = rand() % numCartasBaralho;

  return indCartaEscolhida;
}

int main(){
  
  char deck[51] = { '1', '1', '2', '2', '3', '3', '4', '5', '6', '7', 'J', 'Q', 'K', 'A', 
                    '1',  '1', '3', '3', '4','4', '5', '5', '7', 'C', 'J', 'Q', 'K', 'A', 
                    '1',  '1', '2', '2', '3', '4', '5', 'J', 'Q', 'K', 'A', 
                    '2', '2', '2', '4', '4', '5', '5', '5', 'J', 'Q', 'K', 'A'};
  char handP1[7][20];
  char handP2[7][20];
  char cartasCombate[7][20];
  char color[51][10];
  char cemiterio[51][20];
  int i, j, escolhaDrop, indCartaEscolhida, numCartasBaralho = 51, vez = 1, scoreP1 = 0, scoreP2 = 0, cartasMaoP1 = 7, cartasMaoP2 = 7, quantCartasCemiterio = 0, quantRedMesa;
  int escolhaCombate, isCombate = 0, cartaCombate1, cartaCombate2, quantCartasCombate;
  int indEspelhadoCombate[7];
  

  time_t seed;
  srand((unsigned) time(&seed));

  for (i = 0; i < 14; i++){
    strcpy(color[i], "Purple");
  }
  for (i = 14; i < 28; i++){
    strcpy(color[i], "Black");
  }
  for (i = 28; i < 39; i++){
    strcpy(color[i], "Red");
  }
  for (i = 39; i < 51; i++){
    strcpy(color[i], "Yellow");
  }

  for (i = 0; i < 7; i++){
    for (j = 0; j < 20; j++){
      handP1[i][j] = '\0';
    }
  }
  for (i = 0; i < 7; i++){
    for (j = 0; j < 20; j++){
      handP2[i][j] = '\0';
    }
  }



  //  Puxa mão do jogador 1
  for (i = 0; i < 7; i++){
    indCartaEscolhida = geraCartaRandom(numCartasBaralho);
    handP1[i][0] = deck[indCartaEscolhida];
    strcat(handP1[i], " - ");
    strcat(handP1[i], color[indCartaEscolhida]);
    for (j = indCartaEscolhida; j < numCartasBaralho; j++){
      deck[j] = deck[j+1];
      strcpy(color[j], color[j+1]);
    }
    numCartasBaralho--;
  }

  //  Puxa mão do jogador 2
  for (i = 0; i < 7; i++){
    indCartaEscolhida = geraCartaRandom(numCartasBaralho);
    handP2[i][0] = deck[indCartaEscolhida];
    strcat(handP2[i], " - ");
    strcat(handP2[i], color[indCartaEscolhida]);
    for (j = indCartaEscolhida; j < numCartasBaralho; j++){
      deck[j] = deck[j+1];
      strcpy(color[j], color[j+1]);
    }
    numCartasBaralho--;
  }



  //  VEZ DO JOGADOR 1
  while (numCartasBaralho > 0){

    if (vez == 1){
      printf("\nVEZ DO JOGADOR 1:\n");
      quantCartasCombate = 0;
      for (i = 0; i < cartasMaoP1; i++){
        printf("Carta %d) %s;\n", i, handP1[i]);
        if (handP1[i][4] == 'B'){
          strcpy(cartasCombate[quantCartasCombate], handP1[i]);
          indEspelhadoCombate[quantCartasCombate] = i;
          quantCartasCombate++;
        }
      }

      if (quantCartasCombate > 0){
        printf("\nVocê pode declarar COMBATE com as seguintes cartas que possui em sua mão:\n");
        for (i = 0; i < quantCartasCombate; i++){
          printf("Carta %d) %s;\n", i, cartasCombate[i]);
        }
        printf("\nDeseja declarar COMBATE?(1 = sim; <>1 = não;)\n");
        scanf("%d", &isCombate);

        if (isCombate == 1){
          
          if (quantCartasCombate > 1){
            do {
              printf("\nCom qual carta deseja declarar combate? (insira o valor do início da linha, de 0-%d):\n", quantCartasCombate-1);
              scanf("%d", &escolhaCombate);

              if (escolhaCombate < 0 || escolhaCombate > quantCartasCombate-1){
                printf("\nOpção inválida inserida!\n");
              }
            } while (escolhaCombate < 0 || escolhaCombate > quantCartasCombate-1);
          }
          else {
            escolhaCombate = 0;
          }

          
          printf("\nJOGADOR 2: responda o combate com alguma carta de sua mão: \n");
          for (i = 0; i < cartasMaoP2; i++){
            printf("Carta %d) %s;\n", i, handP2[i]);
          }
          scanf("%d", &escolhaDrop);

          cartaCombate1 = converteValorCarta(cartasCombate[escolhaCombate][0]);
          cartaCombate2 = converteValorCarta(handP2[escolhaDrop][0]);

          if (cartaCombate1 == 12){
            if (cartaCombate2 == 10){
              printf("\nO jogador 2 venceu o combate!\n");
              scoreP2 = scoreP2+3;
            }
            else {
              printf("\nO combate empatou!\n");
            }
          }
          else if (cartaCombate2 == 12){
            if (cartaCombate1 == 10){
              printf("\nO jogador 1 venceu o combate!\n");
              scoreP1 = scoreP1+3;
            }
            else {
              printf("\nO combate empatou!\n");
            }
          }

          else if ((cartaCombate1 != 12 && cartaCombate2 != 12) && cartaCombate2 > cartaCombate1 && handP2[escolhaDrop][4] == 'B'){
            printf("\nO jogador 2 venceu o combate!\n");
            scoreP2 = scoreP2+3;
          }
          else if (cartaCombate1 != 12 && cartaCombate2 != 12){
            printf("\nO jogador 1 venceu o combate!\n");
            scoreP1 = scoreP1+3;
          }

          strcpy(cemiterio[quantCartasCemiterio], handP1[indEspelhadoCombate[escolhaCombate]]);
          quantCartasCemiterio++;
          cartasMaoP1--;
          scoreP1++;
          for (i = indEspelhadoCombate[escolhaCombate]; i < cartasMaoP1; i++){
            strcpy(handP1[i], handP1[i+1]);
          }

          strcpy(cemiterio[quantCartasCemiterio], handP2[escolhaDrop]);
          quantCartasCemiterio++;
          cartasMaoP2--;
          scoreP2++;
          for (i = escolhaDrop; i < cartasMaoP2; i++){
            strcpy(handP2[i], handP2[i+1]);
          }


          for (i = 0; i < quantCartasCombate; i++){
            for (j = 0; j < 20; j++){
              cartasCombate[i][j] = '\0';
            }
          }
          
        }
        else {
          do {
            printf("\nEscolha uma de suas cartas para jogar na mesa (insira o valor do início da linha, de 0-%d):\n", cartasMaoP1-1);
            scanf("%d", &escolhaDrop);

            if (escolhaDrop < 0 || escolhaDrop > cartasMaoP1-1){
              printf("\nOpção inválida inserida!\n");
            }
          } while (escolhaDrop < 0 || escolhaDrop > cartasMaoP1-1);

          strcpy(cemiterio[quantCartasCemiterio], handP1[escolhaDrop]);
          quantCartasCemiterio++;
          cartasMaoP1--;
          scoreP1++;

          for (i = escolhaDrop; i < cartasMaoP1; i++){
            strcpy(handP1[i], handP1[i+1]);
          }
        }
      }

      else {
        do {
          printf("\nEscolha uma de suas cartas para jogar na mesa (insira o valor do início da linha, de 0-%d):\n", cartasMaoP1-1);
          scanf("%d", &escolhaDrop);

          if (escolhaDrop < 0 || escolhaDrop > cartasMaoP1-1){
            printf("\nOpção inválida inserida!\n");
          }
        } while (escolhaDrop < 0 || escolhaDrop > cartasMaoP1-1);

        strcpy(cemiterio[quantCartasCemiterio], handP1[escolhaDrop]);
        quantCartasCemiterio++;
        cartasMaoP1--;
        scoreP1++;

        for (i = escolhaDrop; i < cartasMaoP1; i++){
          strcpy(handP1[i], handP1[i+1]);
        }
      }


      quantRedMesa = 0;
      for (i = 0; i < quantCartasCemiterio; i++){
        if(cemiterio[i][4] == 'R'){
          quantRedMesa++;
        }
      }

      i = 0;
      do {
        indCartaEscolhida = geraCartaRandom(numCartasBaralho);

        for (j = 0; j < 20; j++){
          handP1[cartasMaoP1][j] = '\0';
        }

        handP1[cartasMaoP1][0] = deck[indCartaEscolhida];
        strcat(handP1[cartasMaoP1], " - ");
        strcat(handP1[cartasMaoP1], color[indCartaEscolhida]);
        cartasMaoP1++;
        for (j = indCartaEscolhida; j < numCartasBaralho; j++){
          deck[j] = deck[j+1];
          strcpy(color[j], color[j+1]);
        }
        numCartasBaralho--;


        if (cartasMaoP1 >= 7){
          break;
        }

        i++;
      } while (i < quantRedMesa);



      vez = 2;
    }



    //  VEZ DO JOGADOR 2
    else if (vez == 2){
      printf("\nVEZ DO JOGADOR 2:\n");
      quantCartasCombate = 0;
      for (i = 0; i < cartasMaoP2; i++){
        printf("Carta %d) %s;\n", i, handP2[i]);
        if (handP2[i][4] == 'B'){
          strcpy(cartasCombate[quantCartasCombate], handP2[i]);
          indEspelhadoCombate[quantCartasCombate] = i;
          quantCartasCombate++;
        }
      }

      if (quantCartasCombate > 0){
        printf("\nVocê pode declarar COMBATE com as seguintes cartas que possui em sua mão:\n");
        for (i = 0; i < quantCartasCombate; i++){
          printf("Carta %d) %s;\n", i, cartasCombate[i]);
        }
        printf("\nDeseja declarar COMBATE?(1 = sim; <>1 = não;)\n");
        scanf("%d", &isCombate);

        if (isCombate == 1){
          
          if (quantCartasCombate > 1){
            do {
              printf("\nCom qual carta deseja declarar combate? (insira o valor do início da linha, de 0-%d):\n", quantCartasCombate-1);
              scanf("%d", &escolhaCombate);

              if (escolhaCombate < 0 || escolhaCombate > quantCartasCombate-1){
                printf("\nOpção inválida inserida!\n");
              }
            } while (escolhaCombate < 0 || escolhaCombate > quantCartasCombate-1);
          }
          else {
            escolhaCombate = 0;
          }

          
          printf("\nJOGADOR 1: responda o combate com alguma carta de sua mão: \n");
          for (i = 0; i < cartasMaoP1; i++){
            printf("Carta %d) %s;\n", i, handP1[i]);
          }
          scanf("%d", &escolhaDrop);

          cartaCombate2 = converteValorCarta(cartasCombate[escolhaCombate][0]);
          cartaCombate1 = converteValorCarta(handP1[escolhaDrop][0]);

          if (cartaCombate1 == 12){
            if (cartaCombate2 == 10){
              printf("\nO jogador 2 venceu o combate!\n");
              scoreP2 = scoreP2+3;
            }
            else {
              printf("\nO combate empatou!\n");
            }
          }
          else if (cartaCombate2 == 12){
            if (cartaCombate1 == 10){
              printf("\nO jogador 1 venceu o combate!\n");
              scoreP1 = scoreP1+3;
            }
            else {
              printf("\nO combate empatou!\n");
            }
          }

          else if ((cartaCombate1 != 12 && cartaCombate2 != 12) && cartaCombate1 > cartaCombate2 && handP1[escolhaDrop][4] == 'B'){
            printf("\nO jogador 1 venceu o combate!\n");
            scoreP1 = scoreP1+3;
          }
          else if (cartaCombate1 != 12 && cartaCombate2 != 12){
            printf("\nO jogador 2 venceu o combate!\n");
            scoreP2 = scoreP2+3;
          }


          strcpy(cemiterio[quantCartasCemiterio], handP2[indEspelhadoCombate[escolhaCombate]]);
          quantCartasCemiterio++;
          cartasMaoP2--;
          scoreP2++;
          for (i = indEspelhadoCombate[escolhaCombate]; i < cartasMaoP2; i++){
            strcpy(handP2[i], handP2[i+1]);
          }

          strcpy(cemiterio[quantCartasCemiterio], handP1[escolhaDrop]);
          quantCartasCemiterio++;
          cartasMaoP1--;
          scoreP1++;
          for (i = escolhaDrop; i < cartasMaoP1; i++){
            strcpy(handP1[i], handP1[i+1]);
          }


          for (i = 0; i < quantCartasCombate; i++){
            for (j = 0; j < 20; j++){
              cartasCombate[i][j] = '\0';
            }
          }
          
        }
        else {
          do {
            printf("\nEscolha uma de suas cartas para jogar na mesa (insira o valor do início da linha, de 0-%d):\n", cartasMaoP2-1);
            scanf("%d", &escolhaDrop);

            if (escolhaDrop < 0 || escolhaDrop > cartasMaoP2-1){
              printf("\nOpção inválida inserida!\n");
            }
          } while (escolhaDrop < 0 || escolhaDrop > cartasMaoP2-1);

          strcpy(cemiterio[quantCartasCemiterio], handP2[escolhaDrop]);
          quantCartasCemiterio++;
          cartasMaoP2--;
          scoreP2++;
          for (i = escolhaDrop; i < cartasMaoP2; i++){
            strcpy(handP2[i], handP2[i+1]);
          }
        }
      }

      else {
        do {
          printf("\nEscolha uma de suas cartas para jogar na mesa (insira o valor do início da linha, de 0-%d):\n", cartasMaoP2-1);
          scanf("%d", &escolhaDrop);

          if (escolhaDrop < 0 || escolhaDrop > cartasMaoP2-1){
            printf("\nOpção inválida inserida!\n");
          }
        } while (escolhaDrop < 0 || escolhaDrop > cartasMaoP2-1);

        strcpy(cemiterio[quantCartasCemiterio], handP2[escolhaDrop]);
        quantCartasCemiterio++;
        cartasMaoP2--;
        scoreP2++;

        for (i = escolhaDrop; i < cartasMaoP2; i++){
          strcpy(handP2[i], handP2[i+1]);
        }
      }


      quantRedMesa = 0;
      for (i = 0; i < quantCartasCemiterio; i++){
        if(cemiterio[i][4] == 'R'){
          quantRedMesa++;
        }
      }

      i = 0;
      do {
        indCartaEscolhida = geraCartaRandom(numCartasBaralho);

        for (j = 0; j < 20; j++){
          handP2[cartasMaoP2][j] = '\0';
        }

        handP2[cartasMaoP2][0] = deck[indCartaEscolhida];
        strcat(handP2[cartasMaoP2], " - ");
        strcat(handP2[cartasMaoP2], color[indCartaEscolhida]);
        cartasMaoP2++;

        for (j = indCartaEscolhida; j < numCartasBaralho; j++){
          deck[j] = deck[j+1];
          strcpy(color[j], color[j+1]);
        }
        numCartasBaralho--;


        if (cartasMaoP2 >= 7){
          break;
        }

        i++;
      } while (i < quantRedMesa);



      vez = 1;
    }
  }


    printf("\nPONTUAÇÃO DO JOGADOR 1: %d;\n", scoreP1);
    printf("PONTUAÇÃO DO JOGADOR 2: %d;\n", scoreP2);
    if (scoreP1 > scoreP2){
      printf("\nJOGADOR 1 GANHOU!\n\n");
    }
    else if (scoreP2 > scoreP1){
      printf("\nJOGADOR 2 GANHOU!\n\n");
    }
    else if (scoreP1 == scoreP2){
      printf("\nEMPATE!\n\n");
    }


  system("pause");
  return 0;
}