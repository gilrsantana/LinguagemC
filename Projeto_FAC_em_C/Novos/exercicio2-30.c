/*
 * Um plano de saúde cobra as seguintes mensalidades:
 * Até 10 anos: R$ 30,00
 * Acima de 10 até 29 anos: R$ 60,00
 * Acima de 29 até 45 anos: R$ 120,00
 * Acima de 45 até 59 anos: R$ 150,00
 * Acima de 59 até 65 anos: R$ 250,00
 * Maior que 65 anos: R$ 400,00
 * Para as pessoas fumantes, com mais de 29 anos, é cobrada uma taxa extra de R$30,00
 * Escreva um programa em C que pergunte a idade de uma pessoa e exiba o valor que 
 * ela deverá pagar. A pergunta sobre ser fumante só deve ser realizada quando necessária.
 */

#include <stdio.h>
#include <locale.h>

#define VALOR_1 30.00 //Valor da FAIXA_1
#define VALOR_2 60.00 //Valor da FAIXA_2 
#define VALOR_3 120.00 //Valor da FAIXA_3
#define VALOR_4 150.00 //Valor da FAIXA_4
#define VALOR_5 250.00 //Valor da FAIXA_5
#define VALOR_6 400.00 //Valor da FAIXA_6

#define FAIXA_1 10 //Idade máxima da FAIXA_1
#define FAIXA_2 29 //Idade máxima da FAIXA_2
#define FAIXA_3 45 //Idade máxima da FAIXA_3
#define FAIXA_4 59 //Idade máxima da FAIXA_4
#define FAIXA_5 65 //Idade máxima da FAIXA_5
#define FAIXA_6 66 //Idade mínima da FAIXA_6

#define TAXA_FUMANTE 30.00 //Taxa se fumante
#define IDADE_REFERENCIA 30 //Idade mínima para verificação fumante

int verificaFaixa(int idade); //verifica faixa do cliente

int verificaFumante(void); //verifica se fumante

int main(void){

    int idade, fumante;
    int tabela = 0;
    float valor;
    setlocale(LC_ALL,"Portuguese");

    printf("\n");
    printf("******************************************************\n");
    printf("* BEM VINDO AO PROGRAMA DE CÁLCULO DE PLANO DE SAÚDE *\n");
    printf("******************************************************\n");
    printf("\n");

    printf("Informe sua idade: ");
    scanf("%i", &idade);

    tabela = verificaFaixa(idade);    
        
    if(idade >= IDADE_REFERENCIA){
        fumante = verificaFumante();
    }  

    switch (tabela)
    {
    case 1:
        valor = VALOR_1;
        printf("Você está na FAIXA 1 e o valor de seu plano é: R$ %.2f\n\n", valor);
        break;
    case 2:
        valor = VALOR_2;
        printf("Você está na FAIXA 2 e o valor de seu plano é: R$ %.2f\n\n", valor);
        break;
    case 3:
        if(fumante){
            valor = VALOR_3 + TAXA_FUMANTE;
            printf("Você está na FAIXA 3 e é fumante\n");
            printf("O valor de seu plano é: R$ %.2f\n\n", valor);
        }else{
            valor = VALOR_3;
            printf("Você está na FAIXA 3 e o valor de seu plano é: R$ %.2f\n\n", valor);
        }
        break;
    case 4:
        if(fumante){
            valor = VALOR_4 + TAXA_FUMANTE;
            printf("Você está na FAIXA 4 e é fumante\n");
            printf("O valor de seu plano é: R$ %.2f\n\n", valor);
        }else{
            valor = VALOR_4;
            printf("Você está na FAIXA 4 e o valor de seu plano é: R$ %.2f\n\n", valor);
        }
        break;
    case 5:
        if(fumante){
            valor = VALOR_5 + TAXA_FUMANTE;
            printf("Você está na FAIXA 5 e é fumante\n");
            printf("O valor de seu plano é: R$ %.2f\n\n", valor);
        }else{
            valor = VALOR_5;
            printf("Você está na FAIXA 5 e o valor de seu plano é: R$ %.2f\n\n", valor);
        }
        break;
    case 6:
        if(fumante){
            valor = VALOR_6 + TAXA_FUMANTE;
            printf("Você está na FAIXA 6 e é fumante\n");
            printf("O valor de seu plano é: R$ %.2f\n\n", valor);
        }else{
            valor = VALOR_6;
            printf("Você está na FAIXA 6 e o valor de seu plano é: R$ %.2f\n\n", valor);
        }
        break;
    default:
        break;
    }
    return 0;
}
//Início da função que verifica a faixa do cliente
int verificaFaixa(int idade){
    int tabela;
    if(idade <= FAIXA_1){
        tabela =1;
    }else if(idade > FAIXA_1 && idade <= FAIXA_2){
        tabela = 2;
    }else if(idade > FAIXA_2 && idade <= FAIXA_3){
        tabela = 3;   
    }else if(idade > FAIXA_3 && idade <= FAIXA_4){
        tabela = 4; 
    }else if(idade > FAIXA_4 && idade <= FAIXA_5){
        tabela = 5;     
    }else if(idade > FAIXA_5){
        tabela = 6;
    }
    return tabela;
}
//Início da função que verifica se cliente é fumante
int verificaFumante(void){
    int fumante;

    printf("Fumante? 1=SIM / 0=NÃO: ");
    scanf("%i", &fumante);
    while (fumante > 1 || fumante < 0){
    printf("ERRO!\n");
    printf("Só são adimitidos valores entre 0 e 1.\n\n");
    printf("Fumante? 1=SIM / 0=NÃO: ");
    scanf("%i", &fumante);
    }
    return fumante;
}