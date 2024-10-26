// Alexandre de Lima
#include <stdio.h>
void main()
{
   int i, contador;
   double fatorial;

   printf("informe o valor interio :");
   scanf("%d", &contador);
   fatorial = 1;
   i = 0;
   while (i < contador)
   {
      fatorial = fatorial * (contador - i);
      i++;
   }
   printf("Valor fatorial %lf", fatorial);
}
