#include <stdio.h>

int main()
{
    int numero;
    int soma = 0;

    do
    {
        scanf("%d", &numero);
        soma = soma + numero;
    } 
    while (numero != 0);

    printf("%d", soma);

    return 0;
}