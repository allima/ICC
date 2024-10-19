// Aluno: Alexandre de Lima
#include <stdio.h>

double area_triangulo(double base, double altura)
{
  double area = (base * altura) / 2;
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
  printf("Calculo da Área do Triângulo\n");
  printf("Informe o valor para a Base :");
  base = le_variavel();
  printf("Informe o valor para a Altura :");
  altura = le_variavel();
  double area = area_triangulo(base, altura);
  printf("Área de Triângulo é %3.lf\n", area);
}
