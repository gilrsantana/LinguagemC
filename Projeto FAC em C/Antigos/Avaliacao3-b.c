#include <stdio.h>

int membro = 0;
int coluna = 3;
int profundidade = 1;

int membro1 = 1;
int coluna1 = 3;
int profundidade1 = 1;

int ddd;

int menu(void);
float MaxPreco(int qtd);
void codigo(float cod[membro][coluna][profundidade]);
void mostraCodigo(float mcod[membro][coluna][profundidade]);
//float preco(int ppp[], int n);
int main(void)
{
    float produto[membro][coluna][profundidade];

    /*for(int i = 0; i < membro; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    for(int k = 0; k < profundidade; k++)
                    {
                        produto[i][j][k] = 0.00;
                    }
                }
            }
            */

           
    printf("%i\n", membro);
    printf("%i\n", coluna);
    printf("%i\n", profundidade);

    printf("%f\t\n", produto[0][0][0]);
    printf("%f\t\n", produto[0][1][0]);
    printf("%f\t\n", produto[0][2][0]);
    printf("%f\t\n", produto[1][0][0]);
    printf("%f\t\n", produto[1][1][0]);
    printf("%f\t\n", produto[1][2][0]);
    printf("%f\t\n", produto[2][0][0]);
    printf("%f\t\n", produto[2][1][0]);
    printf("%f\t\n", produto[2][2][0]);
    printf("%f\t\n", produto[3][0][0]);
    printf("%f\t\n", produto[3][1][0]);
    printf("%f\t\n", produto[3][2][0]);
    printf("%f\t\n", produto[4][1][0]);
    
    
    float preco = 0.0;
    float precoMaior = 0.0;
    
    menu();

    return 0;
}

int menu(int )
{
int mn;

    printf("Selecione a sessão do programa.\n");
    printf("(1) Cadastrar Código de Produto\n");
    printf("(2) Consultar Produtos cadastrados\n");
    printf("(3) Inserir Preço de Produto\n");
    printf("(4) Consultar Preço de produto\n");

    scanf("%i", &mn);

    switch (mn)
    {
    case 1:
        codigo(cod[membro][coluna][profundidade]);
        break;
    
    case 2:
        mostraCodigo();
        break;
    
    case 3:
       
        break;
    
    case 4:
      
    
    default:
        printf("Selecione a sessão do programa.\n");
        printf("(1) Cadastrar Código de Produto\n");
        printf("(2) Consultar Produtos cadastrados\n");
        printf("(3) Inserir Preço de Produto\n");
        printf("(4) Consultar Preço de produto");

        scanf("%i", &mn);

        break;
    }
    return mn;
}

void codigo(float cod[membro][coluna][profundidade])
{
    float m[membro][coluna][profundidade];
    printf("Sessão de Cadastro de código de Produto.\n");
    
    do
    {
       
            int i = 0;
            int j = 0;
            int k = 0;
            printf("Informe o código do produto (DDD): ");
            scanf("%f", &m[i][j][k]);
            membro++;
            i++;
            printf("Digite (1) para continuar ou (0) para encerrar.\n");
            scanf("%i", &ddd);
 
    } while (ddd != 0);
    printf("membro = %i", membro);
    printf("\n");
    menu();
   
}

void mostraCodigo(float mcod[membro][coluna][profundidade])
{
    float m[membro][coluna][profundidade];


}
float Maxpreco(int qtd)
{
    
}