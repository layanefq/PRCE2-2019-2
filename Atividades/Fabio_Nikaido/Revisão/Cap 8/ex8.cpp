/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descri��o: Lista 8 - Exerc�cio 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int fatorial(int iCalculo)
{
   int iCont=1;
   int iFatorial=0;

   int iCalculo2 = iCalculo;

    while(iCont<iCalculo2)
    {
        iCalculo = iCont*iCalculo;
        iCont++;
    }

   cout << "O fatorial de " << iCalculo << " �: " << iCalculo;
}


int main()
{

    //Declara��o de vari�veis

    int valor;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite um n�mero inteiro e positivo: ";
    cin >> valor;

    fatorial(valor);

    return 1;
}

