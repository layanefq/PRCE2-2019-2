/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descri��o: Tabuada
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;






int main()
{
    //Declara��o de vari�veis
    int a = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "BEM-VINDO AO PROGRAMA DE TABUADA" << endl ;

    cout << endl ;

    cout << "Informe o n�mero da tabuada desejada: " << endl ;
    cin >> a ;

     cout << " RESULTADOS " <<  endl ;

    cout << endl ;

    cout << a << " x 0 = 0 " << endl ;
    cout << a << " x 1 = " << a << endl ;
    cout << a << " x 2 = " << a*2 << endl ;
    cout << a << " x 3 = " << a*3 << endl ;
    cout << a << " x 4 = " << a*4 << endl ;
    cout << a << " x 5 = " << a*5 << endl ;
    cout << a << " x 6 = " << a*6 << endl ;
    cout << a << " x 7 = " << a*7 << endl ;
    cout << a << " x 8 = " << a*8 << endl ;
    cout << a << " x 9 = " << a*9 << endl ;
    cout << a << " x 10 = " << a*10 << endl ;







    return 0;
}




