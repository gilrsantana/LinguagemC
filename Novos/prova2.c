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

  int id1, grupo=0, idade1, id2, idade2, menor=0, maior=0, maxIdade, maxId;

  printf("Informe Id ou 0 para sair: ");
  scanf("%i", &id1);
  if(id1 == 0){
    id2 = 0;
  }else{
    printf("Informe a idade: ");
    scanf("%i", &idade1);
    if(idade1 < 11){
      menor++;
    }
    if(idade1 >= 18){
      maior++;
    }
    grupo++;
  }
  maxIdade = idade1;
  maxId = id1;
  while(id2 != 0){
    printf("Informe Id ou 0 para sair: ");
    scanf("%i", &id2);
    while(id2 != 0){

      printf("Informe idade: ");
      scanf("%i", &idade2);
      if(idade2 < 11){
        menor++;
      }
      if(idade2 >= 18){
        maior++;
      }
      if(idade2>idade1){
        maxIdade = idade2;
        maxId = id2;
      }
      grupo++;
      printf("Informe Id ou 0 para sair: ");
      scanf("%i", &id2);
    }
  }

  if(menor > 0){
    printf("O grupo tem pelo menos 1 pessoa menor.\n\n");

  } else{
    if(grupo < 5){
      printf("%i pessoas. Pessoas insuficientes. Mínimo de 5.\n\n", grupo);
    }else{
      if((grupo / 2) > maior){
        printf("Maior de idade insuficiente.\n");
      }
      printf("O grupo tem %i pessoas e o Id %i é o líder do grupo.\n\n", grupo, maxId);
    }
    
  }
  
  return 0;
}