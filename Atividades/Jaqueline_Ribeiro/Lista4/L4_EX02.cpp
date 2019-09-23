/**********************************************************
- Autor:     Jaqueline Silva Ribeiro
- Descri��o: Lista 4 - Exerc�cio 01
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
using namespace std;


class Filme // classe
{
public:
    void setID(int id) // m�todo
    {
        ID = id;
    }

    void setNome(string n) // m�todo
    {
        Nome = n;
    }

    void setAno(int a) // m�todo
    {
        Ano = a;
    }

    void exibirDados() // sa�da (get)
    {

        cout << "\nID: " << ID << endl;
        cout << "Nome: " << Nome << endl;
        cout << "Ano de lan�amento: " << Ano << endl;

    }


private:
    string Nome; // atributo
    int Ano; // atributo
    int ID; //atributo
};


int main()
{
    int i=0;
    Filme p[2]; // vetor objeto

    string sNome = "";
    int iAno = 0;
    int iId = 0;

    int f1=0, f2=0;


    setlocale(LC_ALL,"");
    system("color F1");
for(i=0; i<2; i++)
{


    do
    {
        cout << "Informe o ID do filme: ";
        cin>> iId;

        if(i==0)
        {
            f1=iId;
        }
        else
        {
            f2=iId;
            if(f1 == f2)
            {
                cout<<"ID inv�lido"<<endl;
            }
        }
    }while (f1 == f2);
    p[i].setID(iId);


    cin.ignore();
    cout << "Informe o nome do filme: ";
    getline(cin, sNome);
    p[i].setNome(sNome);

    do{
    cout<<"Informe o ano de lan�amento do filme: ";
    cin>> iAno;
    if(iAno>2019){
        cout<<"Ano inv�lido"<<endl;
    }
    }while (iAno>2019);
    p[i].setAno(iAno);
}

    cout << "\n\n\nDados dos filmes:" << endl;
    for(i=0; i<2; i++)
    {
         p[i].exibirDados(); //m�todo sa�da de dados
    }

    return 0;
}
