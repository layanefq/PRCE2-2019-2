/**********************************************************
- Autor:     Jaqueline Silva Ribeiro
- Descri��o: Lista 2 - Exerc�cio 09
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
using namespace std;


class Estoque // classe
{
public:
    void setNome(string n) // m�todo
    {
        Nome = n;
    }

    void setQuantidade(int q) //m�todo
    {
        Quantidade = q;
    }

    void setValor (float v) // m�todo
    {
        Valor = v;
    }

    void exibirDados() // sa�da (get)
    {

        cout << "\nNome: " << Nome << endl;
        cout << "Quantidade: " << Quantidade << endl;
        cout << "Valor: " << Valor << endl;

    }


private:
    string Nome; // atributo
    int Quantidade; // atributo
    float Valor; // atributo
};


int main()
{
    int i ;

    Estoque p1[5]; // vetor objeto

    string sNome;
    int iQuant;
    float fVal;

    setlocale(LC_ALL,"");
    system("color F1");

    for (i = 0; i < 5; i++)
    {
        cin.ignore();

        cout << "Informe o nome do produto: ";
        getline(cin, sNome);
        p1[i].setNome(sNome);

        cout << "Informe a quantidade: ";
        cin >> iQuant;
        p1[i].setQuantidade(iQuant);

        cout<<"Informe o valor: ";
        cin>> fVal;
        p1[i].setValor(fVal);
    }


    cout << "\n\n\nDados dos produtos:" << endl;
    for(i=0; i<5; i++)
    {
        p1[i].exibirDados(); //m�todo sa�da de dados
    }



    return 0;
}
