/**********************************************************
- Autor:     Jaqueline Silva Ribeiro
- Descri��o: Cap. 6 - Exerc�cio 4
    Fa�a um programa que receba:
    - as notas de 15 alunos em cinco provas diferentes e armazene-as em uma matriz 15x5
    - os nomes dos 15  alunos e armazene-os em um vetor de 15 posi��es
    O programa dever� calcular e mostrar:
    - para cada aluno,o nome, a m�dia aritm�tica das cinco provas e a situa��o (aprovado, reprovado ou exame)
    - a m�dia da classe
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int matriz[15][5], i=0, j=0;
    float fNota=0, fSoma=0, fMedia=0 , fTotal=0;
    string sNome, vetor [15];

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    for(i=0; i<15; i++)
    {
        cin.ignore();
        cout<<"Informe o nome do aluno: ";
        getline(cin, sNome);
        vetor[i]=sNome;


        cout<<"Digite respectivamente as cinco notas do aluno:\n";
        for(j=0; j<5; j++)
        {
            cin>> matriz[i][j];
        }
    }
    for(i=0; i<15; i++)
    {
        fSoma=0;
        fMedia=0;

        for (j=0; j<5; j++)
        {
            fSoma= fSoma + matriz[i][j];
        }
        fMedia = fSoma/5;
        fTotal = fTotal + fMedia;

        cout<<"\nAluno: "<<vetor[i]<<endl;
        cout<<"M�dia: "<<fMedia<<endl;
        cout<<"Situa��o: ";
        if(fMedia<4)
        {
            cout<<"REPROVADO"<<endl;
        }
        else if(fMedia <6)
        {
            cout<<"EXAME"<<endl;
        }
        else if(fMedia>=6)
        {
            cout<<"APROVADO"<<endl;
        }
    }
    cout<<"\nM�dia da classe: "<< fTotal / 15 <<endl;

        return 0;
}
