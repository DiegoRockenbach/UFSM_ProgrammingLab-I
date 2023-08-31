#include <stdio.h>

char planoTrab;
float salarioAtual, novoSalario;
int main(){

  printf("\nInsira qual é seu plano de trabalho: \'A\', \'B\' ou \'C\')\n");
  scanf(" %c", &planoTrab);
  printf("\nAgora, insira também qual é seu salário atual: \n");
  scanf("%f", &salarioAtual);
  
  switch (planoTrab) {
    case 'A':
      novoSalario = salarioAtual+(salarioAtual*0.09);
      printf("\nSobre seu antigo salário foi aplicado um aumento de 9%%, de modo que seu novo salário seja igual a %.2f!\n\n", novoSalario);
      break;

    case 'B':
      novoSalario = salarioAtual+(salarioAtual*0.13);
      printf("\nSobre seu antigo salário foi aplicado um aumento de 13%%, de modo que seu novo salário seja igual a %.2f!\n\n", novoSalario);
      break;

    case 'C':
      novoSalario = salarioAtual+(salarioAtual*0.17);
      printf("\nSobre seu antigo salário foi aplicado um aumento de 17%%, de modo que seu novo salário seja igual a %.2f!\n\n", novoSalario);
      break;

    default:
      printf("\nA opção de plano de trabalho escolhida não foi válida! Se deseja inserir uma opção de plano de trabalho válida, insira \'A\', \'B\' ou \'C\'.\n\n");
      break;
  }

  system("pause");
  return 0;
}