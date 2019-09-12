/**********************************************************
- Autor:     Silas Barboza Rohde
- Descri��o: Lista 2 - Exerc�cio 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;


class Produto
{

public:
    double setPeso (double pe)
    {
        Peso = pe;
    }
    double setPreco (double pr)
    {
        Preco = pr;
    }
    double getPeso()
    {
        return Peso;
    }
    double getPreco()
    {
        return Preco;
    }


private:

    double Peso;
    double Preco;

};

int main()
{
    Produto p1;

    double dPeso;
    double dPreco;

    setlocale(LC_ALL,"");
    system("color F1");


    cout << "\nInforme o peso do produto:";
    cin >> dPeso;

    cout << "\nInforme o pre�o do produto:";
    cin >> dPreco;

    if(dPeso <= 0 || dPreco <= 0)
    {
        cout << "\nValor incorreto!" << endl;
    }
    else
    {
        cout << "\n Dados do produto:" << endl;
        cout << "- Peso:" << dPeso << endl;
        cout << "- Pre�o: R$" << dPreco << endl;
        cout << "- Valor: R$" << dPeso * dPreco << endl;
    }

}
