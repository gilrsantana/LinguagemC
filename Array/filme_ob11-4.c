/*
 * A programação interativa de um canal de TV disponibiliza 10 opções de filmes para 
 * seus telespectadores, numerados de 110 a 200 (de 10 em 10). 
 * Faça um programa que leia o arquivo A idade e a escolha feita por cada telespectador 
 * que ligou, exibindo, para cada filme, a idade do telespectador mais velho que votou 
 * no filme bem como número do filme mais votado.
 */
 
#include <stdio.h>

#define SIZE 100

int validaIdade();
void preencheArray(int v[], int valor);
void mostraMaisIdoso(int vIdade[], int vFilme[]);
void mostraMaisVotado(int v[]);


int main(void){
    // filme 110, 120, 130, 140, 150, 160, 170, 180, 190, 200

    int vFilme[SIZE];
    int vIdade[SIZE];
    int idade, filme, pos = 0;
    
    preencheArray(vFilme, -1);
    preencheArray(vIdade, -1);
    
    idade = validaIdade();
    
    while(idade > 0){
        vIdade[pos] = idade;
        printf("Infome seu filme favorito:\n");
        printf("filme 110, 120, 130, 140, 150, 160, 170, 180, 190, 200\n");
        scanf("%i", &filme);
        if((filme >= 110 && filme <= 200) && (filme % 10 == 0)){
            vFilme[pos] = filme;
            pos++;
        }else{
            printf("\nVoto inválido!");
        }
        printf("\n");
        idade = validaIdade();
    }
    
    printf("\n");
	printf("\n////////////////////////////////////////////////////////");
	printf("\n////////////////// DADOS ESTATÍSTICOS //////////////////");
	printf("\n////////////////////////////////////////////////////////\n\n");
    mostraMaisIdoso(vIdade, vFilme);
    mostraMaisVotado(vFilme);
        
    return 0;
}

//////////////////////////////////////////////////////////
void preencheArray(int v[], int valor){

    for(int i = 0; i < SIZE; i++){
        v[i] = valor;
    }
}
//////////////////////////////////////////////////////////
int validaIdade(){
	int idade;
	
	printf("Infome sua idade ou 0 para sair: ");
    scanf("%i", &idade);
    while(idade < 0 || idade > 110){
		printf("ERRO!\n");
		printf("Infome novamente sua idade ou 0 para sair: ");
		scanf("%i", &idade);
	}
	return idade;
}

//////////////////////////////////////////////////////////
void mostraMaisIdoso(int vIdade[], int vFilme[]){
    int maxIdade = -1;
    int pos;
    
    for(int i = 0; i < SIZE; i++){
        if(vIdade[i] > maxIdade){
            maxIdade = vIdade[i];
            pos = i;
        }
    }
    printf("Participante mais idoso ... %i anos\n", maxIdade);
    printf("Filme escolhido por ele ... %i\n", vFilme[pos]);
}

//////////////////////////////////////////////////////////
void mostraMaisVotado(int v[]){
	int cod;
	int cont = 0;
	int maxCont = -1;
	int maxFilme;
	
	for(cod = 110; cod <= 200; cod= cod + 10){
		for(int i = 0; i < SIZE; i++){
			if(v[i] == cod){
				cont++;
			}
			if(cont > maxCont){
				maxCont = cont;
				maxFilme = cod;
			}
		}
		cont = 0;
	}
	
	printf("O filme mais votado foi o código %d. %i votos\n\n", maxFilme, maxCont);
}
//////////////////////////////////////////////////////////
