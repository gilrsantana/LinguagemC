/*
 * Mostrar a tabuada de números  informados pelo usuário.
 * A entrada de dados é finalizada quando um número ≤ 0 for digitado.
 */

#include <stdio.h>
#include <locale.h>
int calcularValor(int numero1, int numero2);
int main(void){
    int numero, resultado, tabuada=1;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe um número para exibir sua tabuada até 10 ou 0 para sair do programa: ");
    scanf("%i", &numero);

    while(numero!=0){
        while(tabuada<=10){
            resultado = calcularValor(numero, tabuada);
            printf("%3i x %3i = %3i\n", numero, tabuada, resultado);
            tabuada++;
        }
        printf("\nInforme um número para exibir sua tabuada até 10 ou 0 para sair do programa: ");
        scanf("%i", &numero);
        tabuada=1;
    }
    return 0;
}
int calcularValor(int numero1, int numero2){
    int valor = numero1 * numero2;
    return valor;
}
