// Aluno: Alexandre de Lima
#include <stdio.h>
void main()
{
   char operacao;
   char adicao = '+';   char subtracao = '-';    char multiplicacao = '*';  char divisao = '/';
   double valor1, valor2;
   printf("Infome o tipo de Opercao Aritimecia solicitada "
          " para adição, '-' para subtração, '*' para multiplicação e '/' para divisão :");
   scanf(" %c", &operacao);
   printf("Digite uma valor 1 numerico :");
   scanf("%lf", &valor1);
   printf("Digite uma valor 2 numerico :");
   scanf("%lf", &valor2);
   if (operacao == adicao)
   {
      printf("Adicao %.lf\n ",(valor1+valor2));
   }
   else if (operacao == subtracao)
   {
      printf("subtração %.lf\n ",(valor1-valor2));
   }
   else if (operacao == multiplicacao)
   {
      printf("multiplicação %.lf\n ",(valor1*valor2));
   }
   else if (operacao == divisao)
   {
      printf("divisão %.lf\n ",(valor1/valor2));
   }
}