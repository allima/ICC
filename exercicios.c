// Aluno: Alexandre de Lima
#include <math.h>
#include <stdio.h>

void main(void)
{
   double numero;
   printf("Digite um número:");
   scanf("%lf", &numero);
   if (numero < 0)
   {
      printf("O numero escolhodo foi %lf e seu quadrado é %lf\n", numero, pow(numero, 2));
   }
   if (numero >= 0)
   {
      printf("O numero escolhodo foi %lf e sua raiz quadrada é %lf\n", numero, sqrt(numero));
   }
}