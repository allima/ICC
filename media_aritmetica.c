// Aluno: Alexandre de Lima
#include <stdio.h>

double media3(double a, double b, double c){
   double media = 0;
   media = (a + b + c) / 3;
   return media;
}

void main(void){
   double a, b, c, media;
   printf("Informe o número A:");
   scanf("%lf", &a);
   printf("Informe o número B:");
   scanf("%lf", &b);
   printf("Informe o número C:");
   scanf("%lf", &c);
   media = media3(a, b, c);
   printf("A o valor da media %lf para os valores informados(%.lf,%.lf,%.lf)\n", media, a, b, c);
}