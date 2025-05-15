#include <stdio.h>

int main()
{
    int numero;
    int soma = 0;
    scanf("%d", &numero);

    while (numero > 0)
    {
        int digito = numero % 10; // pega o último dígito
        soma = soma + digito;
        numero /= 10; // remove o último digito
    }

    printf("%d", soma);

    return 0;
}