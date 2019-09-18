/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descri��o: Converter hor�rio em segundos
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int converterSegundos (int iHora, int iMinuto, int iSegundo);

int main()
{
    ///Declara��o de vari�veis
    int iH = 0;
    int iMin = 0;
    int iSeg = 0;
    int iTotalSeg = 0;

    ///Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    ///C�digo do programa
    cout << "Insira as horas: ";
    cin >> iH;

    cout << "Insira os minutos: ";
    cin >> iMin;

    cout << "Insira os segundos: ";
    cin >> iSeg;

    iTotalSeg = converterSegundos(iH, iMin, iSeg);

    cout << endl << iH << "h, " << iMin << "min e " << iSeg << "s correspondem a " << iTotalSeg << " segundos\n";

    return 0;
}

int converterSegundos (int iHora, int iMinuto, int iSegundo)
{
    int iSegTotal = 0;

    iSegTotal = (iHora * 3600) + (iMinuto * 60) + iSegundo;

    return iSegTotal;
}
