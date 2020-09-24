/*
 *Faça um programa que mostre o sucessor e o antecessor de um número inteiro fornecido pelo usuário
 */

#include <stdio.h>

int main(void) {

  int numero_base, sucessor, antecessor;

  printf("Informe o número base: ");
  scanf("%d", &numero_base);

  sucessor = numero_base + 1;
  antecessor = numero_base -1;

  printf("O número %d tem como antecessor o número %d e sucessor %d.\n", numero_base, antecessor, sucessor);

  return 0;
}




