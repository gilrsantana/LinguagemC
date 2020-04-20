#include <stdio.h>

long fibonacci(long x);

int main(void)
{
    for(int i = 0; i <=10; i++)
    {
        printf("Fibonacci (%2d) = %8ld\n", i, fibonacci(i));
    }
    return 0;
}

long fibonacci(long x)
{
    int valor;
    if(x <= 1)
    {
        valor = x;
    }
    else
    {
        valor = fibonacci(x - 1) + fibonacci(x - 2);
    }
    return valor;
}