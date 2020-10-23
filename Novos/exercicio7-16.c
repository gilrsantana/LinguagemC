/*
 * Escrever um algoritmo que gere um número não determinado de valores para m,
 * todos inteiros e positivos, um de cada vez.
 * Se m for par, verificar quantos divisores possui e escrever esta informação.
 * Se m for ímpar e menor do que 10 calcular e escrever os m primeiros inteiros(1 a m).
 * Se m for ímpar e maior ou igual a 10 calcular e escrever a soma dos inteiros de 1 até m.
 */

 #include <stdio.h>
 #include <time.h>
 #include <stdlib.h>
 #include <locale.h>

 int main(void){
    int m, comparador=1, acumulador=0, continuar=1;
    float divisivel;
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    while(continuar){
        m = rand();
        printf("O número é %i\n", m);
        divisivel = m % 2;
        if(divisivel == 0.000000){
            while(comparador <= m){
                divisivel = m % comparador;
                if(divisivel == 0.000000){
                    printf("%i é divisível por %i = %i\n", m, comparador, m/comparador);
                }
                comparador++;
            }
            comparador=1;
        }else{
            if(m < 10){
                while(comparador <= m){
                    printf("%i --- %i\n", comparador, m);
                    comparador++;
                }
                comparador = 1;
            }else{
                while(comparador <= m){
                    acumulador+=comparador;
                    comparador++;
                }
                printf("A soma dos números de 1 até %i é %i\n", m, acumulador);
                comparador = 1;
            }
        }
        printf("Digite 1 para continuar ou 0 para sair: ");
        scanf("%i", &continuar);
        printf("\n");
    }
    return 0;
 }
