/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descri��o: Lista 9 - Exerc�cio 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string.h>

using namespace std;

struct calculo
{
    int iCont2=0;
    int iSal[20];
    int iIdade[20];
    int iFilhos[20];

    int media=0;
    int mediaf=0;
    int maior=0;
    int superior=0;

};


int main()
{

    //Declara��o de vari�veis

    int iCont=0;
    int iCont2=0;
    calculo teste;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa


    while(iCont<=20)
    {
        cout << "Digite o seu sal�rio: ";
        cin >> teste.iSal[iCont];

        cout << "Digite sua idade: ";
        cin >> teste.iIdade[iCont];

        cout << "Digite o n�mero de filhos: ";
        cin >> teste.iFilhos[iCont];

        iCont++;
    }

    while(iCont2<=20)
    {
        teste.media = teste.iSal[iCont2] + teste.media;
        iCont2++;
    }

    cout << "A m�dia de sal�rio da popula��o �: " << teste.media/iCont2 << endl;

    iCont2=0;

    while(iCont2<=20)
    {
        teste.mediaf = teste.iFilhos[iCont2] + teste.mediaf;
        iCont2++;
    }

    cout << "A m�dia do n�mero de filhos �: " << teste.mediaf/iCont2 << endl;

    iCont2=0;

    while(iCont2<=20)
    {
        if(teste.maior<teste.iSal[iCont2])
        {
            teste.maior = teste.iSal[iCont2];
        }

        iCont2++;
    }

    cout << "O maior sal�rio �: " << teste.maior << endl;

    iCont2=0;

    while(iCont2<=20)
    {
        if(teste.iSal[iCont2]>1000)
        {
            teste.superior++;
        }
    }

    cout << "O percentual de mulheres com sal�rio superior a R$ 1.000,00 �: " << (teste.superior/iCont2)*100;

    return 1;
}

