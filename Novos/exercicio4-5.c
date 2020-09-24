/*
 * Faça um programa que mostra a temperatura média de cada dia do mês de março, a partir das temperaturas
 * mínima e máxima de cada dia. As temperaturas devem ser geradas automaticamente com valores entre -10 e
 * +45
 * #include &lt;time.h&gt;
 * srand(time(NULL));
 * // gerando valores aleatórios na faixa de 0 a 100
 * printf(&quot;%d &quot;, rand() % 100);
 * Caso a temperatura média seja atípica, (isto é com temperatura média inferior a 15 ou superior 38) 
 * deve ser enviado uma mensagem.
 * Faça uma função que receba a temperatura média de um dia e retorne 1 se for atípico ou 0 caso contrário
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int gerarAleatorio(); //Gerar um valor aleatório de forma que possa se obter inteiro negativo
int avaliarTipicidade(int valor); //Avaliar se a temperatura é típica(0) ou atípica(1)

int main(void){
    srand(time(NULL));
    int dia[31] = {0};
    int temperatura, tipicidade;
    int acumulado = 0;
    int mediaTemperatura = 0;
    int periodo = 1;
    int i = 1;
  
    mediaTemperatura = 0;
    acumulado = 0;
    while (periodo <= 31){
    
        temperatura = gerarAleatorio();
        while(temperatura < -10 || temperatura > 45){
            temperatura = gerarAleatorio();
        }
        tipicidade = avaliarTipicidade(temperatura);
        dia[i] = temperatura;
        printf("A temperatura média no dia %2i é %3i°C ... %i\n", i, dia[i], tipicidade);
        acumulado = acumulado + dia[i];
        mediaTemperatura = acumulado / (i);
            
        periodo++;
        i++;
    }
    printf("\nA temperatura média do mês é %i°C.\n\n", mediaTemperatura);
    return 0;
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
    if(valor < 15 || valor > 38){
        referencia = 1;
    }else{
        referencia = 0;
    }
    return referencia;
}