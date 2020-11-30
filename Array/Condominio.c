#include <stdio.h>

#define TAM 5


int buscaArray(int valor, int v2[], int ref){
	
	for(int i = 0; i < ref; i++){
		if(v2[i] == valor){
			return i;
		}
	}
	return -1;
}

int main(void){
	int vA[TAM] = {101, 102, 201, 301, 402};
	int vB[TAM] = {101, 203, 301, 302, 401};
	int vFesta[10];
	int qt = 0;
	int i, pos;
	
	
	
	for(i = 0; i < TAM; i++){
		vFesta[i] = vA[i];
		qt++;
	}

	for(i = 0; i < TAM; i++){
		pos = buscaArray(vB[i], vFesta, qt);
		if(pos == -1){
			vFesta[qt] = vB[i];
			qt++;
		}
	}
	
	for(i = 0; i < qt; i++){
		printf("%d\n", vFesta[i]);
	}
	
	return 0;
}
