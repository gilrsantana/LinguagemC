/*
 * Nome Completo: Gilmar Ribeiro Santana
 * Turma: A
 * Exercício 10 da lista de exercícios 7
 * 
 * Uma empresa de turismo realiza excursões familiares para subir a Pedra da Gávea. 
 * No entanto, é necessário que as seguintes regras sejam obedecidas:
 * a) grupo de no mínimo 5 pessoas
 * b) pelo menos a metade dos participantes devem ser maior de idade
 * c) não pode haver integrantes com menos de 11 anos
 * d) o integrante mais velho será escolhido o líder da excursão.
 * Faça um programa que leia o número de identificação e a idade das pessoas de uma excursão familiar
 * e diga se este grupo satisfaz as regras e pode participar da excursão ( informando, também, 
 * a identificação do seu líder) ou se este grupo não satisfaz as regras e, por isso, não pode participar
 * desta excursão.
 * Obs: o término da entrada dos participantes desta excursão ocorre quando for digitado uma 
 * identificação == 0;
 * Dica: conte o número de pessoas, de maiores de idade e de menores de 11 anos. 
 * Guarde o valor da identificação e da maior idade.
 * Modificação: considere 5 excursões!
 */
#include <stdio.h>

#define NUMERO_MINIMO 5 // Número mínimo de participantes da excursão
#define IDADE_MINIMA 11 // Idade mínima para participar da excursão
#define IDADE_MAXIMA 120 // Idade máxima aceita pelo programa

int verificaIdade(int referencia);

int main(void){
    int id1;            // Registra o id do primeiro participante
    int idade1;         // Registra a idade do primeiro participante
    int id2;            // Registra o id dos participantes dentro do laço
    int idade2;         // Registra a idade dos participantes dentro do laço
    int grupo;          // Contabiliza a quantidade total de participantes
    int menor;          // Contabiliza a quantidade de participantes menor que IDADE_MINIMA
    int maior;          // Contabiliza a quantidade de participantes maior ou igual a 18 anos
    int valida;         // Contabiliza se a excursão tem seus parâmetros válidos
    int maxIdade;       // Registra a idade máxima
    int maxId;          // Registra o participante com a idade máxima
    int excursao=1;     // Inicia o contador do número de excursões
    float metadeGrupo;  // Utilizada para verificar e aceitar valor decimal referente metade do grupo

    grupo=menor=maior=valida=0; // Inicia essas variáveis em 0

    printf("************************************************\n");
    printf("****  PROGRAMA DE AGENDAMENTO PARA EXCURSÃO ****\n");
    printf("************************************************\n\n");

    printf("Antes de iniciar seu agendamento saiba das regras:\n");
    printf("(a) grupo de no mínimo 5 pessoas\n");
    printf("(b) pelo menos a metade dos participantes devem ser maior de idade\n");
    printf("(c) não pode haver integrantes com menos de %i anos\n", IDADE_MINIMA);
    printf("(d) o integrante mais velho será escolhido o líder da excursão\n");

    while(excursao <= 5){// Início de verificação das 5 excursões
        printf("\nInforme os dados da excursao %i.\n\n", excursao);
        printf("Informe Id ou 0 para sair: ");
        scanf("%i", &id1);
        
        if(id1 == 0){// Caso id=0, fim do programa
            id2 = 0;
        }else{
            idade1 = verificaIdade(id1);
            if(idade1 < IDADE_MINIMA){
                menor++;
            }else{
                if(idade1 >= 18){
                    maior++;
                }
            }
            grupo++;
            maxIdade = idade1;
            maxId = id1;
            id2 = 1;
        }
    
        while(id2 != 0){// Início do laço para entrada de dados dos demais participantes
            printf("Informe Id ou 0 para sair: ");
            scanf("%i", &id2);
        
            if(id2 != 0){// Caso id=0, fim do programa
                idade2 = verificaIdade(id2);
                if(idade2 < IDADE_MINIMA){
                    menor++;
                }else{
                    if(idade2 >= 18){
                     maior++;
                    }
                    if(idade2>maxIdade){
                        maxIdade = idade2;
                        maxId = id2;
                    }
                }
                grupo++;
            }
        } // Fim do laço para entrada de dados dos demais participantes
    
        if(grupo < NUMERO_MINIMO){ // Verifica número mínimo de participantes
            printf("%i pessoas. Pessoas insuficientes na excursão %i. Mínimo de %i.\n\n", grupo, excursao,NUMERO_MINIMO);
        }else{ // Verifica se pelo menos metade dos participantes é maior de idade
            metadeGrupo = grupo / 2.0;
            if((metadeGrupo) > maior){
                printf("Não há pessoas maior de idade suficientes na excursao %i.\n", excursao);
                printf("Metade do grupo precisa ser de pessoas maior de idade.\n\n");
            }else{ // Verifica se há algum participante menor de idade
                if(menor){
                    printf("O grupo tem pelo menos 1 pessoa menor de 11 anos na excursão %i.\n\n", excursao);
      
                }else{ // Imprime os dados da excursão válida
                    printf("O grupo tem %i pessoas e o Id %i é o líder do grupo. idade = %i.\n", grupo, maxId, maxIdade);
                    printf("A excursão %i é VÁLIDA.\n\n", excursao);
                    valida++; // Acumula quantidade de excursões válidas
                }
            }
        }
        grupo=menor=maior=0; // Reinicia as variáveis com 0 para a próxima sequência
        excursao++;
    } // Fim do while de verificação de excursão
    printf("Total de excursão válida = %i\n\n", valida);
    return 0;
} // Fim da Função main

int verificaIdade(int referencia){
    int idade;
    printf("Informe a idade: ");
    scanf("%i", &idade);
    while(idade < 0 || idade > IDADE_MAXIMA){
        printf("ERRO! Informe valor entre 0 e 120\n");
        printf("Informe a idade: ");
        scanf("%i", &idade);
    }
    printf("id=%i - idade=%i\n", referencia, idade);
    return idade;
}