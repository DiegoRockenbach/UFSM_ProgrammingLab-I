#include <stdio.h>

void calculaDV(int ultimosDigitos){

  int mp1, mp2, mp3, mp4, mp5, DV;

  mp1 = ultimosDigitos/10000;
  mp1 = mp1*9;

  mp2 = ultimosDigitos/1000;
  mp2 = mp2%10;
  mp2 = mp2*8;

  mp3 = ultimosDigitos/100;
  mp3 = mp3%10;
  mp3 = mp3*7;

  mp4 = ultimosDigitos/10;
  mp4 = mp4%10;
  mp4 = mp4*6;

  mp5 = ultimosDigitos%10;
  mp5 = mp5*5;

  DV = mp1+mp2+mp3+mp4+mp5;
  DV = DV*10;
  DV = DV%11;

  printf("\nNúmero de matrícula: %d-%d\n", ultimosDigitos, DV);
}

int imprimirMenuEscolha(){

  int opcaoCalculo;

  printf("\nEscolha o que deseja calcular:\n");
  printf("\n>1- MGA (Média Geral Acumulada)");
  printf("\n>2- IDA (Índice de Desempenho Acadêmico)");
  printf("\n>3- MTD (Média Total de Disciplinas)");
  printf("\n>4- PAA (Percentual de Aproveitamento do Aluno)");
  printf("\n>5- Sair\n\n");
  scanf("%d", &opcaoCalculo);

  return opcaoCalculo;
}

int main(){

  long long matricula;
  int i = 0, j, ultimosDigitos, tamArray, opcaoCalculo, n = 0, m = 0, cargaHorariaAprov = 0, QDA;
  float MGA, M1, M2, M3, M4, IDA, MTDAprov, MTDReprov, MTDGeral, PAA;

  printf("\nInsira a matrícula de determinado aluno: \n");
  scanf("%lld", &matricula);
  if (matricula < 10000) {
    printf("\nFormato de matrícula inválida inserida!\n\n");
    return 0;
  }

  ultimosDigitos = matricula%100000;
  calculaDV(ultimosDigitos);


  printf("\n>Inserção de disciplinas\n\n");
  printf("\nQuantas disciplinas você possui no semestre?\n");
  scanf("%d", &tamArray);
  while (tamArray < 0){
    printf("\nUm valor negativo para a quantidade de disciplinas foi inserido. Por favor, insira a quantidade correta:\n");
    printf("\nQuantas disciplinas você possui no semestre?\n");
    scanf("%d", &tamArray);
  }

  int cargaHoraria[tamArray], ChDA[tamArray], ChDR[tamArray];
  float media[tamArray], MDA[tamArray], MDR[tamArray];

  do {
    printf("\nInsira sua média final na %dª disciplina:\n", i+1);
    scanf("%f", &media[i]);
    printf("\nInsira a carga horário da %dª disciplina:\n", i+1);
    scanf("%d", &cargaHoraria[i]);
    if (media[i] >= 7){
      n++;  // Número de disciplinas aprovadas com nota
    }
    if (media[i] < 0 || media[i] > 10 || cargaHoraria[i] <= 0){
      printf("\nOs valores inseridos foram inválidos. Por favor, insira-os corretamente:\n");
      i--;
    }
    i++;
  } while (i <= tamArray-1);

  do {
    opcaoCalculo = imprimirMenuEscolha();

    switch (opcaoCalculo) {
    
    case 1:

      for (i = 0; i <= tamArray-1; i++){
        MGA += media[i];
      }
      MGA = MGA/n;
      printf("\nSua MGA (Média Geral Acumulada) é %.2f\n\n", MGA);
      break;

    case 2:
  
      printf("\nPor favor, insira a média final das disciplinas aprovadas com nota:\n");
      scanf("%f", &M1); // Média final das disciplinas aprovadas com nota
      printf("\nAgora, insira a média das disciplinas aprovadas sem nota:\n");
      scanf("%f", &M2); // Média das médias das disciplinas aprovadas sem nota
      printf("\nInsira também a nota mínima para aprovação para as disciplinas reprovadas com nota:\n");
      scanf("%f", &M3); // Nota mínima para aprovação para as disciplinas reprovadas com nota
      printf("\nPor último, insira a nota mínima para aprovação para as disciplinas reprovadas sem nota:\n");
      scanf("%f", &M4); // Nota mínima para aprovação para as disciplinas reprovadas sem nota

      for (i = 0; i <= tamArray; i++){
        if (media[i] >= 7){
          cargaHorariaAprov += cargaHoraria[i];
        }
      }

      IDA = (M1 * cargaHorariaAprov) + (M2 * cargaHorariaAprov) - ((M3 - MGA) * cargaHorariaAprov) - (M4 * cargaHorariaAprov);
      printf("\nSeu IDA (Índice de Desempenho Acadêmico) é %.2f\n\n", IDA);
      break;

    case 3:

      

      for (i = 0; i <= tamArray-1; i++){
        printf("\nPor favor, insira a média de sua %dª displina aprovada com nota:\n", i+1);
        scanf("%f", &MDA[i]); // Média da Disciplina Aprovada i
        printf("\nAgora, insira a carga horária de sua %dª disciplina aprovada:\n", i+1);
        scanf("%d", &ChDA[i]); // Carga horária da Disciplina Aprovada i
      }

      for (j = 0; j <= tamArray-1; j++){
        printf("\nInsira a média de sua %dª disciplina reprovada:\n", j+1);
        scanf("%f", &MDR[i]); // Média da Disciplina Reprovada j
        printf("\nInsira agora a carga horária de sua %dª disciplina reprovada:\n", j+1);
        scanf("%d", &ChDR[i]); //  Carga horária da Disciplina Reprovada j
      }

      printf("\nPor último, insira também o número de discplinas em que foi reprovado com nota:\n");
      scanf("%d", &m);

      for (i = 0; i <= tamArray; i++){
        MTDAprov += MDA[i] * ChDA[i];
      }
      for (j = 0; j <= tamArray; j++){
        MTDReprov += MDR[i] * ChDR[i];
      }

      MTDGeral = MTDAprov - MTDReprov;

      printf("\nSeu MTD (Média Total de Disciplinas) é de %.2f.\n", MTDGeral);
      break;

    case 4:

      printf("\nInsira quantas disciplinas você cursou e foi aprovado:\n");
      scanf("%d", &QDA);

      PAA = (QDA * 100)/tamArray;

      printf("\nSeu PAA (Percentual de Aproveitamento do Aluno) é de %.2f%%.\n", PAA);
      break;

    default:
    
      if (opcaoCalculo != 5){
        printf("\nOpção inválida inserida!\n");
      }
      break;
    }
  } while (opcaoCalculo != 5);

  system("pause");
  return 0;
}