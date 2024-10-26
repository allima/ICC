// Aluno: Alexandre de Lima
#include <stdio.h>

void main(void)
{
   int numero, resultado;
   printf("Digite um número:");
   scanf("%d", &numero);
   // resultado = numero % 2 == 0;
   switch (numero % 2 == 0)
   {
   case 0:
      printf("O numero %d é IMPAR\n", numero);
      break;
   default:
      printf("O numero %d é PAR\n", numero);
      break;
   }
}