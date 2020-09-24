/*
 * Um professor, sabendo que a dose diária de água é individual,resolveu calcular a quantidade mínima
 * de litros de água que deve ser ingerida por cada um dos seus n (lido) alunos de uma turma.
 * Esta medida é calculada por:
 * litros de água/dia = 35ml de água * peso corporal/1000
 * Faça um programa que inicialmente obtenha a quantidade de alunos da turma (n). A seguir, para
 * cada um dos alunos, obtenha o peso e mostre a quantidade mínima de litros que o aluno deve
 * consumir.
 * Modifique o programa para processar as m (perguntado ao usuário) turmas do professor
 */

#include <stdio.h>

float calcularAgua(float peso);

int main(void){
    int qtdAluno;
    float pesoAluno, aguaNecessaria;

    printf("Informe a quantidade de alunos: ");
    scanf("%i", &qtdAluno);

    int i = 1;
    while(i <= qtdAluno){
        printf("Informe seu peso: ");
        scanf("%f", &pesoAluno);
        aguaNecessaria = calcularAgua(pesoAluno);

        printf("O aluno %i precisa de %.2f Litros de água por dia.\n\n", i, aguaNecessaria);
        i++;
    }
    

    return 0;
}
float calcularAgua(float peso){
    float aguaPorDia = 35 * peso/1000;
    return aguaPorDia;
}