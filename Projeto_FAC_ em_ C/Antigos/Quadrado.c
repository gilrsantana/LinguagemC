/*
* Calcula o quadrado de um inteiro até o limite fornecido pelo usuário.
*/

#include <stdio.h>

int square(int x);

int main(void)
{

    int limite;

    printf("Informe o número limite: ");
    scanf("%d", &limite);

    for(int i = 1; i <= limite; i++)
    {
        printf("O quadrado de %d é %d.\n", i, square(i));
    }
}

int square(int x)
{
    return x * x;
}