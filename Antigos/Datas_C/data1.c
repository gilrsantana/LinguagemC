/*
Faça um programa que mostre a data atual do sistema.
DD/MM/AAAA Dia/Mês/Ano
*/

#include <stdio.h>
#include <time.h>

int main(void){

    struct tm *data_atual;
    time_t segundos;
    time(&segundos);

    data_atual = localtime(&segundos);

    printf("\nDia: %d/", data_atual->tm_mday);
    printf("Mes: %d/", data_atual->tm_mon+1);
    printf("Ano: %d\n\n", data_atual->tm_year+1900);

    return 0;
}
