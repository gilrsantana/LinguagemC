/*
 * Faça um programa em C que obtenha a velocidade máxima permitida em uma avenida e a velocidade
 * que cada motorista infrator estava dirigindo. 
 * Calcule e mostre o valor de cada multa recebida. A multa é calculada do seguinte modo:
 * • 50 reais se o motorista ultrapassou a velocidade limite em até 10km/h 
 * (ex.:vel max: 50km/h; motorista a 60km/h ou a 56km/h);
 * • 100 reais, se o infrator ultrapassar 11 a 30 km/h a velocidade permitida
 * • 200 reais, se estiver acima de 31km/h da velocidade permitida fora do horário comercial
 * • 400 reais, se estiver acima de 31km/h da velocidade permitida no horário comercial 
 * mais 2,00 real por km excedido.
 * Por exemplo, vel max: 50km/h; motorista a 120km/h às 11hs.
 * Multa: 400,00 + 70 *2,00
 * A hora em que ocorreu a multa deve ser perguntada qdo necessária.
 * A entrada de dados é finalizada ao ser digitado uma velocidade &lt;=0
 * a) Faça uma função que receba um valor de hora válido e retorne 1 se esta hora for dentro 
 * do horário comercial (8 às 18) , ou 0 caso contrário.
 * b) Faça uma função que receba a velocidade máxima e a velocidade do motorista, retornando 
 * o valor da multa. Esta função deve chamar a função anterior
 */

#include <stdio.h>

#define GRAU_1 10
#define GRAU_2 30
#define ACRESCIMO 2
#define MULTA_GRAU_1 50.00
#define MULTA_GRAU_2 100.00
#define MULTA_GRAU_3 200.00
#define MULTA_GRAU_4 400.00


int main(void){
    int velocidadeVia, velocidadeMot, difVelocidade, hComercial;
    float multa;

    printf("Informe a velocidade da Via: ");
    scanf("%i", &velocidadeVia);
    printf("\nInforme a velocidade do motorista: ");
    scanf("%i", &velocidadeMot);
    difVelocidade = velocidadeMot - velocidadeVia;

    if(velocidadeMot <= velocidadeVia){
        printf("Parabéns, Você não ultrapassou o limite de velocidade.\n\n");
    }else{
        if(difVelocidade <= GRAU_1){
            multa = MULTA_GRAU_1;
        }else{
            if(difVelocidade <= GRAU_2){
            multa = MULTA_GRAU_2;
            }else{
                printf("O evento ocorreu dentro do horário comercial? 1-SIM / 0-NÃO: ");
                scanf("%i", &hComercial);
                if(hComercial){
                    multa = MULTA_GRAU_4 + (ACRESCIMO * difVelocidade);
                }else{
                    multa = MULTA_GRAU_3;
                }
            }
        } 
        printf("A multa devida é no valor de R$ %.2f.\n\n", multa);
    }

    return 0;
}