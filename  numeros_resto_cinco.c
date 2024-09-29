// Alexandre de Lima
#include <stdio.h>

void main(void)
{
   int i;
   i = 1000;
   while (i < 1999)
   {
      if (i % 11 == 5)
      {
         printf("numero divisivel po 5 %d; ", i);
      }
      i++;
   }
}