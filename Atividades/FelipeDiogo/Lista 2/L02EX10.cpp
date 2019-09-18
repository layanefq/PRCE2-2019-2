/**********************************************************
- Autor:     Felipe Diogo
- Descri��o: Compara��o entre Estruturas e Classes
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>

using namespace std;


class Estoque
{
public:
    void setPeso()
    {
        cout << "Informe o peso do produto ";
        cin >> Peso ;
    }

    void setPreco()
    {
        cout << "Informe o pre�o do produto ";
        cin >> Preco;

    }

    void getValor()
    {

    Valor = (Preco * Peso);


    }

    void exibirDados()
    {
        cout << "\n\n\nDados do produto:" << endl;

        cout << "Peso: " << Peso << endl;
        cout << "Pre�o: " << Preco << endl;
        cout << "Valor: " << Valor << endl;
    }


private:

float Peso;
float Preco;
float Valor;

};


int main()
{
    Estoque p1;

    setlocale(LC_ALL,"");
    system("color F1");


    p1.setPreco();

    p1.setPeso();

    p1.getValor();

    p1.exibirDados();

    return 0;
}
