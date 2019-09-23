/**********************************************************
- Autor:     J�ssica Assis
- Descri��o: Exercicio 2  L2- ORIENTA��O A OBJETO
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
using namespace std;


class Filme // Classe
{
public:

    Filme()
    {
        Id = 0;
        Lanca = 0;
        Nome = "";
    }

    ~ Filme()
    {

    }

    void setId (int I) // m�todo setId
    {
        Id = I;
    }

    void setNome (string n) // m�todo setNome
    {
        Nome = n;
    }

    void setLanca (int ano) // m�todo setLan�amento
    {
        Lanca = ano ;
    }


    int getId() // m�todo getId
    {
        return Id;
    }
    string getNome() // m�todo getNome
    {
        return Nome;
    }

    int getLanca() // m�todo lan�amento
    {

        return Lanca;
    }

private:
    int Id; // atributo Id
    string Nome; // atributo Nome
    int Lanca; // atributo Ano


};


int main()
{

    Filme f1[2]; // objeto p1 do tipo Pessoa

    int iId = 0; // atributo ID
    int tCont = 0;
    string sNome; // atributo Nome
    int iAno=0; // atributo Ano
    int iAnoAtual = 2019; //Ano atual
    int iId1 =0 , iId2 = 0;


    setlocale(LC_ALL,"");
    system("color F1");


    for (int i = 0; i < 2; i++)
    {
        do
            {

        cout << "\nInforme o ID do filme: ";
        cin >> iId;

        if (i == 0)
        {
            iId1= iId;
        }

        else
        {
            iId2 = iId;
            {
                if (iId2 == iId1)
                {
                    cout << "Inv�lido";
                }
            }
        }

        }while (iId2 == iId1);
         f1[i].setId (iId);

        cin.ignore();
        cout << "Informe Nome do filme: " ;
        getline (cin, sNome);
        f1[i].setNome(sNome);

    do
        {
        cout << "Informe o ano de lan�amento do filme ";
        cin >> iAno;

          if (iAno < iAnoAtual)
        {
            cout << "V�lido\n";
        }

        else if (iAno > iAnoAtual)
        {
            cout << "Inv�lido\n";
        }

        } while (iAno > iAnoAtual);

        f1[i].setLanca (iAno);
        cin.ignore();

    }

    for (int i = 0; i < 2; i++)
    {
        cout << "\nID: " << f1[i].getId ()<< endl;
        cout << "Nome: " << f1[i].getNome ()<< endl;
        cout << "Ano de Lan�amento: " << f1[i].getLanca ()<< endl;


    }


    return 0;
}
