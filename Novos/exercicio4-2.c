/* 
 * A sensação térmica é influenciada por vários fatores climáticos, como a umidade e densidade do ar,
 * mas principalmente pela velocidade do vento. A seguinte fórmula empírica calcula seu valor:
 * onde T é a temperatura em graus Celsius e v é a velocidade do vento em Km/h
 * Por exemplo, para temperatura de 5ºC e ventos de 40km/h, a sensação térmica é em torno de -9.8ºC.
 * Faça um programa que pergunte a temperatura e a velocidade do vento ocorridas a cada hora de um dia e 
 * mostre a sensação térmica equivalente.
 * Modifique o programa para processar n(lido) dias.
 */

#include <stdio.h>
#include <math.h>

float calculaSensacaoTermica(float temperatura, float velocidade);
int main(void){

    int dia;
    float hora[24] = {0};
    float velocidade, temperatura;
    float mediaSensacaoTermica = 0;
    float acumuladoHora = 0;
    float acumuladoDia = 0;
    float mediaPeriodo = 0;

    printf("Informe quantos dias deseja calcular a temperatura: ");
    scanf("%i", &dia);
    int periodo = 1;
    while(periodo <= dia){
        mediaSensacaoTermica = 0;
        acumuladoHora = 0;
        for(int i=0; i <= 23; i++){
            
            printf("Informe a temperatura em Celcius: ");
            scanf("%f", &temperatura);
            printf("Informe a velocidade do vento em Km/h: ");
            scanf("%f", &velocidade);

            hora[i] = calculaSensacaoTermica(temperatura, velocidade);
            printf("A sensação térmica ás %i horas é %.2f °C.\n\n", i, hora[i]);
            
            acumuladoHora = acumuladoHora + hora[i];
            mediaSensacaoTermica = acumuladoHora / (i+1);
            printf("A sensação térmica média do dia é %.2f °C.\n\n", mediaSensacaoTermica);
        }

        acumuladoDia = acumuladoDia + mediaSensacaoTermica;
        mediaPeriodo = acumuladoDia / (periodo);
        printf("A sensação térmica média do dia %i é %.2f °C.\n\n", periodo, mediaSensacaoTermica);
        printf("A sensação térmica média do período é %.2f °C.\n\n", mediaPeriodo);
        periodo++;
    }

    return 0;
}

float calculaSensacaoTermica(float temperatura, float velocidade){
    float sensacaoTermica = 33 + (10 * sqrt(velocidade) + 10.45 - velocidade) * ( (temperatura - 33) / 22 );
    return sensacaoTermica;
}
