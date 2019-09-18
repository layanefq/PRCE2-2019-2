/**********************************************************
- Autor:     J�ssica Assis
- Descri��o: Exercicio 10 -   L2 - ORIENTA��O A OBJETO
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
using namespace std;


class Produto // Classe
{
public:
    void setpeso (float pe) // m�todo setNome
    {
        peso = pe;
    }

    void setpreco (float pr) // m�todo setQuantidade
    {
        preco = pr ;
    }

    float getpeso() // m�todo getNome
    {
        return peso;
    }

    float getpreco() // m�todo Quantidade
    {

        return preco;
    }

private:
    float peso; // atributo peso.
    float preco; // atributo pre�o
};


int main()
{
    Produto p1; // objeto p1 do tipo Pessoa

    float fpeso= 0;
    float fpreco= 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe o peso: ";
    cin >> fpeso;
    p1.setpeso(fpeso); // executando o m�todo peso

    cout << "Informe o Pre�o: ";
    cin >> fpreco;
    p1.setpreco(fpreco); // executando o m�todo set pere�o


     cout << "\n\n\nDados do produto:" << endl;
    cout << "Peso: " << p1.getpeso() << endl;
    cout << "pre�o: " << p1.getpreco () << endl;
    cout << "Valor: "<< p1.getpeso()*p1.getpreco ()<< endl;



    return 0;
}
