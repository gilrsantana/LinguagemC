/*
 * 4.Na correção da prova ou do teste, quando a resposta está certa, o professor coloca 1 
 * e quando está errada coloca 0. No entanto,  para calcular a nota, cada 3 erros eliminam um 
 * acerto.
 * Para cada aluno é introduzido via teclado:
 * 1- matrícula
 * 2- suas respostas para as 10 questões da prova ou teste;
 * 
 * Faça um programa, utilizando a função contabilizaPontos(...), que calcule e mostre a média
 * de G1 de cada aluno ( P1*0.8 + T1*0.2), sabendo que todos os alunos compareceram as duas 
 * avaliações.
 * 
 * A função void contabilizaPontos(int *acertos, int *erros), recebe as variáveis para 
 * armazenar os acertos e os erros do aluno.  Lê  as  10 respostas do aluno retornando a 
 * quantidade de acertos e de erros;
 */


#include <stdio.h>

#define QUESTOES 10
#define PENALIDADE 3

void contabilizaPontos(int *acertos, int *erros);

int main(void){
	int acertos, erros, matricula;
	float p1, t1, media;
	
	acertos=erros=0;
	
	printf("Informe a matrícula do aluno ou 0 para sair: ");
	scanf("%i", &matricula);
	while(matricula > 0){
		printf("\n*** PROVA 1 ***\n");
		contabilizaPontos(&acertos, &erros);
		p1 = acertos - (erros / PENALIDADE);
		if(p1 < 0){
			p1 = 0;
		}
		acertos=erros=0;
		printf("\n*** TESTE 1 ***\n");
		contabilizaPontos(&acertos, &erros);
		t1 = acertos - (erros / PENALIDADE);
		if(t1 < 0){
			t1 = 0;
		}
		media = (p1*0.8) + (t1*0.2);
		
		printf("\n\n**** MATRÍCULA %3i ****\n", matricula);
		printf("Média .......... %.2f\n", media);
		printf("***********************\n\n");
		
		printf("Informe a próxima matrícula aluno ou 0 para sair: ");
		scanf("%i", &matricula);
		acertos=erros=0;
	}
	
	return 0;
}

void contabilizaPontos(int *acertos, int *erros){
	int i=1, verificacao;
	
	printf("Informe 1=acerto ou 0=erro\n");
	while(i <= QUESTOES){
		printf("Questão %2i: ", i);
		scanf("%i", &verificacao);
		while(verificacao < 0 || verificacao > 1){
			printf("ERRO!\n");
			printf("Informe 1=acerto ou 0=erro\n");
			printf("Questão %2i: ", i);
			scanf("%i", &verificacao);
		}
		if(verificacao == 1){
			(*acertos)++;
		}else{
			(*erros)++;
		}
		i++;
	}
	
	return;
}
