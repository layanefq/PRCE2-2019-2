/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descri��o: Lista 5 - Exerc�cio 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int iCont = 0;
    int iNum;
    int iTabuada;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite um n�mero: ";
    cin >> iNum;


    while(iCont <= 10)
    {
        iTabuada = iNum*iCont;
        cout << iNum << "x" << iCont << " = " << iTabuada << endl;
        iCont++;
    }

    return 1;
}
