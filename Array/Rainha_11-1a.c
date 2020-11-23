#include <stdio.h>

#define TAM 10

void preencheArray(int v[], int size);
void vota(int v[], int vPontos[], int ref); // (ref=1 -> rei) (ref=2 -> rainha)
int mostraVencedor(int v[], int size);
int avaliaVetor(int v[],int size, int valor);


int main(void){
	// Rainha   101, 102, 103, 104, 105, 106, 107, 108, 109, 110
	// Posição    0,   1,   2,   3,   4,   5,   6,   7,   8,   9
	
	// Rei       48, 67, 33, 12, 8, 29, 15, 17, 70, 5
	// Posição    0,  1,  2,  3, 4,  5,  6,  7,  8, 9
	
	int vRainha[TAM], aluno, pos, cont = 0;
	int vRei[TAM] = { 48, 67, 33, 12, 8, 29, 15, 17, 70, 5 };
	int vPontosRei[TAM];
	
	preencheArray(vRainha, TAM);
	preencheArray(vPontosRei, TAM);
	
	printf("Informe a quantidade de alunos: ");
	scanf("%i", &aluno);
	
	while(cont < aluno){
		vota(vRainha,0, 2);
		vota(vRei, vPontosRei, 1);
		cont++;
	}
	
	pos = mostraVencedor(vRainha, TAM);
	printf("A vencedora é a rainha número %i com %i votos.\n", pos + 101, vRainha[pos]);
	pos = mostraVencedor(vPontosRei, TAM);
	printf("O vencedor é o rei número %i com %i votos.\n\n", vRei[pos], vPontosRei[pos]);
	
	return 0;
}

void preencheArray(int v[], int size){
	int i = 0;
	for(; i < size; i++){
		v[i] = 0;
	}
}

void vota(int v[], int vPontos[], int ref){ //(ref=1 -> rei) (ref=2 -> rainha)
	int voto, posicao;
	
	if(ref == 1){
		printf("Informe o número de seu rei: ");
		scanf("%i", &voto);
		posicao = avaliaVetor(v, TAM, voto);
		if(posicao == -1){
			printf("Voto nulo.\n\n");
		}else{
			vPontos[posicao]++;
		}
	}else{
		printf("Informe o número de sua rainha: ");
		scanf("%i", &voto);
		if(voto < 101 || voto > 110){
			printf("Voto nulo.\n");
		}else{
			posicao = voto - 101;
			v[posicao]++;
		}
	}
}

int mostraVencedor(int v[], int size){
	int max = -1;
	int maxPos;
	int i;
	
	for(i = 0;i < size; i++){
		if(v[i] > max){
			max = v[i];
			maxPos = i;
		}
	}
	
	return maxPos;
}

int avaliaVetor(int v[],int size, int valor){
	
	for(int i = 0; i < TAM; i++){
		
		if(v[i] == valor){
			
			return i;
		}
	}
	return -1;
}
