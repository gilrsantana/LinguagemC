/* 
 * Escreva um programa que leia do teclado as duas notas de um aluno, calcule e exiba a 
 * média aritmética das notas. O programa deve, adicionalmente, exibir uma mensagem de
 * parabéns caso o aluno esteja aprovado (média superior ou igual a 6,0).
 */

#include <stdio.h>
#include <locale.h>

#define NOTA_MINIMA 0.00
#define NOTA_MAXIMA 10.00

float calcularMedia(float primeiraNota, float segundaNota);

int main (void){

    float primeiraNota, segundaNota, mediaFinal;
    int aprovado;
    setlocale(LC_ALL, "Portuguese");

    printf("\n");
    printf("*******************************************************\n");
    printf("* BEM VINDO AO PROGRAMA DE CÁLCULO DE MÉDIA DE ALUNOS *\n");
    printf("*******************************************************\n");
    printf("\n");

    printf("Informe o valor da primeira nota: ");
    scanf("%f", &primeiraNota);

    while (primeiraNota < NOTA_MINIMA || primeiraNota > NOTA_MAXIMA){
        printf("ERRO!\nSão admitidos apenas valores entre %.2f e %.2f\n\n", NOTA_MINIMA, NOTA_MAXIMA);
        printf("Informe o valor da primeira nota: ");
        scanf("%f", &primeiraNota);
    }

    printf("Informe o valor da segunda nota: ");
    scanf("%f", &segundaNota);

    while (segundaNota < NOTA_MINIMA || segundaNota > NOTA_MAXIMA){
        printf("ERRO!\nSão admitidos apenas valores entre %.2f e %.2f\n\n", NOTA_MINIMA, NOTA_MAXIMA);
        printf("Informe o valor da primeira nota: ");
        scanf("%f", &segundaNota);
    }

    mediaFinal = calcularMedia(primeiraNota, segundaNota);

    aprovado = mediaFinal >= 6.0;
    printf("Sua média final é %.2f\n\n", mediaFinal);

    if(aprovado){
        printf("PARABÉNS! Você foi aprovado\n\n");
        printf(" ___ _   _  ___ ___ ___  ___ ___ \n");
        printf("/ __| | | |/ __/ __/ _ \\/ __/ __|\n");
        printf("\\__ \\ |_| | (_| (_|  __/\\__ \\__ \\\n");
        printf("|___/\\__,_|\\___\\___\\___||___/___/\n");
        printf("\n\n");
    }

    return 0;
}

float calcularMedia(float primeiraNota, float segundaNota){

    float mediaAritimetica = ( (primeiraNota + segundaNota) / 2);
    return mediaAritimetica;
}

