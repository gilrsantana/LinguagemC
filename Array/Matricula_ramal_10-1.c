#include <stdio.h>
#define TAM 5
int busca(int vetor[], int n, int ref){
	for(int i = 0; i < n; i++){
		if(ref == vetor[i]){
			return i;
		}
	}
	return -1;
}

int main(void){
	int entrada, ref;
	int matricula[5] = {1234, 234, 9871, 7878, 4356};
	int ramal[5] = {888, 777, 777, 666, 111};

	printf("Informe a matrícula do funcionário: ");
	scanf("%d", &entrada);
	ref = busca(matricula, TAM, entrada);
	if(ref >= 0){
		printf("O ramal é %d\n", ramal[ref]);
	}else{
		printf("Matrícula não reconhecida\n");
	}
	return 0;
}
