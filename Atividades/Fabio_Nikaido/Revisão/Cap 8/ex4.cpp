/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descri��o: Lista 8 - Exerc�cio 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int volume(float fRaio)
{
    return ((fRaio*fRaio*fRaio)*4)/3;
}


int main()
{

    //Declara��o de vari�veis

    float fRaio1 = 0;
    float fRaio2 = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite o raio da esfera: ";
    cin >> fRaio1;

    fRaio2 = volume(fRaio1);

    cout << "O volume da esfera �: " << fRaio2 << endl;

    return 1;
}

