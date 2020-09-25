/*
 * Faça um programa que, a partir das temperaturas mínima e máxima ocorridas,  mostre a temperatura média 
 * de vários dias.  As temperaturas devem ser geradas automaticamente com valores entre -10 e +45. 
 * O término do programa ocorre, quando a diferença entre as temperaturas mínima e máxima for inferior a 10.
 * As temperaturas devem ser geradas automaticamente com valores entre -10 e +45.
 * Faça uma função que receba uma temperatura  e retorne True se for atípico ou False caso contrário.
 * Atípico <15 ou >35.
 */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define REFERENCIA 10

int gerarAleatorio(); //Gerar um valor aleatório de forma que possa se obter inteiro negativo
int avaliarTipicidade(int valor); //Avaliar se a temperatura é típica(0) ou atípica(1)
float calcularMedia(float temperatura, int dia);
int main(void){
    int dia=0, atipico, diaAtipico=0, validador=10;
    float tempMinima, tempMaxima, tempAcumulada=0, tempMedia, somaMinMax;
    srand(time(NULL));
   

    while(validador >= REFERENCIA){
        dia++;
        tempMinima = rand();
        while(tempMinima < -10 || tempMinima > 45){
            tempMinima = rand();
        }
        tempMaxima = rand();
        while(tempMaxima < -10 || tempMaxima > 45){
            tempMaxima = rand();
        }
        somaMinMax = tempMinima+tempMaxima;
        tempMedia = calcularMedia(somaMinMax, 2);
        printf("\nDia %i temperatura média %.2f", dia, tempMedia);
        atipico = avaliarTipicidade(tempMedia);
        if(atipico){
            printf(" >>> Atípico");
            diaAtipico++;
        }
        printf("\n");
        tempAcumulada=tempAcumulada+tempMedia;
        validador = tempMaxima - tempMinima;
        
    }
    tempMedia = calcularMedia(tempAcumulada, dia);
    printf("\nA temperatura média em %i dias é %.2f.", dia, tempMedia);
    atipico = avaliarTipicidade(tempMedia);
    if(atipico){
        printf(" >>> Atípico");
    }
    printf("\n");
    printf("Dias atípicos... %i\n\n", diaAtipico);
    return 0;
}
float calcularMedia(float temperatura, int dia){
    float media = temperatura / dia;
    return media;
}
//Gerar um valor aleatório de forma que possa se obter inteiro negativo
int gerarAleatorio(){
    int aleatorio1, aleatorio2, aleatorio;
    aleatorio1 = rand()%100;
    aleatorio2 = rand()%50;
    aleatorio = aleatorio1 - aleatorio2;
    return aleatorio;
}
//Avaliar se a temperatura é típica(0) ou atípica(1)
int avaliarTipicidade(int valor){
    int referencia;
    if(valor < 15 || valor > 35){
        referencia = 1;
    }else{
        referencia = 0;
    }
    return referencia;
}