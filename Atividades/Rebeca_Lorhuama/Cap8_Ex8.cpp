/**********************************************************
- Autor:     Rebeca Lorhuama de Castro Saraiva
- Descri��o: Fatorial de um n�mero
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

    //Declara��o de vari�veis
    int iNum = 0;
    int iFat = 0;
    int Fatorial();

int main()
{
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "FATORIAL DE UM N�MERO" << endl << endl;

    cout << "Digite um n�mero: ";
    cin >> iNum;

    Fatorial();

    return 0;
}

int Fatorial()
{
    for(iFat = 1; iNum > 1; iNum = iNum - 1)
    {
      iFat = iFat * iNum;
    }

    cout << "\nO fatorial do n�mero informado �: " << iFat << endl;

    return 0;
}

