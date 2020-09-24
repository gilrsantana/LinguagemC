#include <stdio.h>

int main(void){
	
	#define PESO_CE 40
	#define PESO_CG 20
	#define PESO_MAT 15
	#define PESO_POR 25
	
	float notaCE, notaCG, notaMat, notaPor, notaFinal;
	
	printf("\nInforme o valores de notas entre 0 e 100");
	
	printf("\nInforme sua nota na Prova de Conhecimento Específico >>> ");
	scanf("%f", &notaCE);
	printf("\nInforme sua nota na Prova de Conhecimento Geral >>> ");
	scanf("%f", &notaCG);	
	printf("\nInforme sua nota na Prova de Matemática >>> ");
	scanf("%f", &notaMat);
	printf("\nInforme sua nota na Prova de Português >>> ");
	scanf("%f", &notaPor);
	
	notaFinal = (((notaCE * PESO_CE)+(notaCG * PESO_CG)+(notaMat * PESO_MAT)+(notaPor * PESO_POR)) /
				(PESO_CE+PESO_CG+PESO_MAT+PESO_POR));
	
	if(notaFinal >= 70){
		printf("\nMédia %.2f Aluno APROVADO.\n\n", notaFinal);
	}else{
		printf("\nMédia %.2f aluno REPROVADO.\n\n", notaFinal);
	}
			
	return 0;
}
