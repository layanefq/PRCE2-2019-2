/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descri��o: Lista 5 - Exerc�cio 16
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int iIdade;
    int iSoma = 0;
    int iCont = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    while (iIdade != 0)
    {
        cout << "Digite a idade: ";
        cin >> iIdade;

        iSoma = iIdade+iSoma;
        iCont++;
    }

    cout << "A m�dia entre as idade �: " << iSoma/(iCont-1) << endl;


    return 1;
}
