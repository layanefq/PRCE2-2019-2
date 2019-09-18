/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descri��o: Soma pares e �mpares
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    ///Declara��o de vari�veis
    int num[10];
    int somaPar = 0;
    int somaImpar = 0;
    int i = 0;

    ///Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    ///C�digo do programa
    for (i = 0; i < 10; i++)
    {
        cout << "Insira o " << (i + 1) << "� valor: ";
        cin >> num[i];

        if (num[i] % 2 == 0)
        {
            somaPar += num[i];
        }
        else
        {
            somaImpar += num[i];
        }
    }

    cout << "\nSoma dos n�meros pares: " << somaPar << endl;
    cout << "Soma dos n�meros �mpares: " << somaImpar << endl;


    return 0;
}
