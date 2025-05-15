#include <stdio.h>

int main()
{
    int numero;
    int soma = 0;
    scanf("%d", &numero);

    for (int j = 1; j <= numero; j++)
    {
        int qtdDivisores = 0;
        for (int i = 1; i <= j; i++)
        {
            if (j % i == 0)
            {
                qtdDivisores++;
            }
        }

        if (qtdDivisores == 2)
        {
            soma += j;
        }
    }

    printf("%d\n", soma);

    return 0;
}