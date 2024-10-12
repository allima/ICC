// Aluno: Alexandre de Lima
#include <stdio.h>

void main()
{
   double a[3][3];
   double b[3][3];
   double c[3][3];

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
      printf("Matriz B linha %d \n", i);
      for (int j = 0; j < 3; j++)
      {
         printf("coluna %d: ", j);
         scanf("%lf", &b[i][j]);
      }
   }

   for (int i = 0; i < 3; i++)
   {
      printf("\n Matriz C linha %d \n", i);
      for (int j = 0; j < 3; j++)
      {
         c[i][j] = b[i][j] + a[i][j];
         printf("coluna %d valor: %lf ", j,c[i][j]);
      }
   }
}
