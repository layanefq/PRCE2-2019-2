/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descri��o: Opera��es
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fNum1 = 0;
    float fNum2 = 0;
    int ii = 0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");


    void Op (float a, float b);



    //C�digo do programa

    cout << "PROGRAMA DE C�LCULOS B�SICOS" << endl ;



    cout << "Digite dois n�meros: " << endl;
    cin >> fNum1 >> fNum2 ;

    Op (fNum1, fNum2);





    return 0;
}


void Op (float a, float b)
{

    int iOp = 0;
    float fResultado = 0;
    float fResultado1 = 0;
    float fResultado2 = 0;
    float fResultado3 = 0;
    float fResultado4 = 0;






    cout << "op��es: \n 1- M�dia entre os n�meros digitados. \n 2- Diferen�a do maior pelo menor. \n 3- Produto entre os n�meros digitados. \n 4- Divis�o do primeiro pelo segundo. " << endl ;
    cin >> iOp ;

    switch (iOp)
    {
    case 1:
         fResultado = (a + b)/2 ;

    cout << "A M�dia entre " << a << " e " << b << " � igual a: " << fResultado << "." ;
    break;

    case 2:
        if ( a > b)
        {
           fResultado1 = (a - b);

            cout << " A diferen�a de " << a << " para " << b << " � igual a: " << fResultado1 << endl ;
        }
        else
        {
           fResultado2 = (b - a);

            cout << " A diferen�a de " << a << " para " << b << " � igual a: " << fResultado2 << endl ;
        }
        break;

    case 3:
       fResultado4 =  (a * b);

        cout << " O produto entre " << a << " e " << b << " � igual a: " << fResultado4 << endl ;
        break;

    case 4:
        if ( b > 0)
        {
           fResultado3 = (a / b);

            cout << " A divis�o entre "  << a << " e " << b << " � igual a: " << fResultado3 << endl ;
        }
        else
        {
            cout << " Opera��o inv�lida, segundo termo deve ser diferente de zero." << endl ;
        }
        break;

    default:
        cout << "C�digo Inv�lido!" << endl ;

    }

}
