#include <stdio.h>


float mediaA(float p1, float p2, float p3);
float mediaB(float p1, float p2, float p3);
float mediaC(float p1, float p2, float p3);
float final(float n);

int main(void)
{
    float prova1, prova2, prova3;
    float corte = 5;
    float nota;

    printf("****************************");
    printf("\n\nPROGRAMA DE CÁLCULO DE NOTAS\n\n");
    printf("****************************");
    
    printf("\n");
   
    printf("\nInforme a 1ª nota: ");
    scanf("%f", &prova1);
    printf("\nInforme a 2ª nota: ");
    scanf("%f", &prova2);
    printf("\nInforme a 3ª nota: ");
    scanf("%f", &prova3);
   
    printf("\n");

    if(prova1 > 3.0 && prova2 > 3.0)
    {
        nota = mediaA(prova1, prova2, prova3);
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
    else if(prova3 >= 3.0)
    {
        nota = mediaC(prova1, prova2, prova3);;
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
    else if(prova3 < 3.0)
    {
        nota = mediaB(prova1, prova2, prova3);;
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

    return 0;
}

float mediaA(float p1, float p2, float p3)
{
    float mA;
    mA = (p1 + (2 * p2) + (3 * p3)) / 6;
    return mA;
}
float mediaB(float p1, float p2, float p3)
{
    float mB;
    mB = (p1 + (2 * p2) + (4 * p3)) / 7;
   return mB;
}
float mediaC(float p1, float p2, float p3)
{
    float mC;   
    mC = (p1 + (3 * p2) + (3 * p3)) / 7;
    return mC;
}
float final(float n)
{
    float ajuste;
    ajuste = (20 - n) / 3;
    return ajuste;
}