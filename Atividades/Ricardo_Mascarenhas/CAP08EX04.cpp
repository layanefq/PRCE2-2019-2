/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descri��o: Volume de uma esfera
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;



void Volume (float a);


int main()
{
    //Declara��o de vari�veis
    float fRaio =0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "CALCULANDO O VOLUME DE UMA ESFERA" << endl ;

    cout << endl ;

    cout << "Informe o raio da esfera: " << endl ;
    cin >> fRaio ;

    Volume (fRaio);


    return 0;
}

void Volume (float a)
{
    float fV = 0;

    fV = (4*(a*a*a))/3 ;

    cout << "O volume de uma esfera com raio " << a << " � de " << fV << " unidades (l/ml...).  " << endl ;
}



