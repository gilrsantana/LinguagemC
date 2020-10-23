/*
 * Nome: Gilmar Ribeiro Santana
 * Turma: A
 * Turno: Noite
 * Questão 1
 * 
 * 1.Um atelier deseja cobrir todas as faces de caixas retangulares com 
 * retângulos de cartolina colorida. Faça um programa, utilizando 
 * obrigatoriamente as funções abaixo, que capture a altura, largura e 
 * comprimento da caixa e a largura e comprimento do retângulo de cartolina, 
 * calculando e exibindo a quantidade necessária de retângulos de cartolina 
 * para cobrir todas as faces da caixa.

 a) calcula_area: Recebe as medidas dos lados de um retângulo e retorna a 
 * área do mesmo. Obs.: Toda área neste programa tem que ser calculada 
 * usando esta função.

 b) calcula_quantidadeLado; Recebe  a área de um lado da caixa e a área do 
 * retângulo de cartolina, retorna a quantidade de retângulos de cartolina 
 * necessários para preenchê-lo. Lembre-se que não é possível retornar uma 
 * quantidade fracionada de retângulos

 c) calcula_quantidadeCaixa; Recebe as 3 dimensões da caixa e a área dos 
 * retângulos de cartolina e retorna a quantidade necessária de retângulos 
 * de cartolina para cobrir todas as faces da caixa.
 * 
 * 
 */
 
 #include <stdio.h>
 int calculaArea(int lado1, int lado2);
 int calculaQuantidadeLado(int valorCaixa, int valorCartolina);
 int calculaQuantidadeCaixa(int a1Caixa, int a2Caixa, int a3Caixa, int aCartolina);
 
 
 int main(){
	 int caixaAltura, caixaLargura, caixaComprimento, area1, area2, area3;
	 int l1Cartolina, l2Cartolina, areaCartolina, lA, lB, lE;
	 int totalCaixa;

	 
	 printf("Informe a altura da caixa: ");
	 scanf("%i", &caixaAltura);
	 printf("Informe a largura da caixa: ");
	 scanf("%i", &caixaLargura);
	 printf("Informe o comprimento da caixa: ");
	 scanf("%i", &caixaComprimento);
	 area1 = calculaArea(caixaAltura, caixaLargura);
	 area2 = calculaArea(caixaAltura, caixaComprimento);
	 area3 = calculaArea(caixaLargura, caixaComprimento);
	 printf("Informe a largura da cartolina: ");
	 scanf("%i", &l1Cartolina);
	 printf("Informe o comprimento da cartolina: ");
	 scanf("%i", &l2Cartolina);
	 areaCartolina = calculaArea(l1Cartolina, l2Cartolina);
	 lA = calculaQuantidadeLado(area1, areaCartolina);
	 lB = calculaQuantidadeLado(area2, areaCartolina);
	 lE = calculaQuantidadeLado(area3, areaCartolina);
	 printf("Faces da caixa\n"); 
	 printf("Face A = Face C = %i quadrados de cartolina\n", lA);
	 printf("Face B = Face D = %i quadrados de cartolina\n", lB);
	 printf("Face E = Face F = %i quadrados de cartolina\n", lE);
	 
	 totalCaixa = calculaQuantidadeCaixa(area1, area2, area3, areaCartolina);
	 printf("\nA caixa precisará de %i retangulos de cartolina\n", totalCaixa);
	 
	
	 
	return 0;
 }
 
 int calculaArea(int lado1, int lado2){
	 int area = lado1 * lado2;
	 return area;
 }
 
 int calculaQuantidadeLado(int valorCaixa, int valorCartolina){
	 int quantidade;
	 
	 quantidade = valorCaixa / valorCartolina;

	 if(valorCaixa % valorCartolina != 0){
		 quantidade = quantidade + 1;
	 }
	 
	 return quantidade;
 }
 
 int calculaQuantidadeCaixa(int a1Caixa, int a2Caixa, int a3Caixa, int aCartolina){
	 int retangulo;
	 
	 retangulo = (a1Caixa*2)+(a2Caixa*2)+(a3Caixa*2);
	 retangulo = retangulo / aCartolina;;
	 if(retangulo % aCartolina != 0){
		 retangulo = retangulo + 1;
	 }
	 	 
	 return retangulo;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
