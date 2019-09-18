/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descri��o:
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>

using namespace std;

struct acidentesTransito
{
    string sEstado[15];
    float fNumVeiculos[15];
    int fNumAcidentes[15];
};

int main()
{
    ///Declara��o de vari�veis
    acidentesTransito ano2012;
    int iMaiorIndice = 0;
    string sEstadoMaiorIndice;
    int iMenorIndice = 0;
    string sEstadoMenorIndice;
    float fPercentVeiculos = 0;
    float fMedAcidentes = 0;
    int iTotalVeiculos = 0;
    int iQtdRegistros = 0;
    int i = 0;

    ///Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    ///C�digo do programa
    cout << "Informe a quantidade de registros que ser�o cadastrados (max. 15): ";
    cin >> iQtdRegistros;
    cout << endl;

    cout << "Informe o nome do estado: ";
    cin >> ano2012.sEstado[0];

    cout << "Informe o n�mero de ve�culos que circularam nesse estado em 2012: ";
    cin >> ano2012.fNumVeiculos[0];

    cout << "Informe o n�mero de acidentes de tr�nsito em 2012: ";
    cin >> ano2012.fNumAcidentes[0];

    iTotalVeiculos += ano2012.fNumVeiculos[0];

    iMaiorIndice = ano2012.fNumAcidentes[0];
    sEstadoMaiorIndice = ano2012.sEstado[0];

    iMenorIndice = ano2012.fNumAcidentes[0];
    sEstadoMenorIndice = ano2012.sEstado[0];

    cout << endl;

    for (i = 1; i < iQtdRegistros; i++)
    {
        cout << "Informe o nome do estado: ";
        cin >> ano2012.sEstado[i];

        cout << "Informe o n�mero de ve�culos que circularam nesse estado em 2012: ";
        cin >> ano2012.fNumVeiculos[i];

        cout << "Informe o n�mero de acidentes de tr�nsito em 2012: ";
        cin >> ano2012.fNumAcidentes[i];

        iTotalVeiculos += ano2012.fNumVeiculos[i];

        if (ano2012.fNumAcidentes[i] > iMaiorIndice)
        {
            iMaiorIndice = ano2012.fNumAcidentes[i];
            sEstadoMaiorIndice = ano2012.sEstado[i];
        }

        if (ano2012.fNumAcidentes[i] < iMenorIndice)
        {
            iMenorIndice = ano2012.fNumAcidentes[i];
            sEstadoMenorIndice = ano2012.sEstado[i];
        }

        cout << endl;
    }

    cout << "\nO maior �ndice de acidentes de tr�nsito foi de " << iMaiorIndice << " acidentes, que ocorreu no estado " << sEstadoMaiorIndice << "\n\n";

    for (i = 0; i < iQtdRegistros; i++)
    {
        fPercentVeiculos = (ano2012.fNumVeiculos[i] * 100) / iTotalVeiculos;

        fMedAcidentes = (ano2012.fNumAcidentes[i]) / (ano2012.fNumVeiculos[i]);

        cout << "O percentual de ve�culos no estado " << ano2012.sEstado[i] << " � de " << fPercentVeiculos << "%\n";
        cout << "A m�dia de acidentes no estado " << ano2012.sEstado[i] << " � de " << fMedAcidentes << " acidentes para cada ve�culo que circulou no estado\n\n";
    }

    return 0;
}
