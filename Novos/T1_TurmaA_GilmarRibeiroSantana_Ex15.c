/*
. * Escrever um programa que gere um número não determinado de pares de valores n,m, (n, entre 0 e 8) e m
entre 1 e 100), um par de cada vez, e calcula e escreve a soma dos n inteiros consecutivos a partir de m
inclusive. No final seu programa deve exibir a média da soma d dos n inteiros consecutivos a partir de m i
Término: valor de n==0
Ex: n= 3 , m=7  7+8+9+10 34
n=2, m=50  50+51  101
n=0
Média da soma: 135/2=67.5
*/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void){

  int m, n, numero, i=0, j=0, acumulador1=0, acumulador2=0;
  float media;

  srand(time(NULL));
  n = rand()%9;
  m = rand()%100;

  while(n!=0){

    while(i <= n){
    printf("Primeiro par - %i\n", m);
    acumulador1+=m;
    m++;
    i++;
    }

        
    while(j <= n){
      printf("Segundo par - %i\n", m);
      acumulador2+=m;
      m++;
      j++;
    }
    n = rand()%9;
    m = rand()%100;
  }

  media = (acumulador1  + acumulador2) / 2.00;
  printf("A média é %.2f\n\n", media);
  return 0;
}
