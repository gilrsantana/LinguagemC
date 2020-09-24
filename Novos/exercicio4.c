/*
 * Faça um programa que leia a altura (em centímetros) de uma pessoa e exiba-a em metros e centímetros.
 * Ex: 120  1m 20cm
 */

#include <stdio.h>

int main(void){

  int altura, metro, centimetro;

  printf("Informe sua altura em centímetros: ");
  scanf("%d", &altura);

  metro = altura / 100;
  centimetro = altura % 100;

  printf("A altura de %d centímetros corresponde a %dm %dcm\n", altura, metro, centimetro);

  return 0;
}