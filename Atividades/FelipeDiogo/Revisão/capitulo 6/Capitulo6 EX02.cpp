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
    int vetor[6];
    int i = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");



    cout << "digite o primeiro n�mero do vetor" << endl;
    cin >> vetor[0] ;
    cout << "digite o segundo n�mero do vetor" << endl;
    cin >> vetor[1] ;
    cout << "digite o terceiro n�mero do vetor" << endl;
    cin >> vetor[2] ;
    cout << "digite o quarto n�mero do vetor" << endl;
    cin >> vetor[3] ;
    cout << "digite o quinto n�mero do vetor" << endl;
    cin >> vetor[4] ;
    cout << "digite o sexto n�mero do vetor" << endl;
    cin >> vetor[5] ;
    cout << "digite o setimo n�mero do vetor" << endl;
    cin >> vetor[6] ;


    cout << "\nn�meros multiplos de 2:" << endl;

if( (vetor[0]% 2) == 0)
{
 cout << vetor[0] << endl;
}

if( (vetor[1]% 2) == 0)
{
 cout << vetor[1] << endl;
}

if( (vetor[2]% 2) == 0)
{
 cout << vetor[2] << endl;
}

if( (vetor[3]% 2) == 0)
{
 cout << vetor[3] << endl;
}

if( (vetor[4]% 2) == 0)
{
 cout << vetor[4] << endl;
}

if( (vetor[5]% 2) == 0)
{
 cout << vetor[5] << endl;
}

if( (vetor[6]% 2) == 0)
{
 cout << vetor[6] << endl;
}

cout << "\nn�meros multiplos de 3:" << endl;

if( (vetor[0]% 3) == 0)
{
 cout << vetor[0] << endl;
}

if( (vetor[1]% 3) == 0)
{
 cout << vetor[1] << endl;
}

if( (vetor[2]% 3) == 0)
{
 cout << vetor[2] << endl;
}

if( (vetor[3]% 3) == 0)
{
 cout << vetor[3] << endl;
}

if( (vetor[4]% 3) == 0)
{
 cout << vetor[4] << endl;
}

if( (vetor[5]% 3) == 0)
{
 cout << vetor[5] << endl;
}

if( (vetor[6]% 3) == 0)
{
 cout << vetor[6] << endl;
}

cout << "\nn�meros multiplos de 2 e 3:" << endl;

if( (vetor[0]% 3) == 0 && (vetor[0]% 2) == 0)
{
 cout << vetor[0] << endl;
}

if( (vetor[1]% 3) == 0 && (vetor[1]% 2) == 0)
{
 cout << vetor[1] << endl;
}

if( (vetor[2]% 3) == 0 && (vetor[2]% 2) == 0)
{
 cout << vetor[2] << endl;
}

if( (vetor[3]% 3) == 0 && (vetor[3]% 2) == 0 )
{
 cout << vetor[3] << endl;
}

if( (vetor[4]% 3) == 0 && (vetor[4]% 2) == 0 )
{
 cout << vetor[4] << endl;
}

if( (vetor[5]% 3) == 0 && (vetor[5]% 2) == 0 )
{
 cout << vetor[5] << endl;
}

if( (vetor[6]% 3) == 0 && (vetor[6]% 2) == 0)
{
 cout << vetor[6] << endl;
}




}
