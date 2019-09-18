/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descri��o: Volume esfera
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int volumeEsfera (int iRaio);

int main()
{
    ///Declara��o de vari�veis
    int iRaioE = 0;
    int iVolumeE =0;

    ///Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    ///C�digo do programa
    cout << "Insira o valor do raio da esfera: ";
    cin >> iRaioE;

    iVolumeE = volumeEsfera(iRaioE);

    cout << "\nVolume de uma esfera de raio " << iRaioE << ": " << iVolumeE << endl;

    return 0;
}

int volumeEsfera (int iRaio)
{
    int iVolume = 0;

    iVolume = (4/3) * (iRaio * iRaio * iRaio);

    return iVolume;
}
