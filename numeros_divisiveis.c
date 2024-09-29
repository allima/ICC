// Alexandre de Lima
#include <stdio.h>

void main(void)
{
   int i = 85;

   while (i < 723)
   {
      if (i % 7 == 0)
      {
         printf("numero divisivel %d; ", i);
      }
      i++;
   }
}