/*
 * Faça um programa para identificar se cada um dos 5 meses, escolhidos pelo usuário para viajar, é
 * de alta ou baixa temporada (considerar os seguintes meses como alta temporada: dezembro a fevereiro,
 * junho e julho). 
 * Os números dos meses são perguntados ao usuário.
 * a) modifique o programa para processar n meses, sendo n fornecido inicialmente pelo usuário
 * c) modifique o programa do item b) para processar 4 usuários
 * Alta temporada: 1,2, 6, 7, 12
 */

#include <stdio.h>

#define INICIO_VERAO 12
#define FIM_VERAO 2
#define INICIO_INVERNO 6
#define FIM_INVERNO 7

int main(void){
  int mes; 

  printf("Informe o número do mês da viagem ou 0 para sair:\n");
  printf("1 - Janeiro\n2 - Fevereiro\n3 - Março\n4 - Abril\n5 - Maio\n6 - Junho\n");
  printf("7 - Julho\n8 - Agosto\n9 - Setembro\n10 - Outubro\n11 - Novembro\n12 - Dezembro\n");
  scanf("%i", &mes);

  while(mes > 12 || mes < 0){
    printf("ERRO! Informe um valor dentre os apresentados\n");
    printf("Informe o número do mês da viagem ou 0 para sair:\n");
    printf("1 - Janeiro\n2 - Fevereiro\n3 - Março\n4 - Abril\n5 - Maio\n6 - Junho\n");
    printf("7 - Julho\n8 - Agosto\n9 - Setembro\n10 - Outubro\n11 - Novembro\n12 - Dezembro\n");
    scanf("%i", &mes);
  }

  while(mes != 0){
    
      if( (mes >= 1 && mes <= 2) || (mes >= 6 && mes <= 7) || (mes == 12)){
      printf("Sua escolha é de ALTA TEMPORADA\n\n");
      }else{
      printf("Sua escolha é de BAIXA TEMPORADA\n\n");
      }
    
    printf("Informe o número do mês da viagem ou 0 para sair:\n");
    printf("1 - Janeiro\n2 - Fevereiro\n3 - Março\n4 - Abril\n5 - Maio\n6 - Junho\n");
    printf("7 - Julho\n8 - Agosto\n9 - Setembro\n10 - Outubro\n11 - Novembro\n12 - Dezembro\n");
    scanf("%i", &mes);
    while(mes > 12 || mes < 0){
    printf("ERRO! Informe um valor dentre os apresentados\n");
    printf("Informe o número do mês da viagem ou 0 para sair:\n");
    printf("1 - Janeiro\n2 - Fevereiro\n3 - Março\n4 - Abril\n5 - Maio\n6 - Junho\n");
    printf("7 - Julho\n8 - Agosto\n9 - Setembro\n10 - Outubro\n11 - Novembro\n12 - Dezembro\n");
    scanf("%i", &mes);
    }

  }
    
  return 0;
}