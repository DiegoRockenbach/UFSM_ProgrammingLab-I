#include <stdio.h>

int cod;
float pesoTerra, pesoPlaneta;
int main() {

  printf("\nInsira um peso qualquer: \n");
  scanf("%f", &pesoTerra);
  printf("\nAgora, insira um número correspondente a um planeta para calcular qual seria o peso inserido em determinado planeta:\n");
  printf("\nInsira o código 1 para Mercúrio.\n");
  printf("\nInsira o código 2 para Vênus.\n");
  printf("\nInsira o código 3 para Marte.\n");
  printf("\nInsira o código 4 para Júpiter.\n");
  printf("\nInsira o código 5 para Saturno.\n");
  printf("\nInsira o código 6 para Urano.\n");
  scanf("%d", &cod);

  switch (cod) {

    case 1:
      pesoPlaneta = (pesoTerra/10)*0.37;
      printf("\nO peso inserido foi de %.2fkg. Contudo, em Mercúrio, este peso pesaria aproximadamente %.2fkg!\n\n", pesoTerra, pesoPlaneta);
      break;

    case 2:
      pesoPlaneta = (pesoTerra/10)*0.88;
      printf("\nO peso inserido foi de %.2fkg. Contudo, em Mercúrio, este peso pesaria aproximadamente %.2fkg!\n\n", pesoTerra, pesoPlaneta);
      break;

    case 3:
      pesoPlaneta = (pesoTerra/10)*0.38;
      printf("\nO peso inserido foi de %.2fkg. Contudo, em Mercúrio, este peso pesaria aproximadamente %.2fkg!\n\n", pesoTerra, pesoPlaneta);
      break;

    case 4:
      pesoPlaneta = (pesoTerra/10)*2.64;
      printf("\nO peso inserido foi de %.2fkg. Contudo, em Mercúrio, este peso pesaria aproximadamente %.2fkg!\n\n", pesoTerra, pesoPlaneta);
      break;

    case 5:
      pesoPlaneta = (pesoTerra/10)*1.15;
      printf("\nO peso inserido foi de %.2fkg. Contudo, em Mercúrio, este peso pesaria aproximadamente %.2fkg!\n\n", pesoTerra, pesoPlaneta);
      break;

    case 6:
      pesoPlaneta = (pesoTerra/10)*1.17;
      printf("\nO peso inserido foi de %.2fkg. Contudo, em Mercúrio, este peso pesaria aproximadamente %.2fkg!\n\n", pesoTerra, pesoPlaneta);
      break;

    default:
      printf("\nO código do planeta escolhido não é válido! Se deseja escolher um código válido, insira \'1\', \'2\', \'3\', \'4\', \'5\' ou \'6\'.\n\n");
      break;

  }

  system("pause");
  return 0;
}