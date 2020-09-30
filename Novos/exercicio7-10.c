/*
 * Uma empresa de turismo realiza excursões familiares para subir a Pedra da Gávea. 
 * No entanto, é necessário que as seguintes regras sejam obedecidas:
 * a) grupo de no mínimo 5 pessoas
 * b) pelo menos a metade dos participantes devem ser maior de idade
 * c) não pode haver integrantes com menos de 11 anos
 * d) o integrante mais velho será escolhido o líder da excursão.
 * Faça um programa que leia o número de identificação e a idade das pessoas de uma excursão familiar
 * e diga se este grupo satisfaz as regras e pode participar da excursão ( informando, também, 
 * a identificação do seu líder) ou se este grupo não satisfaz as regras e, por isso, não pode participar
 * desta excursão.
 * Obs: o término da entrada dos participantes desta excursão ocorre quando for digitado uma 
 * identificação == 0;
 * Dica: conte o número de pessoas, de maiores de idade e de menores de 11 anos. 
 * Guarde o valor da identificação e da maior idade.
 * Modificação: considere 5 excursões!
 */

#include <stdio.h>

#define GRUPO 5
int identificacaoTurista(void);
int idadeTurista(void);

int main(void){
  int id1, id2, id3, id4, id5, id6, id7, id8, id9, id10;
  int idade1, idade2, idade3, idade4, idade5, idade6, idade7, idade8, idade9, idade10, grupo=0;
  int i=1, excursao, participante, id;

  printf("informe a quantidade de excursões: ");
  scanf("%i", &excursao);

  while(i <= excursao){

    printf("Deseja incluir participante? 1-SIM / 0-NÃO: ");
    scanf("%i", &participante);

    if(participante){
      while(grupo<=5 || participante!=0){
        id1 = identificacaoTurista();
        idade1 = idadeTurista();
        id2 = identificacaoTurista();
        idade2 = idadeTurista();
        id3 = identificacaoTurista();
        idade3 = idadeTurista();
        id4 = identificacaoTurista();
        idade4 = idadeTurista();
        id5 = identificacaoTurista();
        idade5 = idadeTurista();
        grupo++;        
        printf("Deseja incluir participante? 1-SIM / 0-NÃO: ");
        scanf("%i", &participante);
      }
    }

    if()


  return 0;
}

int identificacaoTurista(void){
  int id,
  printf("Informe a Identificação do turista: ");
  scanf("%i", &id);
  return id;
}

int idadeTurista(void){
  int idade;
  printf("Informe a Idade do turista: ");
  scanf("%i", &idade);
  return idade;
}