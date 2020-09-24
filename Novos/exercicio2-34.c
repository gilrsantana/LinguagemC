/*
 * Para ter uma ideia da quantidade de bebidas não alcoólicas a ser comprada para uma festa
 * considera-se as seguintes quantidades:
 * Água com ou sem gás - 500 ml por pessoa
 * Refrigerantes e sucos - 400 ml por pessoa. 
 * Caso haja apenas refrigerante, o cálculo passa a ser de 750 ml por pessoa.
 * Construa um programa em C para mostrar:
 * A- a quantidade de garrafas de 1 litros de água a ser comprada e o quanto custará;
 * B- a quantidade de garrafas de 2 litros de refrigerante e a quantidade de garrafas de 
 * 1 litro de suco a serem comprados bem como quanto custarão (juntos), se ambos forem servidos;
 * C- a quantidade de garrafas de 2 litros de refrigerante a ser comprado e o quanto custará, 
 * se for servido apenas refrigerante.
 * O número de pessoas da festa deve ser perguntado ao usuário. O valor do litro de água é R$ 4,00,
 * do refrigerante é 5,40 e do suco é R$ 6,00
 * Exemplo:
 * Número de pessoas: 23
 * Quantidade de garrafas de 1 litro de água: 12
 * Quantidade de garrafas de refrigerante: 5 e de suco: 10
 * Quantidade de garrafas só de refrigerante: 9
 */

#include <stdio.h>
#include <locale.h>

#define AGUA_PESSOA 500
#define REFRIGERANTE_PESSOA 400
#define SUCO_PESSOA 400
#define REFRIGERANTE_APENAS 750

#define VOLUME_GARRAFA_AGUA 1000
#define VOLUME_GARRAFA_REFRIGERANTE 2000
#define VOLUME_GARRAFA_SUCO 1000

#define VALOR_LITRO_AGUA 4.00
#define VALOR_LITRO_REFRIGERANTE 5.40
#define VALOR_LITRO_SUCO 6.00

int main(void){
    int pessoa, agua, suco;
    int totalAgua;
    int totalRefrigerante;
    int totalSuco;
    int garrafaAgua = 0;
    int garrafaRefrigerante = 0;
    int garrafaSuco = 0;
    float valorAgua, valorRefrigerante, valorSuco, valorTotal;

    setlocale(LC_ALL, "Portuguese");

    printf("\n");
    printf("***********************************************\n");
    printf("* BEM VINDO AO PROGRAMA DE CÁLCULO DE BEBIDAS *\n");
    printf("***********************************************\n");
    printf("\n");

    printf("Qual a quantidade de pessoas na festa? ");
    scanf("%i", &pessoa);

    printf("Deseja incluir água?(1=SIM, 0=NÃO): ");
    scanf("%i", &agua);

    printf("Deseja incluir suco?(1=SIM, 0=NÃO): ");
    scanf("%i", &suco);

    totalRefrigerante = pessoa * REFRIGERANTE_APENAS;
    garrafaRefrigerante = totalRefrigerante / VOLUME_GARRAFA_REFRIGERANTE;
    if(totalRefrigerante % VOLUME_GARRAFA_REFRIGERANTE != 0){
        garrafaRefrigerante++;
    }
    valorRefrigerante = garrafaRefrigerante * (VALOR_LITRO_REFRIGERANTE * 2);
    
    if(agua){
        totalAgua = pessoa * AGUA_PESSOA;
        garrafaAgua = totalAgua / VOLUME_GARRAFA_AGUA;
        if(totalAgua % VOLUME_GARRAFA_AGUA != 0){
            garrafaAgua++; 
        }
        valorAgua = garrafaAgua * VALOR_LITRO_AGUA;

        totalRefrigerante = pessoa * REFRIGERANTE_PESSOA;
        garrafaRefrigerante = totalRefrigerante / VOLUME_GARRAFA_REFRIGERANTE;
        if(totalRefrigerante % VOLUME_GARRAFA_REFRIGERANTE != 0){
            garrafaRefrigerante++;
        }
        valorRefrigerante = garrafaRefrigerante * (VALOR_LITRO_REFRIGERANTE * 2);
    }

    if(suco){
        totalSuco = pessoa * SUCO_PESSOA;
        garrafaSuco = totalSuco / VOLUME_GARRAFA_SUCO;
        if(totalSuco % VOLUME_GARRAFA_SUCO != 0){
            garrafaSuco++;
        }
        valorSuco = garrafaSuco * VALOR_LITRO_SUCO;
    }

    valorTotal = valorAgua + valorRefrigerante + valorSuco;
    printf("\n");

    printf("Numero de pessoas.................................... %i\n", pessoa);
    printf("Quantidade de garrafas de 1 litro de água............ %i\n", garrafaAgua);
    printf("Quantidade de garrafas de 2 litros de refrigerante... %i\n", garrafaRefrigerante);
    printf("Quantidade de garrafas de 1 litro de suco............ %i\n", garrafaSuco);
    printf("Valor %2i garrafas de água............................ R$ %.2f\n", garrafaAgua, valorAgua);
    printf("Valor %2i garrafas de refrigerante.................... R$ %.2f\n", garrafaRefrigerante, valorRefrigerante);
    printf("Valor %2i garrafas de suco............................ R$ %.2f\n", garrafaSuco, valorSuco);
    printf("Valor total das bebidas.............................. R$ %.2f\n\n", valorTotal);

    return 0;
}