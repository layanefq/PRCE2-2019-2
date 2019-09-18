/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descri��o: M�ltiplos de [2], [3] e [2 e 3]
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    ///Declara��o de vari�veis
    int num[7];
    int i = 0;

    ///Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    ///C�digo do programa
    for (i = 0; i < 7; i++)
    {
        cout << "Insira o " << (i + 1) << "� valor: ";
        cin >> num[i];
    }

    cout << "\nM�ltiplos de 2: ";
    for (i = 0; i < 7; i++)
    {
        if (num[i] % 2 == 0)
        {
            cout << "[" << num[i] << "] ";
        }
    }

    cout << "\nM�ltiplos de 3: ";
    for (i = 0; i < 7; i++)
    {
        if (num[i] % 3 == 0)
        {
            cout << "[" << num[i] << "] ";
        }
    }

    cout << "\nM�ltiplos de 2 e 3: ";
    for (i = 0; i < 7; i++)
    {
        if (num[i] % 2 == 0 && num[i] % 3 == 0)
        {
            cout << "[" << num[i] << "] \n";
        }
    }

    return 0;
}
