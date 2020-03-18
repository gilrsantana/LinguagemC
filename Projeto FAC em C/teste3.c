#include <unistd.h>
#include <time.h> 
#include <string.h> 
#include <stdio.h> 
#include <stdlib.h> 
/*
int main(void){
       time_t t_fim;
       struct tm *p_fim;
       char buffer[20];
       char *pAno, *pMes, *pDia;
       char str_ano[5], str_mes[3], str_dia[3];
       int ano, mes, dia, idade;
       int idade_param = 13;
       char *idade_min = NULL;
       char data_nascimento[] ="26/09/2000";

       time( & t_fim );
       p_fim = localtime( & t_fim );

       printf("%d\n", p_fim);

       printf("data nascimento..: %s\n",data_nascimento);

       strcpy( buffer, "\0" );
       strncpy( buffer, data_nascimento, 10 );

       pDia = strtok( buffer, "/" );
       pMes = strtok( NULL, "/" );
       pAno = strtok( NULL, "/" );

       strncpy(str_dia, pDia, sizeof(str_dia));
       strncpy(str_mes, pMes, sizeof(str_mes));
       strncpy(str_ano, pAno, sizeof(str_ano));

       str_dia[2]='\0';
       str_mes[2]='\0';
       str_ano[4]='\0';

       ano = atoi( str_ano );
       mes = atoi( str_mes );
       dia = atoi( str_dia );

       printf("dia..: %d\n",dia);
       printf("mes..: %d\n",mes);
       printf("ano..: %d\n",ano);

       idade = p_fim->tm_year+1900 - ano;

       printf("idade..: %d\s", idade);


       if( p_fim->tm_mon+1 <>tm_mon+1 == mes ){
       if( p_fim->tm_mday < dia ){
               idade--;
       }
       if (idade >= idade_param){
                printf("Idade [%d] maior que a idade minima [%d] - nao é necessario responsavel\n\n",idade, idade_param);
               return 0;
        }

   }*/


int main()
{
SYSTEMTIME st;//obtendo a data do sistema
GetSystemTime(&st);//guardando na variavel st

int ano_atual, ano;
ano_atual=st.wYear;
printf ("Qual o ano do seu nascimento ?: ");
scanf ("%d", &ano);
printf("Ano atual : %d \n", ano_atual);
printf ("Sua idade: %d \n", ano_atual-ano);
system("PAUSE");
return 0;
} 
