#include <stdio.h>

int main()
{
    int qtdNumeros;
    int numero;
    int qtdPares = 0;

    scanf("%d", &qtdNumeros);

    for (int i = 0; i < qtdNumeros; i++)
    {
        scanf("%d", &numero);
        
        if (numero % 2 == 0)
        {
            qtdPares++;
        }
    }

    printf("%d", qtdPares);

    return 0;
}