/**********************************************************
- Autor:     Vinicius Soares
- Descri��o: Lista 2 - Orienta��o a objeto - Exercicio 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;


struct Estoque
{
public:
    void setNome () //m�todo setNome
    {
        cout << "Informe o nome do produto: ";
        getline (cin, Nome); // entrada de string com espa�os
    }
    void setQuantidade () //m�todo setQuantidade
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


    void setValor () //m�todo setValor
    {
        do
        {
        cout << "Informe o valor: ";
        cin >> Valor;

        if (Valor < 0)
            {
                cout << "Valor inv�lido!" << endl;
            }
        } while (Valor < 0);
    }
    void getExibirdados () //m�todo para exibir os dados
    {
        cout << "\n\n\nInforma��es do produto:" << endl;
        cout << "Nome: " << Nome << endl;
        cout << "Quantidade: " << Quantidade << endl;
        cout << "Valor: " << Valor << endl;
    }


    private:
    string Nome; //atributo nome
    float Quantidade; //atributo quantidade
    float Valor; //atributo valor
};


int main()
{
    Estoque e1; // objeto e1 do tipo Estoque

    setlocale(LC_ALL,"");
    system("color F1");

    e1.setNome(); // executando o m�todo setNome

    e1.setQuantidade(); // executando o m�todo setQuantidade

    e1.setValor(); // executando o m�todo setValor

    e1.getExibirdados(); // executando o m�todo getExibirDados
    return 0;
}
