/*
 * Faça um programa que leia o número de dias decorrido em um evento e exiba na tela o mesmo valor
 * expresso em números de semanas e número de dias. Por exemplo, se um usuário fornecer o valor 19,
 * o programa deve exibir: “2 semanas e 5 dias”.
 */

#include <stdio.h>

int main(void){
    
  int duracao_evento = 0;
  int semana = 0;
  int dia = 0;

  printf("Informe quantos dias durou o evento: ");
  scanf("%d", &duracao_evento);

  semana = duracao_evento / 7;
  dia = duracao_evento % 7;
    
  if(duracao_evento % 7 == 0){
    printf("O evento durou %d semana(s).\n", semana);
  }else if(duracao_evento < 7){
    printf("O evento durou %d dia(s).\n", dia);
  }else if(duracao_evento>7){
    printf("O evento teve duração de %d semana(s) e %d dia(s).\n", semana, dia);   
  }
   
  return 0;
}