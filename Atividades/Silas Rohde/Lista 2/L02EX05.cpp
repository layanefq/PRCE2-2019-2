/**********************************************************
- Autor:     Silas Barboza Rohde
- Descri��o: Lista 2 - Exerc�cio 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;


class Estoque
{

public:
    void setsNome (string sNome);
    {
        Nome = n;
    }
    void setiQuant (int iQuant);
    {
        Quant = q;
    }
    void setdValor (double dValor);
    {
        Valor = v;
    }

private:
    string sNome;
    int iQuant;
    double dValor;

};
