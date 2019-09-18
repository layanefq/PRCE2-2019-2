/**********************************************************
- Autor:     Jaqueline Silva Ribeiro
- Descri��o: Cap. 5 - Exerc�cio 3
    Fa�a um programa que receba a idade de oito pessoas, calcule e mostre:
    a) a quantidade de pessoas em cada faixa et�ria
    b) a porcentagem de pessoas na primeira faixa et�ria com rela��o ao total de pessoas
    c) a porcentagem de pessoas na �ltima faixa et�ria com rela��o ao total de pessoas

        1a      at� 15 anos
        2a      de 16 a 30 anos
        3a      de 31 a 45 anos
        4a      de 46 a 60 anos
        5a      acima de 60 anos
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
  int idade=0, iPessoa=0, iFE1=0, iFE2=0, iFE3=0, iFE4=0, iFE5=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    for(iPessoa=0; iPessoa<8; iPessoa++)
    {
        cout<<"Informe a idade: ";
        cin>> idade;

        if(idade<16)
        {
            iFE1++;
        }
        else if(idade<31)
        {
            iFE2++;
        }
        else if(idade<46)
        {
            iFE3++;
        }
        else if(idade<61)
        {
            iFE4++;
        }
        else if(idade>60)
        {
            iFE5++;
        }
    }

    cout<<"Quantidade de pessoas em cada faixa et�ria:\n1a\t"<<iFE1<<"\n2a\t"<<iFE2<<"\n3a\t"<<iFE3<<"\n4a\t"<<iFE4<<"\n5a\t"<<iFE5<<endl;

    cout<<100*iFE1/8<<"% de pessoas est�o na primeira faixa et�ria."<<endl;
    cout<<100*iFE5/8<<"% de pessoas estao na �ltima faixa et�ria."<<endl;

    return 0;
}
