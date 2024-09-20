// Aluno: Alexandre de Lima
#include <stdio.h>

void main(void)
{
   int idade;
   printf("Digite uma idade:");
   scanf("%d", &idade);
   if (idade > 0 && idade <= 12)
   {
      printf("Criança\n");
   }
   else if (idade >= 13 && idade <= 16)
   {
      printf("Adolescente\n");
   }
   else
   {
      printf("Adulto\n");
   }
}