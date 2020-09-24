#include <stdio.h>
int main(void){

    int idade;
    float altura, peso;
    char genero;
    float imc;

    printf("Qual a sua idade?\n");
    scanf("%i", &idade);
    printf("\nQual seu peso em Kg?\n");
    scanf("%f", &peso);
    printf("\nQual sua altura em metros?\n");
    scanf("%f", &altura);

/*    idade = 40;
    altura = 1.70;
    peso = 79.85;
    genero = 'm';*/
    imc = (peso) / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);

    return 0;
} 
