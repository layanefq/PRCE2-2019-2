/**********************************************************
- Autor:     Felipe Diogo
- Descri��o: La�o de Repeti��o
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int ivalor = 0;
    double dvolume = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe o valor do raio da esfera " << endl;
    cin >> ivalor;

    dvolume =(4 / 3) * (ivalor) * (ivalor) * (ivalor) ;


    cout << "o volume da esfera � " << dvolume << endl ;




    return 0;
}
