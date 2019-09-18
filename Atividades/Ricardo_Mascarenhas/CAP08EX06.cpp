/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descri��o: Peso ideal
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;



void PesoI (float a, char b);


int main()
{
    //Declara��o de vari�veis
    float fPeso =0;
    char cSexo =0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "CALCULANDO O SEU PESO IDEAL " << endl;

    cout << endl ;

    cout << "Informe a sua altura em Metros: " << endl ;
    cin >> fPeso ;

    cout << "Informe o seu sexo: \n (M) - Masculino \n (F) - Feminino " << endl ;
    cin >> cSexo ;

    PesoI (fPeso,cSexo);


    return 0;
}

void PesoI (float a, char b)
{
    float iPI = 0;

    if (b == 'M' || b == 'm')
    {
        iPI = (72.7 * a)-58;
        cout << "Com a sua altura de " << a << " metros, o seu peso ideal � " << iPI << " Kg. " << endl ;
    }
    else
    {
        iPI = (62.1*a)-44.7;
        cout << "Com a sua altura de " << a << " metros, o seu peso ideal � " << iPI << " Kg. " << endl ;
    }



}
