/**********************************************************
- Autor:     Silas Barboza Rohde
- Descri��o: Exerc�cio 8 - Cap. 04
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

// prot�ripo da fun��o
float fSalario =0;


int main()
{
    setlocale(LC_ALL,"");
    system("color F1");


cout << "Informe seu sal�rio: ";
cin >> fSalario;

if (fSalario > 300)
{
    cout << "\nVoc� ter� um almento de 15% e seu novo sal�rio ser� de: R$" << fSalario+((fSalario*15)/100) << endl;
}
else
{
    cout << "\nVoc� ter� um almento de 35% e seu novo sal�rio ser� de: R$" << fSalario+((fSalario*35)/100) << endl;
}

return 0;

}


