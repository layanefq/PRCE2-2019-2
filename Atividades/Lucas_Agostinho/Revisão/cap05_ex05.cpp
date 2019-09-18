/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descri��o: Tabuada do 1 ao 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int j = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    for (i = 0.; i < 10; i++)
    {
        cout << endl << "Tabuada do " << (i + 1) << ":" << endl;

        for (j = 0; j < 11; j++)
        {
            cout << (i + 1) << " x " << j << " = " << ((i + 1) * j) << endl;
        }
    }

    return 0;
}
