#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char opcaoInic, opcaoFormatData, opcaoFormatHorario, opcaoFormatTemp, opcaoTijolos;
int dia, mes, ano, h1, h2, m1, m2, diferencaHoras, diferencaMinutos, diferencaSegundos, diferencaMilisegundos, checkDiaNovo, numTijoloNeces;
float temperaturaCelsius, temperaturaConvert, altura, comprimento, areaTotal, areaUmTijolo, valorTotalTijolos;
int main()
{

  printf("******************\n*%10s%7c\n******************\nMenu inicial\na. Validação de data\nb. Diferença de horários\nc. Conversão de temperatura\nd. Cálculo de material\n> Selecione uma opção: _\n", "ZOXY", '*');
  scanf(" %c", &opcaoInic);
  if (opcaoInic == 'A' || opcaoInic == 'a')
  {
    printf("\nA > Validação de data\n\n");
    printf("\nInsira os supostos valores de dia, mês, e ano, nessa ordem:\n");
    scanf("%d %d %d", &dia, &mes, &ano);
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
      if (dia > 31)
      {
        printf("\nA data inserida é inválida!\n\n");
        return 0;
      }
      else
      {
        printf("\n1. DD/MM/YYYY\n2. YYYY-MM-DD\n3. DD de [MÊS] de YYYY\n> Selecione uma opção: _\n");
        scanf(" %c", &opcaoFormatData);
        if (opcaoFormatData == '1')
        {
          printf("\n%02d/%02d/%d\n\n", dia, mes, ano);
        }

        else if (opcaoFormatData == '2')
        {
          printf("\n%d-%02d-%02d\n\n", ano, mes, dia);
        }

        else if (opcaoFormatData == '3')
        {
          if (mes == 1)
          {
            printf("\n%02d de janeiro de %d\n\n", dia, ano);
          }
          else if (mes == 2)
          {
            printf("\n%02d de fevereiro de %d\n\n", dia, ano);
          }
          else if (mes == 3)
          {
            printf("\n%02d de março de %d\n\n", dia, ano);
          }
          else if (mes == 4)
          {
            printf("\n%02d de abril de %d\n\n", dia, ano);
          }
          else if (mes == 5)
          {
            printf("\n%02d de maio de %d\n\n", dia, ano);
          }
          else if (mes == 6)
          {
            printf("\n%02d de junho de %d\n\n", dia, ano);
          }
          else if (mes == 7)
          {
            printf("\n%02d de julho de %d\n\n", dia, ano);
          }
          else if (mes == 8)
          {
            printf("\n%02d de agosto de %d\n\n", dia, ano);
          }
          else if (mes == 9)
          {
            printf("\n%02d de setembro de %d\n\n", dia, ano);
          }
          else if (mes == 10)
          {
            printf("\n%02d de outubro de %d\n\n", dia, ano);
          }
          else if (mes == 11)
          {
            printf("\n%02d de novembro de %d\n\n", dia, ano);
          }
          else if (mes == 12)
          {
            printf("\n%02d de dezembro de %d\n\n", dia, ano);
          }
        }

        else
        {
          printf("\nA opção inserida não é válida!\n\n");
          return 0;
        }
      }
    }

    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
      if (dia > 30)
      {
        printf("\nA data inserida é inválida!\n\n");
        return 0;
      }
      else
      {
        printf("\n1. DD/MM/YYYY\n2. YYYY-MM-DD\n3. DD de [MÊS] de YYYY\n> Selecione uma opção: _\n");
        scanf(" %c", &opcaoFormatData);
        if (opcaoFormatData == '1')
        {
          printf("\n%02d/%02d/%d\n\n", dia, mes, ano);
        }
        else if (opcaoFormatData == '2')
        {
          printf("\n%d-%02d-%02d\n\n", ano, mes, dia);
        }

        else if (opcaoFormatData == '3')
        {
          if (mes == 1)
          {
            printf("\n%02d de janeiro de %d\n\n", dia, ano);
          }
          else if (mes == 2)
          {
            printf("\n%02d de fevereiro de %d\n\n", dia, ano);
          }
          else if (mes == 3)
          {
            printf("\n%02d de março de %d\n\n", dia, ano);
          }
          else if (mes == 4)
          {
            printf("\n%02d de abril de %d\n\n", dia, ano);
          }
          else if (mes == 5)
          {
            printf("\n%02d de maio de %d\n\n", dia, ano);
          }
          else if (mes == 6)
          {
            printf("\n%02d de junho de %d\n\n", dia, ano);
          }
          else if (mes == 7)
          {
            printf("\n%02d de julho de %d\n\n", dia, ano);
          }
          else if (mes == 8)
          {
            printf("\n%02d de agosto de %d\n\n", dia, ano);
          }
          else if (mes == 9)
          {
            printf("\n%02d de setembro de %d\n\n", dia, ano);
          }
          else if (mes == 10)
          {
            printf("\n%02d de outubro de %d\n\n", dia, ano);
          }
          else if (mes == 11)
          {
            printf("\n%02d de novembro de %d\n\n", dia, ano);
          }
          else if (mes == 12)
          {
            printf("\n%02d de dezembro de %d\n\n", dia, ano);
          }
        }

        else
        {
          printf("\nA opção inserida não é válida!\n\n");
          return 0;
        }
      }
    }
    else if (mes == 2)
    {
      if (ano % 4 == 0 && ano % 100 != 0)
      {
        if (dia > 29)
        {
          printf("\nA data inserida é inválida!\n\n");
          return 0;
        }
        else
        {
          printf("\n1. DD/MM/YYYY\n2. YYYY-MM-DD\n3. DD de [MÊS] de YYYY\n> Selecione uma opção: _\n");
          scanf(" %c", &opcaoFormatData);
          if (opcaoFormatData == '1')
          {
            printf("\n%02d/%02d/%d\n\n", dia, mes, ano);
          }
          else if (opcaoFormatData == '2')
          {
            printf("\n%d-%02d-%02d\n\n", ano, mes, dia);
          }
          else if (opcaoFormatData == '3')
          {
            if (mes == 1)
            {
              printf("\n%02d de janeiro de %d\n\n", dia, ano);
            }
            else if (mes == 2)
            {
              printf("\n%02d de fevereiro de %d\n\n", dia, ano);
            }
            else if (mes == 3)
            {
              printf("\n%02d de março de %d\n\n", dia, ano);
            }
            else if (mes == 4)
            {
              printf("\n%02d de abril de %d\n\n", dia, ano);
            }
            else if (mes == 5)
            {
              printf("\n%02d de maio de %d\n\n", dia, ano);
            }
            else if (mes == 6)
            {
              printf("\n%02d de junho de %d\n\n", dia, ano);
            }
            else if (mes == 7)
            {
              printf("\n%02d de julho de %d\n\n", dia, ano);
            }
            else if (mes == 8)
            {
              printf("\n%02d de agosto de %d\n\n", dia, ano);
            }
            else if (mes == 9)
            {
              printf("\n%02d de setembro de %d\n\n", dia, ano);
            }
            else if (mes == 10)
            {
              printf("\n%02d de outubro de %d\n\n", dia, ano);
            }
            else if (mes == 11)
            {
              printf("\n%02d de novembro de %d\n\n", dia, ano);
            }
            else if (mes == 12)
            {
              printf("\n%02d de dezembro de %d\n\n", dia, ano);
            }
          }
          else
          {
            printf("\nA opção inserida não é válida!\n\n");
            return 0;
          }
        }
      }
      else
      {
        if (dia > 28)
        {
          printf("\nA data inserida é inválida!\n\n");
          return 0;
        }
        else
        {
          printf("\n1. DD/MM/YYYY\n2. YYYY-MM-DD\n3. DD de [MÊS] de YYYY\n> Selecione uma opção: _\n");
          scanf(" %c", &opcaoFormatData);
          if (opcaoFormatData == '1')
          {
            printf("\n%02d/%02d/%d\n\n", dia, mes, ano);
          }
          else if (opcaoFormatData == '2')
          {
            printf("\n%d-%02d-%02d\n\n", ano, mes, dia);
          }
          else if (opcaoFormatData == '3')
          {
            if (mes == 1)
            {
              printf("\n%02d de janeiro de %d\n\n", dia, ano);
            }
            else if (mes == 2)
            {
              printf("\n%02d de fevereiro de %d\n\n", dia, ano);
            }
            else if (mes == 3)
            {
              printf("\n%02d de março de %d\n\n", dia, ano);
            }
            else if (mes == 4)
            {
              printf("\n%02d de abril de %d\n\n", dia, ano);
            }
            else if (mes == 5)
            {
              printf("\n%02d de maio de %d\n\n", dia, ano);
            }
            else if (mes == 6)
            {
              printf("\n%02d de junho de %d\n\n", dia, ano);
            }
            else if (mes == 7)
            {
              printf("\n%02d de julho de %d\n\n", dia, ano);
            }
            else if (mes == 8)
            {
              printf("\n%02d de agosto de %d\n\n", dia, ano);
            }
            else if (mes == 9)
            {
              printf("\n%02d de setembro de %d\n\n", dia, ano);
            }
            else if (mes == 10)
            {
              printf("\n%02d de outubro de %d\n\n", dia, ano);
            }
            else if (mes == 11)
            {
              printf("\n%02d de novembro de %d\n\n", dia, ano);
            }
            else if (mes == 12)
            {
              printf("\n%02d de dezembro de %d\n\n", dia, ano);
            }
          }
          else
          {
            printf("\nA opção inserida não é válida!\n\n");
            return 0;
          }
        }
      }
    }
    else
    {
      printf("\nA data inserida é inválida!\n\n");
      return 0;
    }
  }

  else if (opcaoInic == 'B' || opcaoInic == 'b')
  {
    printf("\nB > Diferença de horários\n\n");
    printf("\nInsira dois valores inteiros para corresponder às horas e aos minutos de um determinado horário. Insira as horas e em seguida os minutos e considere o formato 24h: \n");
    scanf("%d %d", &h1, &m1);
    printf("\nAgora, no mesmo padrão da inserção anterior, insira outro valor de horas e minutos para ser calculada a diferença entre os dois horários informados: \n");
    scanf("%d %d", &h2, &m2);
    printf("\n1. Padrão\n2. Minutos\n3. Segundos\n4. Milisegundos\n> Selecione uma opção: _\n");
    scanf(" %c", &opcaoFormatHorario);

    if (h1 < h2)
    {
      if (m2 >= m1)
      {
        diferencaHoras = h2 - h1;
        diferencaMinutos = m2 - m1;
      }
      else if (m2 < m1)
      {
        h2 = h2 - 1;
        m2 = m2 + 60;
        diferencaHoras = h2 - h1;
        diferencaMinutos = m2 - m1;
      }
    }
    else if (h1 >= h2)
    {
      h2 = h2 + 24;
      if (m2 >= m1)
      {
        diferencaHoras = h2 - h1;
        diferencaMinutos = m2 - m1;
      }
      else if (m2 < m1)
      {
        h2 = h2 - 1;
        m2 = m2 + 60;
        diferencaHoras = h2 - h1;
        diferencaMinutos = m2 - m1;
      }
    }

    if (opcaoFormatHorario == '1')
    {
      if (checkDiaNovo == 1)
      {
        printf("\nDiferença: %d horas e %d minutos (note que os horários ocorreram em dias diferentes).\n\n", diferencaHoras, diferencaMinutos);
      }
      else
      {
        printf("\nDiferença: %d horas e %d minutos.\n\n", diferencaHoras, diferencaMinutos);
      }
    }

    else if (opcaoFormatHorario == '2')
    {
      diferencaMinutos = diferencaMinutos + (diferencaHoras * 60);
      diferencaHoras = 0;
      if (checkDiaNovo == 1)
      {
        printf("\nDiferença: %d minutos (note que os horários ocorreram em dias diferentes).\n\n", diferencaMinutos);
      }
      else
      {
        printf("\nDiferença: %d minutos.\n\n", diferencaMinutos);
      }
    }

    else if (opcaoFormatHorario == '3')
    {
      diferencaMinutos = diferencaMinutos + (diferencaHoras * 60);
      diferencaHoras = 0;
      diferencaSegundos = diferencaMinutos * 60;
      if (checkDiaNovo == 1)
      {
        printf("\nDiferença: %d segundos (note que os horários ocorreram em dias diferentes).\n\n", diferencaSegundos);
      }
      else
      {
        printf("\nDiferença: %d segundos.\n\n", diferencaSegundos);
      }
    }

    else if (opcaoFormatHorario == '4')
    {
      diferencaMinutos = diferencaMinutos + (diferencaHoras * 60);
      diferencaHoras = 0;
      diferencaMilisegundos = diferencaMinutos * 60000;
      if (checkDiaNovo == 1)
      {
        printf("\nDiferença: %d milisegundos (note que os horários ocorreram em dias diferentes).\n\n", diferencaMilisegundos);
      }
      else
      {
        printf("\nDiferença: %d milisegundos.\n\n", diferencaMilisegundos);
      }
    }
  }

  else if (opcaoInic == 'C' || opcaoInic == 'c')
  {
    printf("\nC > Conversão de temperatura\n\n");
    printf("\nInsira um valor equivalente a uma temperatura em escala Celsius: \n");
    scanf("%f", &temperaturaCelsius);
    printf("\n1. Fahrenheit\n2. Kelvin\n3. Rankine\n> Selecione uma opção: _\n");
    scanf(" %c", &opcaoFormatTemp);

    if (opcaoFormatTemp == '1')
    {
      temperaturaConvert = (temperaturaCelsius * 9 / 5) + 32;
      printf("\nOpção 1: %.2fºC <-> %.2fºF\n\n", temperaturaCelsius, temperaturaConvert);
    }
    else if (opcaoFormatTemp == '2')
    {
      temperaturaConvert = temperaturaCelsius + 273.15;
      printf("\nOpção 2: %.2fºC <-> %.2fK\n\n", temperaturaCelsius, temperaturaConvert);
    }
    else if (opcaoFormatTemp == '3')
    {
      temperaturaConvert = (temperaturaCelsius * 9 / 5) + 491.67;
      printf("\nOpção 3: %.2fºC <-> %.2f°R\n\n", temperaturaCelsius, temperaturaConvert);
    }
    else
    {
      printf("\nA opção inserida não é válida!\n\n");
      return 0;
    }
  }

  else if (opcaoInic == 'D' || opcaoInic == 'd')
  {

    printf("\nD > Cálculo de material\n\n");
    printf("\nInsira dois valores equivalentes à altura e comprimento de uma parede qualquer. Ambas as medidas devem estar em metros: \n");
    scanf("%f %f", &altura, &comprimento);
    printf("\nAgora informe qual tipo de tijolo deve ser utilizado como base do cálculo para cobrir a área dada pelas medidas informadas anteriormente\n");
    printf("\n1. 6 furos: 14cm x 19cm, R$ 400,00/milheiro\n2. 8 furos: 19cm x 19cm, R$ 780,50/milheiro\n3. 9 furos: 19cm x 29cm, R$ 899,99/milheiro\n> Selecione uma opção: _\n");
    scanf(" %c", &opcaoTijolos);

    areaTotal = altura * comprimento;

    if (opcaoTijolos == '1')
    {
      areaUmTijolo = 14 * 19;
      areaUmTijolo = areaUmTijolo / 100;
      numTijoloNeces = areaTotal / areaUmTijolo;
      if (fmod(areaTotal, areaUmTijolo) != 0)
      {
        numTijoloNeces += 1;
      }
      valorTotalTijolos = (numTijoloNeces * 400) / 1000;
      printf("\nOpção 1: %d unidades (R$ %.2f)\n\n", numTijoloNeces, valorTotalTijolos);
    }

    else if (opcaoTijolos == '2')
    {
      areaUmTijolo = 19 * 19;
      areaUmTijolo = areaUmTijolo / 100;
      numTijoloNeces = areaTotal / areaUmTijolo;
      if (fmod(areaTotal, areaUmTijolo) != 0)
      {
        numTijoloNeces += 1;
      }
      valorTotalTijolos = (numTijoloNeces * 780.50) / 1000;
      printf("\nOpção 2: %d unidades (R$ %.2f)\n\n", numTijoloNeces, valorTotalTijolos);
    }

    else if (opcaoTijolos == '3')
    {
      areaUmTijolo = 19 * 29;
      areaUmTijolo = areaUmTijolo / 100;
      numTijoloNeces = areaTotal / areaUmTijolo;
      if (fmod(areaTotal, areaUmTijolo) != 0)
      {
        numTijoloNeces += 1;
      }
      valorTotalTijolos = (numTijoloNeces * 899.99) / 1000;
      printf("\nOpção 3: %d unidades (R$ %.2f)\n\n", numTijoloNeces, valorTotalTijolos);
    }

    else
    {
      printf("\nA opção inserida não é válida!\n\n");
      return 0;
    }
  }

  else
  {
    printf("\nA opção inserida não é válida!\n\n");
    return 0;
  }

  system("pause");
  return 0;
}