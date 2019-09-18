/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descri��o: Lista 2 - Exerc�cio 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string.h>

using namespace std;

class Produto
{
public:
    void setPeso()
    {
        cout << "Digite o peso do produto: ";
        cin >> peso;
    }

    void setPreco()
    {
        cout << "Digite o pre�o do produto: ";
        cin >> preco;
    }

    void ExibirDados()
    {
        cout << "Dados do produto" << endl;
        cout << "Peso: " << peso << endl;
        cout << "Pre�o: " << preco << endl;
        cout << "Valor: " << peso*preco << endl;
    }

private:
    float peso = 0;
    float preco = 0;

};


int main()
{

    //Declara��o de vari�veis

    Produto p;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");


    //C�digo do programa

    p.setPeso();
    p.setPreco();
    p.ExibirDados();

    return 1;
}



