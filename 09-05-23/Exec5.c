#include <stdio.h>

void areaQuadrado(){
  float base, altura, area;

  printf("\nInsira a base e a altura do quadrado, respectivamente:\n");
  scanf("%f %f", &base, &altura);
  area = base * altura;
  
  printf("\nA área da figura inserida é de %.2f metros.\n\n", area);
}

void areaRetangulo(){
  float base, altura, area;

  printf("\nInsira a base e a altura do retângulo, respectivamente:\n");
  scanf("%f %f", &base, &altura);
  area = base * altura;
  
  printf("\nA área da figura inserida é de %.2f metros.\n\n", area);
}

void areaTriangulo(){
  float base, altura, area;

  printf("\nInsira a base e a altura do triângulo, respectivamente:\n");
  scanf("%f %f", &base, &altura);
  area = (base * altura)/2;
  
  printf("\nA área da figura inserida é de %.2f metros.\n\n", area);
}

void areaTrapezio(){
  float baseMenor, baseMaior, altura, area;

  printf("\nInsira a base menor, a base maior e a altura do trapézio, respectivamente:\n");
  scanf("%f %f %f", &baseMenor, &baseMaior, &altura);
  area = ((baseMaior+baseMenor)*altura)/2;
  
  printf("\nA área da figura inserida é de %.2f metros.\n\n", area);
}

int main(){
  char opcao;

  printf("\nInsira qual área você deseja calcular:\n");
  printf("\'q\' - Área de quadrado\n");
  printf("\'r\' - Área de retângulo\n");
  printf("\'t\' - Área de triângulo\n");
  printf("\'p\' - Área de trapézio\n");
  scanf(" %c", &opcao);

  switch (opcao) {
  case 'q':
    areaQuadrado();
    break;
  case 'r':
    areaRetangulo();
    break;
  case 't':
    areaTriangulo();
    break;
  case 'p':
    areaTrapezio();
    break;

  default:
    printf("\nA opção inserida é inválida!\n\n");
    break;
  }

  system("pause");
  return 0;
}