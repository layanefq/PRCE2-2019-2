/**********************************************************
- Autor:     Felipe Alexandre
 cap 11 atividade 1
 Descri��o:cria��o de arquivos
**********************************************************/

#include<iostream>
#include<stdio.h>
#include<cstdlib>

int main()
{
    using namespace std;
    setlocale(LC_ALL,"");
    FILE*arquivo;
    arquivo = fopen("Cod_Cli.txt","wt");
    arquivo = fopen("Num_doc.txt","wt");
    arquivo = fopen("Valor_doc.txt","wt");
    arquivo = fopen("Data_emiss�o.txt","wt");
    arquivo= fopen("Data_vencimento.txt","wt");
    arquivo = fopen("Cod_Cli.txt","wt");
    if (arquivo == NULL) // Se n�o conseguiu criar
{
   printf("Problemas na CRIACAO do arquivo\n");
}
}
