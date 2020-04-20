/*
* Encontra o máximo de uma relação de inteiros fornecidos pelo usuário.
*/

#include <stdio.h>

void ordenado(int elemento[],int quantidade);
int maior(int elemento[],int quantidade);

int main(void)
{
    int i;
    int quantidade = 0;

    printf("informe a quantidade de elementos: ");
    scanf("%d", &quantidade);

    int elemento[quantidade];

    for(i = 0; i < quantidade; i++)
    {
        printf("Informe o %dº elemento: ", i + 1);
        scanf("%d", &elemento[i]);
    }

    ordenado(elemento, quantidade);

    for(i = 0; i < quantidade; i++)
    {
        printf("O %dº elemento é: %d\n", i + 1, elemento[i]);
    }
    
    maior(elemento, quantidade);
    printf("E o maior elemento é: %d\n\n", maior(elemento, quantidade));

    return 0;
}

void ordenado(int elemento[], int quantidade)
{
    int i, j, troca;
    for(i = 0; i < quantidade; i++)
    {
        for(j = i + 1; j < quantidade; j++)
        {
            if(elemento[i] > elemento[j])
        {
            troca = elemento[i];
            elemento[i] = elemento[j];
            elemento[j] = troca;
        }
        }
        
    }
}

int maior(int elemento[], int quantidade)
{
    int maior = elemento[0];
    int i;

    for(i = 1; i < quantidade; i++)
    {
        if(elemento[i] > maior)
        {
            maior = elemento[i];
        }
    }

    return maior;
}