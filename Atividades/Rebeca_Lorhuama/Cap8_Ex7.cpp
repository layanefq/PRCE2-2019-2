/**********************************************************
- Autor:     Rebeca Lorhuama de Castro Saraiva
- Descri��o: M�dia de N�meros Positivos
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;


    //Declara��o de Vari�veis
    float fNum = 0;
    float fTotal = 0;
    float fCont = 0;
    void Media();


int main()
{
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "M�DIA DE N�MEROS POSITIVOS" << endl << endl;
    cout << "Para finalizar o programa, basta digitar 0" << endl << endl;

    do
    {
        cout << "Informe um n�mero: ";
        cin >> fNum;

        Media();
    }

    while (fNum > 0);

    cout << "\nA m�dia das idades �:" << fTotal /fCont << endl;

    return 0;
}

void Media ()
{
    if (fNum > 0)
    {
        fTotal = fTotal + fNum;
        fCont = fCont + 1;
    }

    else
    {
        cout << "\nFinalizado." << endl;
    }

    return;
}
