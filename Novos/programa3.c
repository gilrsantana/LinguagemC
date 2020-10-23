/*
 * Nome: Gilmar Ribeiro Santana
 * Turma: A
 * Turno: Noite
 * Questão 3
 * 
 * 3.Faça um programa que gere uma quantidade indeterminada de valores 
 * entre 1 e 90. Para cada valor gerado o programa deve mostrar seus divisores. 
 * Ao final, deve ser exibido:
 * Média dos valores pares
 * Maior valor ímpar gerado
 * Percentual de valores pares múltiplos de 5
 * Término da geração de valores:  número gerado é múltiplo de 30
 * 
 * 
 */
 
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int num,fator, maxImpar=-1, contNum=0, contPar=0, acumPar=0, cont5=0;
	float pCento5, mediaPar;
	fator = 1;
	srand(time(NULL));
	num = rand()%90 + 1;
	
	while(num != 30){
		while(fator <= num){
			if(num % fator == 0){
				printf("%i é divisível por %i\n", num, fator);
			}
			fator++;
		}
		if(num % 2 == 0){
			contPar++;
			acumPar+=num;
			if(num % 5 == 0){
				cont5++;	
			}
		}else{
			if(num > maxImpar){
				maxImpar = num;
			}		
		}
		fator = 1;
		contNum++;
		num = rand()%90 + 1;
	}
	mediaPar = acumPar / contPar * 1.00;
	pCento5 = (100.00*cont5)/contNum;
	printf("Média dos valores pares = %.2f\n", mediaPar);
	printf("Maior valor ímpar = %i\n", maxImpar);
	printf("Percentual de valores pares múltiplos de cinco = %.2f%%\n", pCento5);
	
	return 0;
}
