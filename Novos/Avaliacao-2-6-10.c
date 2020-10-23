/*
 * Nome: Gilmar Ribeiro Santana
 * Turma: A
 * Turno: Noite
 * Questão 2
 * 
 * Foram entrevistadas n pessoas em m cidades sobre a popularidade de dois
 * candidatos à presidência: candidato A e candidato B. 
 * Cada entrevistado deu uma nota (número inteiro) de 0 a 5 a cada um 
 * dos dois candidatos. 
 * Faça um programa que leia a quantidade m de cidades. 
 * Para cada cidade pergunte o número n de pessoas entrevistadas. 
 * A seguir, leia as duas notas dadas por cada entrevistado e exiba:
 * Em cada cidade:
 * 1) A soma das notas obtidas pelo candidato A e a soma das notas 
 * obtidas pelo candidato B
 * 2) O total de entrevistados que deram nota 0 (zero) aos 2 candidatos.
 */
 
 #include <stdio.h>
 
 int verificaNota(char caracter);// Verifica se nota está entre 0 e 5
 
 int main(void){
	 int cidade, entrevistado, candidatoA, candidatoB, zeroA, zeroB;
	 int umA, umB, doisA, doisB, tresA, tresB, quatroA, quatroB, cincoA, cincoB;
	 int contCidade, contEntrevistado;
	 char a = 'A', b = 'B';
	 
	 contCidade = contEntrevistado = 1;
	 zeroA = zeroB = 0;
	 umA=umB=doisA=doisB=tresA=tresB=quatroA=quatroB=cincoA=cincoB=0;
	 
	 printf("Informe a quantidade de cidades: ");
	 scanf("%i", &cidade);
	 while(cidade){ // Início Cidade
		 printf("\n*****************************************\n");
		 printf("CIDADE %i\n", contCidade);
		 printf("Informe a quantidade de entrevistados: ");
		 scanf("%i", &entrevistado);
		 while(entrevistado){ // Início Entrevistado
			 printf("\n*****************************************\n");
			 printf("ENTREVISTADO %i\n", contEntrevistado);
			 candidatoA = verificaNota(a);
			 if(candidatoA == 0){
				 zeroA++;
			 }else if(candidatoA == 1){
				 umA++;
			 }else if(candidatoA == 2){
				 doisA++;
			 }else if(candidatoA == 3){
				 tresA++;
			 }else if(candidatoA == 4){
				 quatroA++;
			 }else if(candidatoA == 5){
				 cincoA++;
			 }
			 candidatoB = verificaNota(b);
			 if(candidatoB == 0){
				 zeroB++;
			 }else if(candidatoB == 1){
				 umB++;
			 }else if(candidatoB == 2){
				 doisB++;
			 }else if(candidatoB == 3){
				 tresB++;
			 }else if(candidatoB == 4){
				 quatroB++;
			 }else if(candidatoB == 5){
				 cincoB++;
			 }
			 entrevistado--;
			 contEntrevistado++;
		 } // Fim Entrevistado
		 printf("\n*****************************************\n");
		 printf("CIDADE %i", contCidade);
		 printf("\n*****************************************\n");
		 printf("CANDIDATO A \n");
		 printf("Nota 5 - %4.1f%% - %2i voto(s) - ",100.00*cincoA/contEntrevistado, cincoA);
		 for(int i = 1; i <= cincoA; i++){
			 printf(">");
		 }
		 printf("\nNota 4 - %4.1f%% - %2i voto(s) - ", 100.00*quatroA/contEntrevistado, quatroA);
		 for(int i = 1; i <= quatroA; i++){
			 printf(">");
		 }
		 printf("\nNota 3 - %4.1f%% - %2i voto(s) - ", 100.00*tresA/contEntrevistado, tresA);
		 for(int i = 1; i <= tresA; i++){
			 printf(">");
		 }
		 printf("\nNota 2 - %4.1f%% - %2i voto(s) - ", 100.00*doisA/contEntrevistado, doisA);
		 for(int i = 1; i <= doisA; i++){
			 printf(">");
		 }
		 printf("\nNota 1 - %4.1f%% - %2i voto(s) - ", 100.00*umA/contEntrevistado, umA);
		 for(int i = 1; i <= umA; i++){
			 printf(">");
		 }
		 printf("\nNota 0 - %4.1f%% - %2i voto(s) - ", 100.00*zeroA/contEntrevistado, zeroA);
		 for(int i = 1; i <= zeroA; i++){
			 printf(">");
		 }
		 printf("\n*****************************************\n");
		 printf("CANDIDATO B \n");
		 printf("Nota 5 - %4.1f%% - %2i voto(s) - ",100.00*cincoB/contEntrevistado, cincoB);
		 for(int i = 1; i <= cincoB; i++){
			 printf(">");
		 }
		 printf("\nNota 4 - %4.1f%% - %2i voto(s) - ", 100.00*quatroB/contEntrevistado, quatroB);
		 for(int i = 1; i <= quatroB; i++){
			 printf(">");
		 }
		 printf("\nNota 3 - %4.1f%% - %2i voto(s) - ", 100.00*tresB/contEntrevistado, tresB);
		 for(int i = 1; i <= tresB; i++){
			 printf(">");
		 }
		 printf("\nNota 2 - %4.1f%% - %2i voto(s) - ", 100.00*doisB/contEntrevistado, doisB);
		 for(int i = 1; i <= doisB; i++){
			 printf(">");
		 }
		 printf("\nNota 1 - %4.1f%% - %2i voto(s) - ", 100.00*umB/contEntrevistado, umB);
		 for(int i = 1; i <= umB; i++){
			 printf(">");
		 }
		 printf("\nNota 0 - %4.1f%% - %2i voto(s) - ", 100.00*zeroB/contEntrevistado, zeroB);
		 for(int i = 1; i <= zeroB; i++){
			 printf(">");
		 }
		 printf("\n******************************************\n\n");
		 zeroA = zeroB = 0;
		 umA=umB=doisA=doisB=tresA=tresB=quatroA=quatroB=cincoA=cincoB=0;
		 contCidade++;
		 contEntrevistado = 1;
		 cidade--;
	 } // Fim Cidade
	 
	 return 0;
 }
 
 ///////////////////////////////////////////////////////////////
 /////////////////////// Função auxiliar ///////////////////////
 ///////////////////////////////////////////////////////////////
 
 int verificaNota(char caracter){
	 int nota;
	 printf("Dê uma nota de 0 a 5 para o candidado %c: ", caracter);
	 scanf("%i", &nota);
	 while(nota < 0 || nota > 5){
		printf("ERRO! A NOTA DEVE ESTAR ENTRE 0 E 5\n");
		printf("Dê uma nota de 0 a 5 para o candidado %c: ", caracter);
		scanf("%i", &nota);
	 }
	 return nota;
 }
