#include <stdio.h>

#define AJUSTE(a) ( ((a) * 3) - 3 )

void preencheArray(int referencia, int array[]);


int main(void){
	int cor;
	int palheta[24] = {-1};
	int matricula;
		
	printf("Informe o número da matrícula ou 0 para sair: ");
	scanf("%i", &matricula);
	while(matricula > 0){
		printf("Informe o número da cor (1 a 8): ");
		scanf("%i", &cor);
		preencheArray(cor, palheta);
		printf("R = %i / G = %i / B = %i \n\n", palheta[AJUSTE(cor)], palheta[AJUSTE(cor)+1], palheta[AJUSTE(cor)+2]);
		printf("Informe o número da matrícula ou 0 para sair: ");
		scanf("%i", &matricula);
	}
	
	return 0;
}

void preencheArray(int referencia, int array[]){
	int valor[24] = {255,255,255, 0,0,255, 255,0,0, 0,255,0, 255,255,0, 255,0,255, 0,255,255, 0,0,0};
	
	int min = AJUSTE(referencia);
		
	for(int i = min; i < (referencia * 3); i++){
		array[i] = valor[i];
	}
	
	return;
}


