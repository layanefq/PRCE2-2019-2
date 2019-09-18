#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>

using namespace std;

class Cliente
{
    public:
        //Construtor e Destrutor
        Cliente();
        ~Cliente();

        //M�todo para setar
        void setID(int);
        void setNome (string);
        void setIdade (int);
        void setEmail (string);
        void setCidade (string);

        //M�todo para get
        int getID();
        string getNome();
        int getIdade();
        string getEmail();
        string getCidade();


    private:
        //Atributos
        int ID;
        string Nome;
        int Idade;
        string Email;
        string Cidade;
};

#endif // CLIENTE_H
