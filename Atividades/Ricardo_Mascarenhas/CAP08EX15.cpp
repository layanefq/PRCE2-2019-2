/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descri��o: Fun��o
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;




void PouI (int a[15]);

int main()
{
    //Declara��o de vari�veis
    int iValor[15];


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    for (int i =0 ; i<15 ; i++)
    {
     cout << "Digite 15 n�meros: " ;
     cin >> iValor[i] ;
    }

PouI (iValor) ;

    return 0;
}






void PouI (int a[15])
{
    int p = 0;

     for (int i =0 ; i<15 ; i++)
    {
    if ( a[i] % 2 == 0 )
    {
        p++;
    }

    }


        cout << " Dos n�meors digitados, " << p << " s�o pares. "<< endl ;



}
