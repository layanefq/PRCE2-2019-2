/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descri��o: Lista 4 - Exerc�cio 21
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float preco;
    int codigo;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite o pre�o do produto: ";
    cin >> preco;

    cout << "Digite o c�digo de origem do produto: ";
    cin >> codigo;

    if(codigo == 1)
    {
        cout << "Origem do produto: Sul" << endl;
    }
    else if(codigo == 2)
    {
        cout << "Origem do produto: Norte" << endl;
    }
    else if(codigo == 3)
    {
        cout << "Origem do produto: Leste" << endl;
    }
    else if(codigo == 4)
    {
        cout << "Origem do produto: Oeste" << endl;
    }
    else if(codigo == 5 || codigo == 6)
    {
        cout << "Origem do produto: Nordeste" << endl;
    }
    else if(codigo == 7 || codigo == 8 || codigo == 9)
    {
        cout << "Origem do produto: Sudeste" << endl;
    }
    else if(codigo >= 10 && codigo <= 20)
    {
        cout << "Origem do produto: Centro-Oeste" << endl;
    }
    else if(codigo > 20 && codigo <= 30)
    {
        cout << "Origem do Produto: Nordeste" << endl;
    }


    return 1;
}
