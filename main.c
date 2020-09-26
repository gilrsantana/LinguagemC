/*
 * Uma empresa de eventos, que paga R$30,00 por hora, contratou pessoas de duas formas:
 * I. FIXO: 20 dias no mês e em cada dia x horas. Por ex. João foi contratado para trabalhar 
 * 10 dias 4 horas por dia e Pedro para trabalhar 20 dias, 8 horas por dia
 * II. VARIÁVEL: n dias e em cada dia uma quantidade variável de horas. Por ex., Maria foi contratada
 * para trabalhar 4 dias, no 1º dia, 2 horas, no 2º dia, 5 horas, no 3º, 3 horas e no 4º 1 hora. 
 * Zé foi contratado para trabalhar 2 dias, no 1º dia, 12 horas e no 2º dia, 10 horas.
 * Qualquer contratado pode tirar vales durante o período que está trabalhando.
 * Faça um programa, utilizando a função totaliza_horas_variaveis, para calcular o salário que deve 
 * ser pago às pessoas contratadas de acordo com a seguinte fórmula:
 * Salário a pagar= (número total de horas trabalhadas * 30) – (total de vales pagos)
 * Considere que:
 * - Para cada contratado é perguntado seu nome e o tipo de contrato (1 ou 2), a quantidade de vales
 * retirados e o valor de cada vale.
 * - A seguir, é perguntado:
 * a) para os fixos (tipo 1): a quantidade de dias trabalhados (n) e a quantidade de horas em cada dia (x)
 * b) para os variáveis (tipo 2): a quantidade de dias trabalhados ( n) e para cada dia a quantidade de
 * horas em cada dia.
 * 
 * No final, seu programa deve mostrar o nome do contratado com maior salário.
 * Término da entrada de dados: nome vazio
 * Obs: Considere que todos os dados digitados estão corretos.
 * Função totaliza_horas_variaveis: calcula a soma das horas trabalhadas pelos contratos do tipo 2. 
 * A função deve receber como parâmetro um número inteiro com a quantidade de dias trabalhados. 
 * Esta função lê do teclado a quantidade de horas trabalhadas em cada dia e retorna a 
 * soma das horas trabalhadas.
 */

#include <stdio.h>
#include <stdlib.h>

#define HORA_PADRAO 30.00
int main(void){
    char nome[61];
    int dia, hora, acumulador=0, contrato, vale;
    float salario, valorVale=0.0;

    printf("***********************************************\n");
    printf("* BEM VINDO AO PROGRAMA DE CÁLCULO DE SALÁRIO *\n");
    printf("***********************************************\n\n");

    printf("Informe seu nome completo: ");
    gets(nome);

    printf("Qual o tipo de contrato? 1-FIXO / 2-VARIÁVEL: ");
    scanf("%d", &contrato);
    while(vale < 0 || vale >1){
        printf("ERRO! São aceitos apenas os valores pedidos.\n\n");
        printf("Qual o tipo de contrato? 1-FIXO / 2-VARIÁVEL: ");
        scanf("%d", &contrato);
    }
    if(contrato == 1){
        printf("Informe a quantidade de dias trabalhados: ");
        scanf("%d", &dia);
        printf("Informe a quantidade de horas por dia trabalhado: ");
        scanf("%d", &hora);
        salario = dia * hora * HORA_PADRAO;
    }else{
        printf("Informe a quantidade de dias trabalhados: ");
        scanf("%d", &dia);
        for(int i = 1; i <= dia; i++){
            printf("Informe a quantidade de horas no dia %i.\n", i);
            scanf("%d", &hora);
            hora+=hora;
        }
        salario = dia * hora * HORA_PADRAO;
    }

    printf("Foi solicitado algum vale? 1-SIM / 0-NÃO: ");
    scanf("%d", vale);
    while(vale < 0 || vale >1){
        printf("ERRO! São aceitos apenas os valores pedidos.\n\n");
        printf("Foi solicitado algum vale? 1-SIM / 0-NÃO: ");
        scanf("%d", vale);
    }
    if(vale){
        printf("Informe a quantidade de vales requisitados: ");
        scanf("%d", &vale);
        for(int i = 1; i <= vale; i++){
            printf("Informe o valor do vale %i.\n", i);
            scanf("%f", &valorVale);
            valorVale+=valorVale;
        }
    }
    salario = salario - vale;
    printf("%s, seu salário devido é %.2f.\n\n", nome, salario);


    return 0;
}