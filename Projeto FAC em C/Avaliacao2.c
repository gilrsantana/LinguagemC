#include <stdio.h>

#define MAXPROMO1 5

float promocao1(int cPromo);
float vlr1;

int main(void)
{
    int horario;
    int dd, mm;
    int dde, mme;
    int sexo;
    char tipo;
    int cupom = 0;
    int cupomPromo = 0; 
    int cupomNormal = 0;
    int cupomGratis = 0;
    float ingresso;
    float valorCupom = 20.00;
    float vlrCupomNormal = 0.00;
    float vlrCupomPromo = 0.00;
    float total;

    printf("Informe a faixa de horário desejada para entrada.\n");
    printf("(1) Entre 17:30 e 18:00, (2) Entre 18:01 e 20:00 ou");
    printf(" (3) Entre 20:01 e 23:59\n");
    scanf("%i", &horario);
    while (horario < 1 || horario > 3)
    {
        printf("Informe a faixa de horário desejada para entrada.\n");
        printf("(1) Entre 17:30 e 18:00, (2) Entre 18:01 e 20:00 ou");
        printf(" (3) Entre 20:01 e 23:59\n");
        scanf("%i", &horario);
    }
    

    switch (horario)
    {  
    case 1:
        printf("Informe a data do evento (dd/mm): ");
        scanf("%i/%i", &dde, &mme);

        printf("Informe o sexo. (1) Homem ou (2) Mulher: ");
        scanf("%i", &sexo);
        while (sexo < 1 || sexo > 2)
        {
            printf("Informe o sexo. (1) Homem ou (2) Mulher: ");
            scanf("%i", &sexo);
        }
        if(sexo == 1)
        {
            ingresso = 50.00;
            tipo = 'H';
        }
        else
        {
            ingresso = 50.00;
            tipo = 'M';
            
        }

        printf("Qual o dia de seu aniverssário? (dd/mm): ");
        scanf("%i/%i", &dd, &mm);
        if((dd == dde) && (mm == mme))
        {
            cupomGratis = 1;
        }
        
        printf("Quantos cupons de bebida deseja? ");
        scanf("%i", &cupom);
        
        if(cupom <= MAXPROMO1)
        {
            cupomPromo = cupom - cupomGratis;  
            promocao1(cupomPromo);
        }
        else
        {
            cupomNormal = cupom - cupomGratis - MAXPROMO1;
            vlrCupomNormal = cupomNormal * valorCupom;

            cupomPromo = MAXPROMO1;
            promocao1(cupomPromo);
        }
        break;

    case 2:
        printf("Informe a data do evento (dd/mm): ");
        scanf("%i/%i", &dde, &mme);

        printf("Informe o sexo. (1) Homem ou (2) Mulher: ");
        scanf("%i", &sexo);
        while (sexo < 1 || sexo > 2)
        {
            printf("Informe o sexo. (1) Homem ou (2) Mulher: ");
            scanf("%i", &sexo);
        }
        
        if(sexo == 1)
        {
            ingresso = 70.00;
            tipo = 'H';
        }
        else
        {
            ingresso = 60.00;
            tipo = 'M';
            
        }
        printf("Qual o dia de seu aniverssário? (dd/mm): ");
        scanf("%i/%i", &dd, &mm);
        if((dd == dde) && (mm == mme))
        {
            cupomGratis = 1;
        }
        
        printf("Quantos cupons de bebida deseja? ");
        scanf("%i", &cupom);

        if(cupom <= MAXPROMO1)
        {
            cupomPromo = cupom - cupomGratis;  
            promocao1(cupomPromo);
        }
        else
        {
            cupomNormal = cupom - cupomGratis - MAXPROMO1;
            vlrCupomNormal = cupomNormal * valorCupom;

            cupomPromo = MAXPROMO1;
            promocao1(cupomPromo);
        }
        break;
    
    case 3:
        printf("Informe o sexo. (1) Homem ou (2) Mulher: ");
        scanf("%i", &sexo);
        while (sexo < 1 || sexo > 2)
        {
            printf("Informe o sexo. (1) Homem ou (2) Mulher: ");
            scanf("%i", &sexo);
        }
        
        if(sexo == 1)
        {
            ingresso = 80.00;
            tipo = 'H';
        }
        else
        {
            ingresso = 60.00;
            tipo = 'M';
        }

        printf("Quantos cupons de bebida deseja? ");
        scanf("%i", &cupom);
        cupomNormal = cupom;
        vlrCupomNormal = cupom * valorCupom;
    
        break;
    default:
        break;
    }
        printf("\nValor do ingresso:..........R$ %.2f (%c)\n", ingresso, tipo);
        printf("Cupom Grátis:...............%i\n", cupomGratis);
        printf("Cupom Promocional:..........%i\n", cupomPromo);
        printf("Cupom Normal:...............%i\n", cupomNormal);
        printf("Valor Cupom promocional:....R$ %.2f\n", vlr1);
        printf("Valor Cupom Normal:.........R$ %.2f\n", vlrCupomNormal);
        printf("Valor total:................R$ %.2f\n\n", ingresso + vlr1 + vlrCupomNormal);

    return 0;
}
float promocao1(int cPromo)
{
    vlr1 = (8.00 * (float)cPromo);
    return vlr1;
}