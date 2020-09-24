#include <stdio.h>

long fatorial(long x);

int main(void)
{
    for(int i = 0; i <=10; i++)
    {
        printf("%2d! = %8ld\n", i, fatorial(i));
    }
    return 0;
}

long fatorial(long x)
{
    int valor;
    if(x <= 1)
    {
        valor = 1;
    }
    else
    {
        valor = (x * fatorial(x - 1));
    }
    return valor;
}