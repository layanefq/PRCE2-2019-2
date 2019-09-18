/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descri��o: Censo caracter�sticas f�sicas
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

struct caractFisicas
{
    char cSexo;
    float fAltura = 0;
    int iIdade = 0;
    char cCorOlhos;
};

int main()
{
    ///Declara��o de vari�veis
    caractFisicas caragua;
    float fSumIdadeOlhosCastAlt = 0;
    int iContIdadeOlhosCastAlt = 0;
    float fMedIdadeOlhosCastAlt = 0;
    int iMaiorIdade = 0;
    int iQtdIndFem = 0;
    int iContHomem = 0;
    float fPercentHomem = 0;
    int i = 0;

    ///Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    ///C�digo do programa
    for (i = 0; i < 4; i++)
    {
        cout << "Insira o sexo (f = feminino / m = masculino): ";
        cin >> caragua.cSexo;

        cout << "Insira a altura: ";
        cin >> caragua.fAltura;

        cout << "Insira a idade: ";
        cin >> caragua.iIdade;

        cout << "Insira a cor dos olhos (c = castanho / v = verde / a = azul): ";
        cin >> caragua.cCorOlhos;

        if ((caragua.cCorOlhos == 'c' || caragua.cCorOlhos == 'C') && caragua.fAltura > 1.60)
        {
            fSumIdadeOlhosCastAlt += caragua.iIdade;
            iContIdadeOlhosCastAlt++;
        }

        if (caragua.iIdade > iMaiorIdade)
        {
            iMaiorIdade = caragua.iIdade;
        }

        if ((caragua.cSexo == 'F' || caragua.cSexo == 'f') && ((caragua.iIdade >= 20 && caragua.iIdade <= 45) || ((caragua.cCorOlhos == 'V' || caragua.cCorOlhos == 'v') && caragua.fAltura < 1.70)))
        {
            iQtdIndFem++;
        }

        if (caragua.cSexo == 'M' || caragua.cSexo == 'm')
        {
            iContHomem++;
        }
        cout << endl;
    }

    fMedIdadeOlhosCastAlt = fSumIdadeOlhosCastAlt / iContIdadeOlhosCastAlt;

    fPercentHomem = (iContHomem * 100) / 4;

    cout << "A m�dia de idade das pessoas com olhos castanhos e altura superior a 1,60 m � de " << fMedIdadeOlhosCastAlt << " anos" << endl;
    cout << "\nA maior idade � de " << iMaiorIdade << " anos" << endl;
    cout << "\nA quantidade de indiv�duos do sexo feminino com idade entre 20 e 45 anos (inclusive) ou que tenham olhos verdes e altura inferior a 1,70 m � de " << iQtdIndFem << " indiv�duos" << endl;
    cout << "\nO percentual de homens � de " << fPercentHomem << "%"  << endl;

    return 0;
}
