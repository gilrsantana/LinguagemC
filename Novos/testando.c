/*
 * Nome completo: Gilmar Ribeiro Santana
 * Turma: A
 * Número do exercício da lista: 10
 * 
 * Escrever um programa que gere um número não determinado de pares de valores n,m, (n, entre 0 e 8) e
 * m (entre 1 e 100), um par de cada vez, e calcula e escreve a soma dos n inteiros consecutivos 
 * a partir de m inclusive. 
 * No final seu programa deve exibir a média da soma d dos n inteiros consecutivos a partir de m i
 * Término: valor de n==0
 * Ex: n= 3 , m=7 ---> 7+8+9+10 = 34
 *     n=2, m=50 --> 50+51 = 101
 *     n=0
 * Média da soma: 135/2=67.5
 */


#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void){

  int m, n, numero, i=1, j=1, acumulador1=0, acumulador2=0;
  float media;

  srand(time(NULL));
  n = rand()%9;
  m = rand()%101;
  while(m < 1){
    m = rand()%101;
  }
  printf("n=%i - m=%i - i=%i - j=%i - ac1=%i - ac2=%i - media=%.1f\n", n,m,i,j,acumulador1,acumulador2,media);

  while(n!=0){

    while(i <= n){
      printf(" %i ", m);
      acumulador1+=m;
      m++;
      i++;
      printf("n=%i - m=%i - i=%i - j=%i - ac1=%i - ac2=%i - media=%.1f\n", n,m,i,j,acumulador1,acumulador2,media);
    }
    printf("Acumulador1 = %i\n", acumulador1);
    i=1;
    printf("n=%i - m=%i - i=%i - j=%i - ac1=%i - ac2=%i - media=%.1f\n", n,m,i,j,acumulador1,acumulador2,media);


    n = rand()%9;
    m = rand()%101;
    while(m < 1){
      m = rand()%101;
    }
    printf("n=%i - m=%i - i=%i - j=%i - ac1=%i - ac2=%i - media=%.1f\n", n,m,i,j,acumulador1,acumulador2,media);
    while(j <= n && n != 0){
      printf(" %i ", m);
      acumulador2+=m;
      m++;
      j++;
      printf("n=%i - m=%i - i=%i - j=%i - ac1=%i - ac2=%i - media=%.1f\n", n,m,i,j,acumulador1,acumulador2,media);
    }
    printf("Acumulador2 = %i\n", acumulador2);
    j=1;
    printf("n=%i - m=%i - i=%i - j=%i - ac1=%i - ac2=%i - media=%.1f\n", n,m,i,j,acumulador1,acumulador2,media);
    n = rand()%9;
    m = rand()%101;
    while(m < 1){
      m = rand()%101;
    }
    printf("n=%i - m=%i - i=%i - j=%i - ac1=%i - ac2=%i - media=%.1f\n", n,m,i,j,acumulador1,acumulador2,media);
  }
  printf("n=%i - m=%i - i=%i - j=%i - ac1=%i - ac2=%i - media=%.1f\n", n,m,i,j,acumulador1,acumulador2,media);

  media = (acumulador1  + acumulador2) / 2.00;
  printf("A média é %.2f\n\n", media);
  return 0;
}
