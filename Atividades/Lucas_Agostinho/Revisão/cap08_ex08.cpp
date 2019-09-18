/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descri��o: Fatorial
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

double fatorial (double dNumFat);

int main()
{
    ///Declara��o de vari�veis
    double dNum = 0;
    double dFat = 0;

    ///Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    ///C�digo do programa
    cout << "Insira um n�mero para o fatorial: ";
    cin >> dNum;

    dFat = fatorial (dNum);

    cout << "\nO fatorial de " << dNum << " �: " << dFat << endl;

    return 0;
}

double fatorial (double dNumFat)
{
    double i = 0;
    double dFatorial = 1;

    for (i = 1; i <= dNumFat; i++)
    {
        dFatorial *= i;
    }

    return dFatorial;
}
