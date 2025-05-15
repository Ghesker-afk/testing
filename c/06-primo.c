#include <stdio.h>

int main()
{
    int primo;
    int qtdDivisores = 0;
    scanf("%d", &primo);

    for (int i = 1; i <= primo; i++)
    {
        if (primo % i == 0)
        {
            qtdDivisores++;
        }
    }

    if (qtdDivisores == 2)
    {
        printf("SIM\n");
    }
    else 
    {
        printf("NÃO\n");
    }

    return 0;
}