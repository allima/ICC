// Aluno: Alexandre de Lima
#include <stdio.h>

double area_retangulo(double base, double altura)
{
  double area = (base * altura);
  return area;
}

double le_variavel()
{
  double valor;
  scanf("%lf", &valor);
  return valor;
}

void main()
{
  double base, altura;
  printf("Calculo da Área do Retângulo\n");
  printf("Informe o valor para a Base :");
  base = le_variavel();
  printf("Informe o valor para a Altura :");
  altura = le_variavel();
  double area = area_retangulo(base, altura);
  printf("Área de Retângulo é %5.lf\n", area);
}
