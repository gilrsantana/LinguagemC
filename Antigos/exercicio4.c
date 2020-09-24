#include <stdio.h>

int main(void){
	
	int num1, num2;
	
	printf("\nVerifique a relação entre dois números inteiros.\n");
	
	printf("\nInforme o primeiro número inteiro e pressione ENTER.\n");
	scanf("%d", &num1);
	
	printf("\nInforme o segundo número inteiro e pressione ENTER.\n");
	scanf("%d", &num2);
	
	if (num1 == num2){
		printf("\nOs números são iguais.\n");
	}else if (num1 > num2){
		printf("\nO primeiro número - %d - é maior que o segundo número - %d.\n", num1, num2);
	}else{
		printf("\nO primeiro número - %d - é menor que o segundo número - %d.\n", num1, num2);
	}
	
	return 0;
}
