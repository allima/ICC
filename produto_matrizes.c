// Aluno:Alexandre de Lima

#include <stdio.h>

void main()
{
   double a[3][3];
   double b[3][3];
   double c[3][3];
   double valor = 0;
   for (int i = 0; i < 3; i++)
   {
      printf("Matriz A linha  %d \n", i);
      for (int j = 0; j < 3; j++)
      {
         printf("coluna %d: ", j);
         scanf("%lf", &a[i][j]);
      }
   }

   for (int i = 0; i < 3; i++)
   {
      printf("Matriz B linha  %d \n", i);
      for (int j = 0; j < 3; j++)
      {
         printf("coluna %d: ", j);
         scanf("%lf", &b[i][j]);
      }
   }
   /*


   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         a[i][j]=3;
      }

   }
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         b[i][j]=3;
      }

   }

*/

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         printf("%.lf   ", a[i][j]);
      }
      printf("\n\n");
   }
   printf("\n\n");
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         printf("%.lf   ", b[i][j]);
      }
      printf("\n\n");
   }

   for (int i = 0; i < 3; i++)
   {

      for (int j = 0; j < 3; j++)
      {
         valor = 0;
         for (int k = 0; k < 3; k++)
         {
            valor += a[i][k] * b[k][j];
         }
         c[i][j] = valor;
      }
   }

   printf("\n\n");
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         printf("%3.lf  ", c[i][j]);
      }
      printf("\n\n");
   }
}
