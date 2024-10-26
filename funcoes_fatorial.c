// Aluno: Alexandre de Lima
#include <stdio.h>

int fatorial(int contador)
{
    int fatorial = 1;
    int i = 0;
    while (i < contador)
    {
        fatorial = fatorial * (contador - i);
        i++;
    }
    return fatorial;
}

int le_variavel()
{
    int valor;
    scanf("%d", &valor);
    return valor;
}
void main()
{
    int valor, fatorialv;
    for (int i = 0; i < 3; i++)
    {
        printf("Calculo da Fatorial\n");
        printf("Informe o valor :");
        valor = le_variavel();
        fatorialv = fatorial(valor);
        printf("O Valor do Faprial é %d\n", fatorialv);
    }
}