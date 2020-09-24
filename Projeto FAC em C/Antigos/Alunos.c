#include <stdio.h>

int main(void){

  int aluno;
  int resultado;
  int totalAprovado = 0;
  int totalReprovado = 0;

  printf("Informe a quantidade de alunos: ");
  scanf("%d", &aluno);

  int referencia = aluno * 0.8;
  
  for(int i = 1; i <= aluno; i++){
    printf("Informe o resultado. (1) aprovado ou (2) reprovado: ");
    scanf("%d", &resultado);   
    while(resultado < 1 || resultado > 2){
      printf("ERRO! São adimitidos apenas valores 1 e 2.\n");
      printf("Informe o resultado. (1) aprovado ou (2) reprovado: ");
      scanf("%d", &resultado);
    }
    
     
    if(resultado == 1){
        totalAprovado++;
        }
          else{
            totalReprovado++;
          }
  }

  printf("\nO total de aprovados foi: %d alunos.\n", totalAprovado);
  printf("O total de reprovados foi: %d alunos.\n\n", totalReprovado);

  if(totalAprovado > referencia){
    printf("Parabéns instrutor!\n");
    char pc = '%';
    printf("Seu percentual de aprovação foi maior que 80 %c.\n\n", pc);
  }

 return 0;
} 

