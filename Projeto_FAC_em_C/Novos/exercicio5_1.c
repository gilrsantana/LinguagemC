/*
 * Faça um programa que pergunte a matrícula a nota1 e a nota2 dos alunos de uma turma.
 * Mostre a média aritmética e se o alunos está aprovado ( média >=6) ou não.
 * A entrada de dados é finalizada quando uma matrícula ≤ 0 for digitado.
 */

#include <stdio.h>
#include <locale.h>
float calcularMediaAritmetica(float valor1, float valor2);
float validaNota(int nota);
int main(void){
    int matricula;
    float nota1, nota2, media;
    setlocale(LC_ALL,"Portuguese");
    printf("Informe o número da matrícula ou 0 para sair do programa: ");
    scanf("%i", &matricula);
    while (matricula != 0){
        nota1 = validaNota(1);
        nota2 = validaNota(2);
        media = calcularMediaAritmetica(nota1, nota2);
        printf("A média do aluno de matrícula %i é %.2f\n\n", matricula, media);
        printf("Informe o número da matrícula ou 0 para sair do programa: ");
        scanf("%i", &matricula);
    }

    return 0;
}
float calcularMediaAritmetica(float valor1, float valor2){
    float mediaAritmetica = (valor1 + valor2) / 2;
    return mediaAritmetica;
}
float validaNota(int nota){
    float valor;
    printf("Informe a nota %i: ", nota);
    scanf("%f", &valor);
    while (valor < 0 || valor > 10){
        printf("ERRO! Informe um valor entre 0 e 10.\n");
        printf("Informe a nota %i: ", nota);
        scanf("%f", &valor);
    }
    return valor;    
}