/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descri��o: Lista 8 - Exerc�cio 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int media(int valor, int iContador)
{
   cout << "A m�dia aritm�tica entre os valores �: " << valor/(iContador-1) << endl;
}


int main()
{

    //Declara��o de vari�veis

    int iCont=0;
    int iNum;
    int iSoma=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    while(iNum != 0)
    {
        cout << "Digite um n�mero positivo: ";
        cin >> iNum;

        iSoma = iSoma + iNum;
        iCont++;
    }

    media(iSoma,iCont);



    return 1;
}

