/**********************************************************
- Autor:     Ricardo Mascraenhas
- Descri��o: vetor
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int iV[5] ;
    int iP = 0 ;
    int iI = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");


    //C�digo do programa

    cout << "Informe seis n�meros: " << endl;
    cin >> iV[0] >> iV[1] >> iV[2] >> iV[3] >> iV[4]   ;



    if (iV[0] % 2 == 0)
    {
        iP++;
        cout << iV[0] << " � par. " << endl;
    }
    else
    {
        iI++;
        cout << iV[0] << " � �mpar. " << endl;
    }








    if (iV[1] % 2 == 0)
    {
        iP++;
        cout << iV[1] << " � par. " << endl;
    }
    else
    {
        iI++;
        cout << iV[1] << " � �mpar. " << endl;
    }





        if (iV[2] % 2 == 0)
    {
        iP++;
        cout << iV[2] <<  " � par. " << endl;
    }
    else
    {
        iI++;
        cout << iV[2] << " � �mpar. " << endl;
    }








    if (iV[3] % 2 == 0)
    {
        iP++;
        cout << iV[3] << " � par. " << endl;
    }
    else
    {
        iI++;
        cout << iV[3] << " � �mpar. " << endl;
    }








    if (iV[4] % 2 == 0)
    {
        iP++;
        cout << iV[4] << " � par. " << endl;
    }
    else
    {
        iI++;
        cout << iV[4] << " � �mpar. " << endl;
    }










    cout << endl ;

    cout << "Foram digitados " << iP << " n�meros pares. " << endl ;

    cout << endl ;

    cout << "Foram digitados " << iI << " n�meros �mpares. " << endl ;



    return 0;


}
