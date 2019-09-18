/**********************************************************
- Autor:     Jaqueline Silva Ribeiro
- Descri��o: Cap. 5 - Exerc�cio 20
    Fa�a um programa que apresente o menu de op��es a seguir:
        1.  M�dia aritm�tica
        2.  M�dia ponderada
        3.  Sair
    Na op��o 1: receber duas notas, calcular e mostrar a m�dia aritm�tica
    Na op��o 2: receber tr�s notas e seus respectivos pesos, calcular e mostrar a m�dia ponderada
    Na op��o 3: sair do programa
    Verifique a possibilidade de op��o inv�lida.Neste caso, o programa dever� mostrar uma mensagem
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int iOp=0;
    float fNota1 , fNota2 , fNota3 ,fPeso1 , fPeso2 , fPeso3 ;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    do
    {
            cout<<"Menu de op��es:\n1\tM�dia aritm�tica\n2\tM�dia ponderada\n3\tSair"<<endl;
            cout<<"Digite a op��o desejada: ";
            cin>> iOp;

            switch(iOp)
            {
            case 1:

                fNota1=0;
                fNota2=0;
                cout<<"Informe duas notas: ";
                cin>> fNota1 >> fNota2;

                cout<<"A m�dia das notas �: "<< (fNota1+fNota2)/2<<endl;
            break;
            case 2:

                fNota1=0;
                fNota2=0;
                fNota3=0;
                fPeso1=0;
                fPeso2=0;
                fPeso3=0;
                cout<<"Informe tr�s notas: ";
                cin>> fNota1 >> fNota2 >> fNota3;

                cout<<"informe o peso de cada nota respectivamente: ";
                cin >> fPeso1 >> fPeso2 >> fPeso3;

                cout<<"A m�dia ponderada �: "<<(fNota1*fPeso1)+(fNota2*fPeso2)+(fNota3*fPeso3)<<endl;
            break;
            case 3:
                cout<<"Programa finalizado."<<endl;
            break;
            default:
                cout<<"Op��o inv�lida."<<endl;
            break;
            }

    }while (iOp!=3);

    return 0;
}
