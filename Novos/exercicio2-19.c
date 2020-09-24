/* 
 * Escreva um programa que dado um número entre 1 e 7, imprima se é um dia de semana ou final de
 * semana. Assuma que o primeiro dia da semana (1) é domingo
 * a. Modifique o programa anterior para exibir a mensagem nos dias de nossa aula:
 * 1. “Delícia!!! Hoje tem FAC”
 */

#include <stdio.h>
#include <locale.h>

int main (void){

    int dia;
    setlocale(LC_ALL, "Portuguese");

    printf("\n");
    printf("******************************************************\n");
    printf("* BEM VINDO AO PROGRAMA DE EXIBIÇÃO DE DIA DA SEMANA *\n");
    printf("******************************************************\n");
    printf("\n");

    printf("Informe o dia da semana (1 - Domingo / 7 - Sábado): ");
    scanf("%i", &dia);

    while (dia > 7 || dia < 1)
    {
        printf("ERRO!\n");
        printf("Só são adimitidos valores entre 1 e 7.\n\n");
        printf("Informe o dia da semana (1 - Domingo / 7 - Sábado): ");
        scanf("%i", &dia);
    }
    

    if(dia > 1 && dia < 7){
        printf("%i é dia de semana.\n", dia);
        if(dia == 3){
            printf("Delícia!!! Hoje tem FAC\n");
        }
        printf("\n");
    }else{
        printf("%i é final de semana\n\n", dia);
    }

   return 0;
}