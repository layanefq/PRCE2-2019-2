/**********************************************************
- Autor:     Rebeca Lorhuama de Castro Saraiva
- Descri��o: N�meros positivos e negativos
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

    //Declara��o de vari�veis
    int iNum = 0;
    int PosNeg();

int main()
{
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "POSITIVO E NEGATIVO" << endl << endl;

    cout << "Informe um valor: ";
    cin >> iNum;

    PosNeg();

    return 0;
}

    int PosNeg()
{
    if (iNum > 0)
    {
        cout << "\nO n�mero � positivo!" << endl;
    }

    else if (iNum < 0)
    {
        cout << "\nO n�mero � negativo!" << endl;

    }

    else
    {
        cout << "\nNem positivo, nem negativo!" << endl;
    }
}
