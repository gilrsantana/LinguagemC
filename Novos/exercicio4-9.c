/*
 * Faça um programa para identificar o valor a ser pago por cada um dos n (valor lido pelo programa)
 * conveniados de uma família pelo plano de saúde.
 * O cálculo do valor a pagar é: R$ 100 + adicional por Idade conforme a seguinte tabela:
 * 1) crianças com menos de 10 anos pagam R$80;
 * 2) conveniados com idade entre 10 e 30 anos pagam R$50;
 * 3) conveniados com idade entre 40 e 60 anos pagam R$ 95;
 * 4) conveniados com mais de 60 anos pagam R$130.
 * Obs: A idade de cada conveniado é fornecida pelo usuário
 */

#include <stdio.h>

#define VALOR_BASE 100.00
#define DEGRAU_1 10.00
#define DEGRAU_2 50.00
#define DEGRAU_3 95.00
#define DEGRAU_4 130.00

int main(void){
  int idade;
  float valorPago=VALOR_BASE;

  printf("Informe a idade ou zero para sair: ");
  scanf("%i", &idade);
  while(idade != 0){
    if(idade < 10){
      valorPago = VALOR_BASE + DEGRAU_1;
    }else{
      if(idade >= 10 && idade <= 30){
        valorPago = VALOR_BASE + DEGRAU_2;
      }else{
        if(idade > 30 && idade < 40){
          valorPago = VALOR_BASE;
        }else{
          if(idade >= 40 && idade <= 60){
            valorPago = VALOR_BASE + DEGRAU_3;
          }else{
            if(idade > 60){
              valorPago = VALOR_BASE + DEGRAU_4;
            }
          }
        }
      }  
    }
    printf("O valor devido é de %.2f\n", valorPago);

    printf("\nInforme a idade ou zero para sair: ");
    scanf("%i", &idade);
  }

  return 0;
}