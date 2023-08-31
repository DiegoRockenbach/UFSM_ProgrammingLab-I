#include <stdio.h>

char resposta;
int dataTerrestre, dataTermopilita, dia, mes, hora, brat, mazel, salek, count, checkAnoNovo;
int main(){

/* GABARITO:
  1 BLIP = 3 segundos
  40 BLIPS = 1 TAK
  15 TAKS = 1 SALEK
  30 SALEKS = 1 MAZEL
  8 MAZELS = 1 BRAT
  73 BRATS = 1 ano
*/

  printf("\nEscolha qual opção você deseja: \n\n");
  printf("\nA) Converter de terrestre para termopilita: \n");
  printf("\nB) Converter de termopilita para terrestre: \n");
  printf("\nC) Tabela de conversões: Tabela de conversões entre valores temporais terrestres e termopilitas pré definidos;\n");
  scanf(" %c", &resposta);

  // RESPOSTA A: TERRESTRE -> TERMOPILITA
  if (resposta == 'A' || resposta == 'a') {
    printf("\nInsira uma data terrestre no formato DDMMHH (dia, mês, hora) e lhe será retornada uma data termopilita equivalente;\n");
    scanf("%d", &dataTerrestre);

    dia = dataTerrestre/10000;
    mes = dataTerrestre%10000;
    mes = mes/100;
    hora = dataTerrestre%100;


    if (dia > 31) {
      printf("\nO dia inserido foi inválido!\n\n");
      return 0;
    }
    else if (mes > 12) {
      printf("\nO mês inserido foi inválido!\n\n");
      return 0;
    }
    else if (hora > 24) {
      printf("\nA hora inserida foi inválida!\n\n");
      return 0;
    }


    count = 0;
    while (count <= dia) {   // Converter dia -> mazel/salek
      mazel += 1;
      salek += 18;
      count += 1;
    }
    
    count = 0;
    while (count <= mes) {   // Converter mês -> brat
      brat += 6;
      count += 1;
    }

    count = 0;
    while (count <= hora) {    // Converter hora -> salek
      salek += 2;
      count += 1;
    }

    while (salek >= 30) {    // Converter 30 saleks -> 1 mazel
      salek -= 30;
      mazel += 1;
    }
    while (mazel >= 8) {   // Converter 8 mazels -> 1 brat
      mazel -= 8;
      brat += 1;
    }
    while (brat > 73) {    // Converter brat 73+ em ano novo
      brat -= 73;
      checkAnoNovo += 1;
    }

    printf("\n\nA data terrestre inserida no formato DDMMHH (dia, mês, hora) foi %d, que equivale à data termopilita %02d%02d%02d, no formato BBMMSS (brat, mazel, salek)\n\n", dataTerrestre, brat, mazel, salek);
    if (checkAnoNovo == 1) {
      printf("\nNote que, durante a conversão, a contagem de brats termopilitas passou de 73, e, portanto, foi reiniciada para simbolizar um ano novo!\n\n");
    }
  }
  
  // RESPOSTA B: TERMOPILITA -> TERRESTRE
  else if (resposta == 'B' || resposta == 'b') {
    printf("\nInsira uma data termopilita no formato BBMMSS (brat, mazel, salek) e lhe será retornada uma data terrestre equivalente;\n");
    scanf("%d", &dataTermopilita);

    brat = dataTermopilita/10000;
    mazel = dataTermopilita%10000;
    mazel = mazel/100;
    salek = dataTermopilita%100;


    if (brat > 73) {
      printf("\nO brat inserido foi inválido!\n\n");
      return 0;
    }
    else if (mazel > 31) {
      printf("\nO mazel inserido foi inválido!\n\n");
      return 0;
    }
    else if (salek > 24) {
      printf("\nO salek inserido foi inválido!\n\n");
      return 0;
    }


    while (brat >= 6) {    // Converter brat -> mês (se possível)
      brat -= 6;
      mes += 1;
    }
    
    count = 0;
    while (count <= brat) {   // Converter brat -> dia
      brat -= 1;
      dia += 5;
      count += 1;
    }
    
    count = 0;
    while (count <= mazel) {    // Converter mazel -> horas
      mazel -= 1;
      hora += 15;
      count += 1;
    }

    count = 0;
    while (count <= salek) {    // Converter salek -> horas
      salek -= 2;
      hora += 1;
      count += 1;
    }

    while (hora >= 24) {    // Converter 24 horas -> 1 dia
      hora -= 24;
      dia += 1;
    }
    
    while (dia > 31) {    // Converter 31 dias -> 1 mês
      dia -= 31;
      mes += 1;
    }

    while (mes > 12) {    // Converter mês 12+ em ano novo
      mes -= 12;
      checkAnoNovo += 1;
    }

    printf("\n\nA data termopilita inserida no formato BBMMSS (brat, mazel, salek) foi %d, que equivale à data terrestre %02d%02d%02d, no formato DDMMHH (dia, mês, hora)\n\n", dataTermopilita, dia, mes, hora);
    if (checkAnoNovo == 1) {
      printf("\nNote que, durante a conversão, a contagem de meses terrestres passou de 12, e, portanto, foi reiniciada para simbolizar um ano novo!\n\n");
    }
  }

  // RESPOSTA C: TABELA DE CONVERSÕES
  else if (resposta == 'C' || resposta == 'c') {
    printf("\n\n30 segundos = 10 blips\n");
    printf("\n1 minuto = 20 blips\n");
    printf("\n5 minutos = 2 taks e 20 blips\n");
    printf("\n30 minutos = 1 salek\n");
    printf("\n60 minutos = 2 saleks\n");
    printf("\n24 horas = 1 mazel e 18 saleks // 48 saleks\n");
    printf("\n2 dias = 3 mazel e 6 saleks // 96 saleks\n");
    printf("\n3 dias = 4 mazel e 24 saleks // 144 saleks\n");
    printf("\n5 dias = 1 brat // 240 saleks\n");
    printf("\n7 dias = 1 brat, 3 mazels e 6 saleks // 11 mazel e 6 saleks// 336 saleks\n");
    printf("\n1 mês = 6 brats\n");
    printf("\n1 ano = 73 brats\n\n");
  }

  else {
    printf("\n\nResposta inválida! Insira as letras \'A\', \'B\', ou \'C\' dependendo de qual opção deseja escolher!\n\n");
  }

  system("pause");
  return 0;
}