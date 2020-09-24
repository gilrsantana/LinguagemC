/* 
 * Escreva um programa que leia do teclado as duas notas de um aluno e suas faltas, calcule 
 * e exiba a média aritmética das notas. O programa deve, adicionalmente, exibir uma mensagem
 * de parabéns caso o aluno esteja aprovado (média superior ou igual a 6,0 e faltas < 15). 
 * reprovado por falta (número de faltas >=15), em final (média entre 4 e 6(exclusive) e faltas < 15),
 * reprovado por média ((média abaixo de 4 e faltas < 15).
 * Caso sua média seja superior a 7.5 será convidado a ser monitor no próximo semestre. 
 */

#include <stdio.h>
#include <locale.h>

#define NOTA_MINIMA 0.00
#define NOTA_MAXIMA 10.00

float calcularMedia(float primeiraNota, float segundaNota);

int main (void){

    float primeiraNota, segundaNota, mediaFinal;
    int falta, faltoso;
    int mediaAceitavel; 
    int emFinal;
    
    int monitor;
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

    printf("Informe a quantidade de faltas: ");
    scanf("%i", &falta);

    mediaFinal = calcularMedia(primeiraNota, segundaNota);

    mediaAceitavel = mediaFinal >= 6.00;
    
    monitor = mediaFinal > 7.5;
    faltoso = falta >= 15;

    emFinal = ( (mediaFinal < 6.00 && mediaFinal >= 4.0) && !faltoso);

    printf("Sua média final é %.2f\n\n", mediaFinal);

    if( mediaAceitavel && !faltoso){
        printf("PARABÉNS! Você foi aprovado\n\n");
        printf(" ___ _   _  ___ ___ ___  ___ ___ \n");
        printf("/ __| | | |/ __/ __/ _ \\/ __/ __|\n");
        printf("\\__ \\ |_| | (_| (_|  __/\\__ \\__ \\\n");
        printf("|___/\\__,_|\\___\\___\\___||___/___/\n");
        printf("\n\n");
        if(monitor){
            printf("Seu desempenho foi ótimo. Você pode se candidatar para ser monitor no próximo semestre.\n\n");
        }
    }else{
        if(emFinal){
            printf("Você está em PROVA FINAL\n\n");
        }else if(faltoso){
            printf("Você foi REPROVADO por excesso de faltas.\n\n");
        }else if(mediaFinal < 4.0 && !faltoso){
            printf("Você foi REPROVADO por média.\n\n");
        }
            
    }

    return 0;
}

float calcularMedia(float primeiraNota, float segundaNota){

    float mediaAritimetica = ( (primeiraNota + segundaNota) / 2);
    return mediaAritimetica;
}