/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descri��o: Somat�ria
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int somatoria (int iNum);

int main()
{
    ///Declara��o de vari�veis
    int iValorN = 0;
    int iResult = 0;

    ///Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    ///C�digo do programa
    cout << "Insira o n�mero para a somat�ria: ";
    cin >> iValorN;

    iResult = somatoria(iValorN);

    cout << "\nSomat�ria dos n�meros inteiros entre 1 e " << iValorN << ": " << iResult << endl;

    return 0;
}

int somatoria (int iNum)
{
    int iSoma = 0;
    int iCont = 0;

    while (iCont <= iNum)
    {
        iSoma += iCont;

        iCont++;
    }

    return iSoma;
}
