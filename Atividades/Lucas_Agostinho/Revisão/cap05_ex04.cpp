/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descri��o: Tabuada
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int numTab = 0;
    int i = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Insira um n�mero para a tabuada: ";
    cin >> numTab;

    cout << endl;

    for (i = 0; i < 11; i++)
    {
        cout << numTab << " x " << (i) << " = " << (numTab * i) << endl;
    }


    return 0;
}
