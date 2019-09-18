/**********************************************************
- Autor:     Rodrigo Braz de Azevedo
- Descri��o:
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
using namespace std;


class Estoque // classe Pessoa
{
public:
    Estoque()
    {
        Nome = "";
        Quantidade = 0;
        Valor = 0;
    }

    ~Estoque()
    {

    }

    void setNome() // m�todo setNome
    {
        cout << "Informe o nome do produto: ";
        cin.clear();
        cin.sync();
        getline (cin, Nome); // entrada de string com espa�os
    }

    void setQuantidade() // m�todo setQuantidade
    {
        do
        {
            cout << "Informe a quantidade: ";
            cin >> Quantidade;

            if (Quantidade <= 0)
            {
                cout << "Valor inv�lido!" << endl;
            }
        } while (Quantidade <= 0);

    }

    void setValor() // m�todo setValor
    {
        do
        {
            cout << "Informe o valor: ";
            cin >> Valor;

            if (Valor < 0)
            {
                cout << "Valor inv�lido" << endl;
            }
        } while (Valor < 0);
    }

    void exibirDados() // m�todo exibirDados
    {
        cout << "\n\n\nDados do produto:" << endl;

        cout << "Nome: " << Nome << endl;
        cout << "Quantidade: " << Quantidade << endl;
        cout << "Valor: " << Valor << endl;
    }

private:
    string Nome; // atributo Nome
    double Quantidade; // atributo Quantidade
    float Valor; // atributo Valor
};


int main()
{
    Estoque e[5]; // objeto e1 do tipo Estoque

    setlocale(LC_ALL,"");
    system("color F1");

    for (int i = 0; i < 5; i++)
    {
    e[i].setNome(); // executando o m�todo setNome

    e[i].setQuantidade(); // executando o m�todo setQuantidade

    e[i].setValor(); // executando o m�todo setValor
    }

    for (int i = 0; i < 5; i++)
    {
    e[i].exibirDados();
    }

    return 0;
}
