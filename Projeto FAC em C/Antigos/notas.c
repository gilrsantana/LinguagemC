#include <stdio.h>

int main(void){

  int nota = 0;
  int contador = 0;
  int validador = -1;
  int soma = 0;

  printf("Informe a nota ou %d para encerrar: ", validador);
  scanf("%d", &nota);
  
  while(nota != validador){
    soma = soma + nota;
    contador++;
    printf("Informe a nota ou %d para encerrar: ", validador);
    scanf("%d", &nota);
  } 

  if(contador != 0){
    float media = soma / (float)contador;
    printf("A média da turma é %.2f.\n", media); 
  }
  
  return 0;
}
