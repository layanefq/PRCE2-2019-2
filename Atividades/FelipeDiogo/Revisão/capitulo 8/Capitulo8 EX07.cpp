/**********************************************************
- Autor:     Felipe Diogo e Letiele
- Descri��o: DO WHILE
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    double inumero = 0;
    double ivalor = 0;
    double dmedia = 0;
    double x = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    do
        // Dados para serem inseridos
    {

        cout << "Digite um n�mero inteiro , ou zero para calcular a m�dia dos valores j� digitados" << endl;
        cin >> inumero;


        ivalor++;

        x = x + inumero;



    }

        while (inumero != 0);

        dmedia = x / (ivalor - 1 );

        cout << "a m�dia � de " << dmedia <<  endl;



    return 0;
}
