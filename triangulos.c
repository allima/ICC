// Aluno: Alexandre de Lima
#include <math.h>
#include <stdio.h>

void main(void)
{
   double a, b, c;
   printf("Digite um número para A:");
   scanf("%lf", &a);

   printf("Digite um número para B:");
   scanf("%lf", &b);

   printf("Digite um número para C:");
   scanf("%lf", &c);

   if (a > b + c)
   {
      printf("não é um triangulo\n");
   }
   if (pow(a, 2) == pow(b, 2) + pow(c, 2))
   {
      printf("triang. Retângulo\n");
   }
   if (pow(a, 2) > pow(b, 2) + pow(c, 2))
   {
      printf("triang. Obtusângulo\n");
   }
   if (pow(a, 2) < pow(b, 2) + pow(c, 2))
   {
      printf("triangulo Acutângulo\n");
   }
   if (a = b = c)
   {
      printf("Triang. Equilátero\n");
   }
   if (a == b || a == c || a == b)
   {
      printf("Isósceles\n");
   }
   if (a != b != c)
   {
      printf("escaleno\n");
   }
}