#include <stdio.h>

#define TAM 5

int main(void){
	
	int vGab[TAM];
	int vAluno[TAM];
	int i, acerto, nota; 
	
	acerto = 0;
	
	for(i = 0; i < TAM; i++){
		printf("Informe o gabarito da %dª questão: ", i+ 1);
		scanf("%i", &vGab[i]);
	}
	
	for(i = 0; i < TAM; i++){
		printf("Informe a resposta da %dª questão: ", i+ 1);
		scanf("%i", &vAluno[i]);
	}
	
	for(i = 0; i < TAM; i++){
		if(vAluno[i] == vGab[i]){
			acerto++;
		}
	}
	
	nota = acerto * 2;
	
	printf("A nota do aluno é %d\n", nota);
	
	
	
	return 0;
}
