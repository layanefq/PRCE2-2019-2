/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descri��o: Lista 8 - Exerc�cio 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int valor(int iValor)
{
    if (iValor>0)
    {
        cout << "O n�mero � positivo" << endl;
    }
    else if (iValor<0)
    {
        cout << "O n�mero � negativo" << endl;
    }
}


int main()
{

    //Declara��o de vari�veis

    int iValor1;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite um n�mero inteiro: ";
    cin >> iValor1;

    valor(iValor1);



    return 1;
}

