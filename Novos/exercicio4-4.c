/* 
 * Faça um programa que obtenha do teclado N valores (inteiros e positivos) e teste quais valores
 * estão dentro e quais estão fora do intervalo [1...15], escrevendo o valor e a mensagem correspondente. 
 * O valor de N também deve ser lido.
 * Exemplo:
 * Entrada Saída
 * Quantos números? 5
 * Número? 3 3 está dentro do intervalo
 * Número? 18 18 está fora do intervalo
 * Número? 7 7 está dentro do intervalo
 * Número? 50 50 está fora do intervalo
 * Número? 22 22 está fora do intervalo 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int teste, intervaloA, intervaloB, sorteado, i=1;
  srand(time(NULL));

  printf("Informe a quantidade de testes que deseja fazer: ");
  scanf("%i", &teste);

  intervaloA = rand() % 16;
  intervaloB = rand() % 16;


  while(i <= teste){
    sorteado = rand() % 50;
    
    if( (sorteado > intervaloA && sorteado < intervaloB) || (sorteado > intervaloB && sorteado < intervaloA)){
      printf("O número %i está entre o intervalo %i e %i\n", sorteado, intervaloA, intervaloB);
    }else{
      printf("O número %i está fora do intervalo %i e %i\n", sorteado, intervaloA, intervaloB);
    }
    i++;
  }
  printf("\n");

  return 0;
}