/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descri��o: M�dia de nota e sistema de aprova��o
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>

using namespace std;

class Estoque
{
public:
    void setNome()
    {
        cout << "\nInsira o nome do produto: ";
        getline(cin, Nome);
    }

    void setQuantidade()
    {
        do
        {
            cout << "Insira a quantidade do produto: ";
            cin >> Quantidade;

            if (Quantidade <= 0)
            {
                cout << "\nValor Inv�lido!";
            }
        }
        while (Quantidade <= 0);
    }

    void setValor()
    {
        do
        {
            cout << "Insira o valor do produto: R$";
            cin >> Valor;

            if (Valor <= 0)
            {
                cout << "\nValor Inv�lido!";
            }
        }
        while (Valor <= 0);
    }

    void getNome()
    {
        cout << "\nNome do produto: " << Nome << endl;
    }

    void getQuantidade()
    {
        cout << "Quantidade: " << Quantidade << endl;
    }

    void getValor()
    {
        cout << "Valor: " << Valor << endl;
    }

private:
    string Nome;
    int Quantidade;
    float Valor;
};

int main()
{
    ///Declara��o de vari�veis
    Estoque prod[2];
    int i = 0;

    ///Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    ///C�digo do programa
    for (i = 0; i < 2; i++)
    {
        if (i != 0)
        {
            cin.ignore();
        }

        prod[i].setNome();
        prod[i].setQuantidade();
        prod[i].setValor();
    }

    cout << "\nINFORMA��ES DO ESTOQUE";
    for (i = 0; i < 2; i++)
    {
        prod[i].getNome();
        prod[i].getQuantidade();
        prod[i].getValor();
    }

    return 0;
}
