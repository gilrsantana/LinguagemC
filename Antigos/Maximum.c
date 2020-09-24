/*
* Encontra o máximo de uma relação de inteiros fornecidos pelo usuário.
*/

#include <stdio.h>

int maximum(int a, int b, int c);

int main(void)
{
    int num1, num2, num3;

    printf("informe o número 1: ");
    scanf("%d", &num1);

    printf("informe o número 2: ");
    scanf("%d", &num2);

    printf("informe o número 3: ");
    scanf("%d", &num3);    
    
    printf("O maior número é: %d\n", maximum(num1, num2, num3));

    return 0;
    
}

int maximum(int a, int b, int c)
{
    int max = a;

    if(b > max)
    {
        max = b;
    }

    if(c > max)
    {
        max = c;
    }

    return max;
}