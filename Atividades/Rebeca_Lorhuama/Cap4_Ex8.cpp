/**********************************************************
- Autor:     Rebeca Lorhuama de Castro Saraiva
- Descri��o: Reajuste Salarial
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    double dSalario = 0;
    double dReajuste = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "REAJUSTE SALARIAL" << endl << endl;

    cout << "Informe o valor do seu sal�rio: R$ ";
    cin >> dSalario;

    if (dSalario <= 300)
    {
        dReajuste = dSalario + (0.35 * dSalario);

        cout << "\nO seu sal�rio ser� de: R$ " << dReajuste << endl;
    }

    else
    {
        dReajuste = dSalario + (0.15 * dSalario);

        cout << "\nO seu sal�rio ser� de: R$ " << dReajuste << endl;
    }

    return 0;
}
