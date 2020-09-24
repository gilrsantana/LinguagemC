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
float calcularMedia(float temp1, float temp2);

int main(void){
    
    int dia=1, tipicidade;
    int validador=11;
    float tempMinima, tempMaxima, tempMedia;
    srand(time(NULL));

    while (validador >= 10){
    
        tempMinima = gerarAleatorio();
        while(tempMinima < -10 || tempMinima > 45){
            tempMinima = gerarAleatorio();
        }
        printf("Temperatura mínima ... %.2f\n", tempMinima);
        tipicidade = avaliarTipicidade(tempMinima);
        if(tipicidade){
            printf("A temperatura é atípica.\n");
        }
        printf("\n");
        tempMaxima = gerarAleatorio();
        while(tempMaxima < -10 || tempMaxima > 45){
            tempMaxima = gerarAleatorio();
        }
        printf("Temperatura máxima ... %.2f\n", tempMaxima);
        tipicidade = avaliarTipicidade(tempMaxima);
        if(tipicidade){
            printf("A temperatura é atípica.\n");
        }
        tempMedia = calcularMedia(tempMinima, tempMaxima);
        printf("\nA temperatura média no dia %2i é %.2f°C. \n\n", dia, tempMedia);
        
        validador = tempMaxima - tempMinima;
        dia++;
    }
    
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
    if(valor < 15 || valor > 35){
        referencia = 1;
    }else{
        referencia = 0;
    }
    return referencia;
}
//Calcula a média de temperatura
float calcularMedia(float temp1, float temp2){
    float media = (temp1 + temp2) / 2; 
    return media;
}