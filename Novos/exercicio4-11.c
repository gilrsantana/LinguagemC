/*
 * Para realizar um debate sobre ao acesso a dados considerados sigilosos em campanhas políticas, 
 * um professor de ética resolveu agrupar seus 400 alunos em 3 grupos: o grupo “pró”, o grupo “contra” 
 * e o grupo “neutro”.
 * Para saber a qual grupo o aluno pertence, o professor aplicou um questionário cujas respostas p
 * odem ser sim ou não.
 * Faça uma função que recebe o número de questões, captura as respostas de cada uma das questões 
 * de um aluno e retorna a quantidade de respostas positivas.
 * Obs: o aluno digita '1', quando concorda e '0' quando discorda da questão
 * a. Faça um programa que inicialmente capture o número de respostas do questionário. 
 * A seguir, para cada aluno da turma, obtenha sua matrícula e respostas (utilizando a função do item a), 
 * e exiba o nome de seu grupo de acordo com o seguinte critério: 
 * 2/3 de respostas sim = grupo “pró” 
 * 2/3 de respostas não = grupo “contra” 
 * Demais situações = grupo “neutro”
 * Obs.: Faça uma função para exibir o grupo de respostas. 
 * Esta função recebe o número de questões e a quantidade de respostas SIM.
 */

#include <stdio.h>

int main(void){
  int pro=0, contra=0, neutro=0, questao, i=1, resposta;
  float positivo=0.00, negativo=0.00;

  printf("Informe o número de questões: ");
  scanf("%i", &questao);

  while(questao > 0){
    printf("Informe 1(SIM) e 0(NÃO) para questão %i: ");
    scanf("%i", &resposta);
    if(resposta){
      positivo++;
    }else{
      negativo++;
    }

    i++;
    questao--;
  }
  if((positivo / questao) >= 0.333333){
    
  }
  return 0;
}