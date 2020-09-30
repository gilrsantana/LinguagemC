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

int main(void){
  int id1, id2=0, id3, id4, id5, id6, id7, id8, id9, id10, maxID, maxIdade, maiorIdade, menorIdade=0;
  int idade1, idade2=0, idade3, idade4, idade5, idade6, idade7, idade8, idade9, idade10, grupo=0;
  int i=1, excursao, participante, id;

  printf("Informe ID: ");
  scanf("%i", &id);

  while(id !=0){
    printf("Informe ID: ");
    scanf("%i", &id);
    while(id !=0){
      printf("Informar idade: ");
      scanf("%i", &idade2);
      if(idade1 < 11){
        id = 0;
        menorIdade = 1;
      }
        if(idade1 > 18){
          maiorIdade++;
        }

        printf("Informe ID: ");
        scanf("%i", &id);
        grupo++;
      }
      
      
    }
      
    

  
  if(menorIdade > 0){
    printf("O grupo possui pelo menos uma pessoa menor de 11 anos.\n\n");
  }
  if(grupo < 5){
    printf("A excursão precisa de pelo menos 5 pessoas\n\n");
  }
  /*if((grupo/2) >= maiorIdade){
    printf("Grupo não tem maior de idade suficiente\n\n");
  }*/
  if(grupo >= 5 ){
    printf("O grupo tem %i participantes e o líder é o id %i\n\n", grupo, maxID);

  }
  return 0;
}