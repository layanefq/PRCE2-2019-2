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
    void setNome(string n) // m�todo setNome
    {
        Nome = n;
    }

    void setAltura(float a) // m�todo setAltura
    {
        Altura = a;
    }

    string getNome() // m�todo getNome
    {
        return Nome;
    }

    double getAltura() // m�todo Altura
    {
        return Altura;
    }

private:
    string Nome; // atributo Nome
    double Altura; // atributo Altura
};


int main()
{
    Pessoa p[5]; // objeto p1 do tipo Pessoa

    string sNome;
    double dAltura = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe seu nome e sobrenome: ";
    getline (cin, sNome); // entrada de string com espa�os
    //cin >> sNome;
    p1.setNome(sNome);

    cout << "Informe a altura: ";
    cin >> dAltura;
    p1.setAltura(dAltura);


    cout << "\n\n\nDados da pessoa:" << endl;

    cout << "Nome: " << p1.getNome() << endl;
    cout << "Altura: " << p1.getAltura() << endl;

    return 0;
}
