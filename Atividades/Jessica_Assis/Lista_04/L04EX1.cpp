/**********************************************************
- Autor:     J�ssica Assis
- Descri��o: Exercicio 1  L2- ORIENTA��O A OBJETO
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
using namespace std;


class Cadastro // Classe
{
public:

    Cadastro()
    {
        Id = 0;
        Idade = 0;
        Nome = "";
        Email = "";
        Cidade = "";
    }

~ Cadastro()
{

}

    void setId (double I) // m�todo setNome
    {
        Id = I;
    }

    void setNome (string n) // m�todo setNome
    {
        Nome = n;
    }

    void setIdade (double Idd) // m�todo setQuantidade
    {
       Idade= Idd ;
    }
    void setEmail (string e) // m�todo setNome
    {
        Email = e;
    }

    void setCidade (string c) // m�todo setNome
    {
        Cidade = c;
    }

    double getId() // m�todo getNome
    {
        return Id;
    }
    string getNome() // m�todo getNome
    {
        return Nome;
    }

    double getIdade() // m�todo Quantidade
    {

        return Idade;
    }

    string getEmail() // m�todo getNome
    {
        return Email;
    }
    string getCidade() // m�todo getNome
    {
        return Cidade;
    }


private:
    double Id;
    string Nome; // atributo Nome
    double Idade; // atributo iDADE
    string Email;
    string Cidade;

};


int main()
{

    Cadastro c1; // objeto p1 do tipo Pessoa
    string str = " ";
    char c = '@';
    int f = 0, i = 0;
    double dId = 0;
    string sNome; // atributo Nome
    double dIdade=0; // atributo iDADE
    string sEmail;
    string sCidade;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe seu ID: "<< endl;
    cin >> dId;
    c1.setId (dId);

    cin.ignore();
    cout << "Informe seu Nome: " << endl;
    getline (cin, sNome);
    c1.setNome(sNome);

    cout << "Informe sua Idade " << endl;
    cin >> dIdade;
    c1.setIdade (dIdade);

   do
   {
    cin.ignore();
    cout << "Informe seu Email: " << endl;
    getline (cin, sEmail);
    str = sEmail;
    size_t found = str.find (c);
    f = found;

    if (f < 3)
    {
        cout << "Inv�lido, Digite enter e tente novamente"<<endl;
    }
    else
    { i = str.length();
        if ((i-f) < 4)
        {
            cout << "Inv�lido, Digite enter e tente novamente"<<endl;
        }
    }

   } while (f < 3 || (i-f) < 4);

    c1.setEmail(sEmail);

    cout << "Informe sua cidade: " << endl;
    getline (cin, sCidade);
    c1.setCidade (sCidade);

    cout << "\nID: " << c1.getId ()<< endl;
    cout << "Nome: " << c1.getNome ()<< endl;
    cout << "Idade: " << c1.getIdade ()<< endl;
    cout << "Email: " << c1.getEmail ()<< endl;
    cout << "Cidade: " << c1.getCidade ()<< endl;



    return 0;
}
