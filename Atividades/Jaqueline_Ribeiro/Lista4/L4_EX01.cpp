/**********************************************************
- Autor:     Jaqueline Silva Ribeiro
- Descri��o: Lista 4 - Exerc�cio 01
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
using namespace std;


class Cliente // classe
{
public:
    void setID(int i) // m�todo
    {
        ID = i;
    }

    void setNome(string n) // m�todo
    {
        Nome = n;
    }

    void setIdade(int idd) // m�todo
    {
        Idade = idd;
    }

    void setCidade(string c) //m�todo
    {
        Cidade = c;
    }

    void setEmail (string e) // m�todo
    {
        Email = e;
    }

    void exibirDados() // sa�da (get)
    {

        cout << "\nID: " << ID << endl;
        cout << "Nome: " << Nome << endl;
        cout << "Idade: " << Idade << endl;
        cout << "E-mail: " << Email << endl;
        cout << "Cidade: " << Cidade << endl;

    }


private:
    string Nome; // atributo
    string Cidade; // atributo
    string Email; // atributo
    int Idade; // atributo
    int ID; //atributo
};


int main()
{

    Cliente p1; // vetor objeto

    string sNome;
    string sEmail;
    string sCidade;
    int iIdade;
    int iId;

    string str = "";
    char c = '@';
    int tamanho = 0, f=0;//validar email

    setlocale(LC_ALL,"");
    system("color F1");


        cout << "Informe seu ID: ";
        cin>> iId;
        p1.setID(iId);


        cin.ignore();
        cout << "Informe seu nome: ";
        getline(cin, sNome);
        p1.setNome(sNome);

        cout<<"Informe sua idade: ";
        cin>> iIdade;
        p1.setIdade(iIdade);

        do{
        cin.ignore();
        cout << "Informe seu e-mail: ";
        getline(cin, sEmail);
        str = sEmail;
        size_t found = str.find(c);
        f=found;
        tamanho= str.length();
         if(found < 3)//caso exista menos que 3 caracteres antes do @
        {
          cout<<found<<endl;
          cout<<"E-mail inv�lido. Aperte enter e tente novamente."<<endl;
        }
         else
         {
            if((tamanho-f)<4) // email com menos de 7 caracteres ao todo
            {
                cout<<tamanho-f<<endl;
                cout<<"E-mail inv�lido. Aperte enter e tente novamente."<<endl;
            }
         }
        }while (f<3 || (tamanho-f)<4);
        p1.setEmail(sEmail);

        cout<<"E-mail registrado com sucesso. Aperte enter para continuar";
        cin.ignore();
        cout << "Informe sua cidade: ";
        getline(cin, sCidade);
        p1.setCidade(sCidade);



    cout << "\n\n\nDados do cliente:" << endl;

        p1.exibirDados(); //m�todo sa�da de dados

    return 0;
}
