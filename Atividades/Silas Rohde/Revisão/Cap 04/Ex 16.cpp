/**********************************************************
- Autor:     Silas Barboza Rohde
- Descri��o: Exerc�cio 16 - Cap. 04
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

// prot�ripo da fun��o
float fPreco = 0;


int main()
{
    setlocale(LC_ALL,"");
    system("color F1");


cout << "Informe o pre�o do produto: ";
cin >> fPreco;

if (fPreco < 30 && fPreco > 0)
{
    cout << "\nProduto fora da promo��o. Sem desconto!" << endl;
}
else if (fPreco > 30 && fPreco < 100)
{
    cout << "\nVoc� ter� 10% de desconto, o novo valor ser� de R$" << fPreco-((fPreco*10)/100) << endl;
}
else if (fPreco > 100)
{
    cout << "\nVoc� ter� 15% de desconto, o novo valor ser� de R$" << fPreco-((fPreco*10)/100) << endl;
}
else
{
    cout << "\nN�mero inv�lido!" << endl;
}


return 0;

}


