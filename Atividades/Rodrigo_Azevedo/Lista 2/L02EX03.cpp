/**********************************************************
- Autor:     Lineu Lima
- Descri��o: Compara��o entre Estruturas e Classes
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
using namespace std;


class Pessoa // classe Pessoa
{
public:
    void setNome() // m�todo setNome
    {
        cout << "Informe seu nome e sobrenome: ";
        getline (cin, Nome); // entrada de string com espa�os
    }

    void setAltura() // m�todo setAltura
    {
        do
        {
            cout << "Informe a altura: ";
            cin >> Altura;

            if (Altura <= 0)
            {
                cout << "Valor inv�lido!" << endl;
            }
        } while (Altura <= 0);

    }

    void exibirDados() // m�todo exibirDados
    {
        cout << "\n\n\nDados da pessoa:" << endl;

        cout << "Nome: " << Nome << endl;
        cout << "Altura: " << Altura << endl;
    }

private:
    string Nome; // atributo Nome
    double Altura; // atributo Altura
};


int main()
{
    Pessoa p1; // objeto p1 do tipo Pessoa

    setlocale(LC_ALL,"");
    system("color F1");

    p1.setNome(); // executando o m�todo setNome

    p1.setAltura(); // executando o m�todo setAltura

    p1.exibirDados(); // executando o m�todo exibirDados

    return 0;
}
