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


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe um valor " << endl;
    cin >> ivalor;

    if ( ivalor % 2 == 0 )
     {

      cout << "\nn�mero par"  << endl ;

     }
     else
     {

      cout << "\nn�mero �mpar"  << endl ;

     }



    return 0;
}
