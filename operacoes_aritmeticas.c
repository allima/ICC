// Aluno: Alexandre de Lima
#include <stdio.h>
void main()
{
	double valor1, valor2, valor3;
	double primeiro, segundo, terceiro;
	printf("Digite uma valor 1 numerico :");
	scanf("%lf", &valor1);
	printf("Digite uma valor 2 numerico :");
	scanf("%lf", &valor2);
	printf("Digite uma valor 3 numerico :");
	scanf("%lf", &valor3);

	if (valor1 > valor2 && valor2 > valor3 )
	{
		primeiro = valor1;
		segundo = valor2;
		terceiro = valor3;
	}
	else if (valor2 > valor1 && valor1 > valor3)
	{
		primeiro = valor2;
		segundo = valor1;
		terceiro = valor3;
	}   else if (valor3 > valor2 && valor2 > valor1)
	{
		primeiro = valor3;
		segundo = valor2;
		terceiro = valor1;
	} else if (valor3 > valor2 && valor1 > valor2)
	{
		primeiro = valor3;
		segundo = valor2;
		terceiro = valor1;
	}
	printf("primeiro:%.lf  segundo:%.lf  terceiro:%.lf \n ", terceiro, segundo, primeiro);
}