/**********************************************************
- Autor:     Rodrigo Braz de Azevedo
- Descri��o:
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int iNumero = 0;
    int iTabuada = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Insira um n�mero: ";
    cin >> iNumero;
    while (iTabuada <= 10)
    {
        cout << iNumero << " * " << iTabuada << " = " << iNumero * iTabuada << endl;
        iTabuada++;
    }


    return 0;
}
