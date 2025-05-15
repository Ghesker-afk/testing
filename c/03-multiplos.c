#include <stdio.h>

int main()
{
    int qtdNumeros;

    scanf("%d", &qtdNumeros);

    for (int i = 1; i <= qtdNumeros; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}