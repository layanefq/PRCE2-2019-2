#include "Filmes.h"

Filmes::Filmes()
{
    //ctor
    ID = 0;
    Ano = 0;
    sNome = "-";
}

Filmes::~Filmes()
{
    //dtor
}

void Filmes::setNome()
{
    string x;
    cout << "Inserir nome do filme: ";
    getline (cin, x);
    sNome = x;
}

void Filmes::setID()
{
    int y;
    cout << "Inserir ID: ";
    cin >> y;
    ID = y;
}

void Filmes::setAno()
{
    int z;
    bool cont = true;
    cout << "Inserir ano de lan�amento: ";
   while (cont) {
    cin >> z;
        if (z > 2019) {
            cout << "Data inv�lida! Favor inserir novamente: " << endl;
        }
        else
        {
            cont = false;
        }
   }
    Ano = z;
}
int Filmes::getID()
{
    cout << endl << "ID: " << ID;
}
int Filmes::getAno()
{
    cout << endl << "Ano de lan�amento: " << Ano;
}
string Filmes::getNome()
{
    cout << endl << "Nome do filme: " << sNome;
}
