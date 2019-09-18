/**********************************************************
- Autor:     Jaqueline Silva Ribeiro
- Descri��o: Cap. 5 - Exerc�cio 8
    Fa�a um programa que receba a idade, o peso, a cor dos olhos e a cor dos cabelos de seis pessoas.
        - a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60kg
        - a m�dia das idades das pessoas com altura inferior a 1.50 m
        - a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas
        - a quantidade de pessoas ruivas e que n�o possuem olhos azuis
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
  int idade=0 , iPessoa=0 , iA=0 , iB=0 , iSoma=0 , iC=0 , iD=0;
  float fPeso=0 , fAltura=0 ;
  char cOlho , cCabelo;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    for(iPessoa=0; iPessoa<6; iPessoa++)
    {
        do
        {
        cout<<"Informe a idade: ";
        cin>> idade;
        if(idade<0)
        {
            cout<<"Idade inv�lida. Tente novamente."<<endl;
        }
        } while(idade<0);


        do
        {
        cout<<"Informe o peso: ";
        cin>> fPeso;
        if(fPeso<0)
        {
            cout<<"Peso inv�lido. Tente novamente."<<endl;
        }
        }while(fPeso<0);


       do
       {
        cout<<"Informe a altura: ";
        cin>> fAltura;
        if(fAltura<0)
        {
            cout<<"Altura inv�lida. Tente novamente."<<endl;
        }
       }while(fAltura<0);


       do
       {
        cout<<"\tA\tAzul\n\tP\tPreto\n\tV\tVerde\n\tC\tCastanho\nInforme a cor dos olhos: ";
        cin>> cOlho;
        if(cOlho != 'a' && cOlho != 'A' && cOlho != 'p' && cOlho != 'P' && cOlho != 'v' && cOlho != 'V' && cOlho != 'c' && cOlho != 'C')
        {
            cout<<"Informa��o inv�lida. Tente novamente."<<endl;
        }
       }while (cOlho != 'a' && cOlho != 'A' && cOlho != 'p' && cOlho != 'P' && cOlho != 'v' && cOlho != 'V' && cOlho != 'c' && cOlho != 'C');


       do
       {
        cout<<"\tP\tPreto\n\tC\tCastanho\n\tL\tLouro\n\tR\tRuivo\nInforme a cor dos cabelos: ";
        cin>> cCabelo;
        if(cCabelo != 'p' && cCabelo != 'P' && cCabelo != 'c' && cCabelo != 'C' && cCabelo != 'l' && cCabelo != 'L' && cCabelo != 'r' && cCabelo != 'R')
        {
            cout<<"Informa��o inv�lida. Tente novamente."<<endl;
        }
       }while(cCabelo != 'p' && cCabelo != 'P' && cCabelo != 'c' && cCabelo != 'C' && cCabelo != 'l' && cCabelo != 'L' && cCabelo != 'r' && cCabelo != 'R');


        if (idade>50 && fPeso<60)
        {
            iA++; // quantidade de pessoas com estas condi��es
        }
        if(fAltura<1.50)
        {
            iB++; //quantidade de pessoas com estas condi��es
            iSoma = iSoma + idade;
        }
        if(cOlho == 'A' || cOlho == 'a')
        {
            iC++; //quantidade de pessoas com estas condi��es
        }
        if((cCabelo == 'R' || cCabelo == 'r') && (cOlho != 'A' || cOlho != 'a'))
        {
            iD++; //qauntidade de pessoas com estas condi��es
        }



    }

    cout<<"Quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg: "<<iA<<endl;
    cout<<"M�dia das idades das pessoas com altura inferior a 1.50: "<<iSoma/iB<<endl;
    cout<<"Porcentagem de pessoas com olhos azuis: "<<100*iC/iPessoa<<endl;
    cout<<"Quantidade de pessoas ruivas e que n�o possuem olhos azuis: "<<iD<<endl;

    return 0;
}
