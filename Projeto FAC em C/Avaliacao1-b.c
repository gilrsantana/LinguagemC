#include <stdio.h>

float mediaA(float p[], int n);
float mediaB(float p[], int n);
float mediaC(float p[], int n);
float final(float n);

int main(void)
{
    float prova[4] = {0};
    float corte = 5;
    float nota;

    printf("****************************");
    printf("\n\nPROGRAMA DE CÁLCULO DE NOTAS\n\n");
    printf("****************************");
    
    for(int i = 1; i < 4; i++)
    {
        printf("\nInforme a %iª nota: ", i );
        scanf("%f", &prova[i]);
    }
   
    printf("\n");

    if(prova[2] > 3.0 && prova[3] > 3.0)
    {
        nota = mediaA(prova, 4);
        printf("A média é: %.2f\n", nota);
 
        if(nota < 5.0)
        {
            printf("Você está em PROVA FINAL precisando tirar %.2f.\n", final(nota));
        }
        else
        {
            printf("Parabéns. Aprovado!\n");
        }
                
    }    
    else if(prova[3] >= 3.0)
    {
        nota = mediaC(prova, 4);
        printf("A média é: %.2f\n", nota);

        if(nota < 5.0)
        {
            printf("Você está em PROVA FINAL precisando tirar %.2f.\n", final(nota));
        }
        else
        {
            printf("Parabéns. Aprovado!\n");
        }
    }
    else if(prova[3] < 3.0)
    {
        nota = mediaB(prova, 4);
        printf("A média é: %.2f\n", nota);

        if(nota < 5.0)
        {
            printf("Você está em PROVA FINAL precisando tirar %.2f.\n", final(nota));
        }
        else
        {
            printf("Parabéns. Aprovado!\n");
        }
    }
    printf("\n");
    return 0;
}

float mediaA(float p[], int n)
{
    float mA;
    mA = (p[1] + (2 * p[2]) + (3 * p[3])) / 6;
    return mA;
}

float mediaB(float p[], int n)
{
    float mB;
    mB = (p[1] + (2 * p[2]) + (4 * p[3])) / 7;
   return mB;
}

float mediaC(float p[], int n)
{
    float mC;   
    mC = (p[1] + (3 * p[2]) + (3 * p[3])) / 7;
    return mC;
}

float final(float n)
{
    float ajuste;
    ajuste = (20 - n) / 3;
    return ajuste;
}