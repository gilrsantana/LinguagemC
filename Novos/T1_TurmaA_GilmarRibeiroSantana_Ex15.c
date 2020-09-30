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

/* Se m=0, refaz o randômico, pois o problema admite apenas valor de 1 a 100 */
int verificaM(); // 
/* 
 * Para se achar o par de números esta função foi criada para caso n=0 no segundo laço, 
 * havendo então apenas 1 laço de números e não dois
 */
int verificaN(); 

int main(void){

  int m, n, numero, i=1, acumulador1=0, acumulador2=0;
  float media;

  srand(time(NULL));
  n = rand()%9;
  m = verificaM();

  while(n!=0){// Início laço externo
    // Gera o primeiro grupo de números
    while(i <= n){
      printf(" %i ", m);
      acumulador1+=m;
      m++;
      i++;
    }

    i=1;// Retorna i=1 para ser reutilizado
    printf("\n");
    n = verificaN();
    m = verificaM();
    // Gera o segundo grupo de números
    while(i <= n){
      printf(" %i ", m);
      acumulador2+=m;
      m++;
      i++;
    }
    i=1;// Retorna i=1 para ser reutilizado
    printf("\n");
    n = rand()%9;
    if(n != 0){// Só gera m se n for diferente de zero
        m = verificaM();
    }
  }// Fim do laço externo
  printf("Somatório do grupo 1 = %i\n", acumulador1);
  printf("Somatório do grupo 2 = %i\n", acumulador2);
  media = (acumulador1  + acumulador2) / 2.00;
  printf("\nA média é %.2f\n\n", media);
  return 0;
}// Fim da main
// Verificação de M
int verificaM(){
  int m;
  m = rand()%101;
  while(m < 1){
    m = rand()%101;
  }
  return m;
}
// Verificação de N
int verificaN(){
  int n;
  n = rand()%9;
  while(n = 0){
    n = rand()%9;
  }
  return n;
}