// Aluno: Alexandre de Lima
#include <math.h>
#include <stdio.h>

void main(void)
{
   int quantidade, codigoLanche;
   printf("Digite a quantidade do Lanche:");
   scanf("%d", &quantidade);
   printf("Digite codigo do Lanche:");
   scanf("%d", &codigoLanche);

   switch (codigoLanche)
   {
   case 100:
      printf("Cachorro Quente quantidade %d Valor Total %d", quantidade, (1.3 * quantidade));
      break;
   case 101:
      printf("Bauru simples quantidade %d Valor Total %d", quantidade, 1.5 * quantidade);
      break;
   case 102:
      printf(" Bauru com ovo quantidade %d Valor Total %d", quantidade, 1.80 * quantidade);
      break;
   case 103:
      printf("Hamburguer quantidade %d Valor Total %d", quantidade, 2.0 * quantidade);
      break;
   case 104:
      printf("X – Salada quantidade %d Valor Total %d", quantidade, 3.0 * quantidade);
      break;
   default:
      printf("Refrigerante quantidade %d Valor Total %d", quantidade, 1.75 * quantidade);
      break;
   }
}