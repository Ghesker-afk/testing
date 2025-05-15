#include <stdio.h>

int calcularFatorial(int numero);

int main()
{
    int fatorial;
    scanf("%d", &fatorial);

    printf("%d", calcularFatorial(fatorial));

    return 0;
}

int calcularFatorial(int numero)
{
    int resultado = 1;
    for (int i = numero; i >= 1; i--)
    {
        resultado *= i;
    }

    return resultado;
}