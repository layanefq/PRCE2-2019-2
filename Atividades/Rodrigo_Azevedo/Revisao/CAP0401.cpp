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
    float fN1 = 0;
    float fN2 = 0;
    float fN3 = 0;
    float fN4 = 0;
    float fMedia = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Adicione as notas: ";
    cin >> fN1 >> fN2 >> fN3 >> fN4;
    fMedia = (fN1 + fN2 + fN3 + fN4) / 4;
    cout << fMedia << endl;
    if (fMedia < 7)
    {
        cout << "Reprovado" << endl;
    }
    else
    {
        cout << "Aprovado" << endl;
    }

    return 0;
}
