/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descri��o: Arquivos
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{

    setlocale(LC_ALL,"");
    system("color F1");

    fstream CadastroCliente;
    char opc = 's' ;
    string nome;
    string en ;
    int cod;
    string linha;


    CadastroCliente.open("Cadastro.txt",ios::out|ios::app);

    while((opc=='s') or (opc=='S'))
        {
            cout << "CADASTRANDO UM NOVO CLIENTE. " << endl ;
            cout << "Digite o c�digo do cliente: ";
            cin >> cod ;
            cout << "\nDigite o nome do cliente: ";
            cin >> nome ;
            cout << "\nDigite o endere�o do cliente: ";
            cin >> en ;

            cout << "\nDeseja cadastrar um novo cliente? (s/n) " ;
            cin >> opc;

            system("CLS");
        }
        CadastroCliente.close();





        CadastroCliente.open("Cadastro.txt",ios::in);

        cout << "Clientes Cadastrados" << endl;

        if(CadastroCliente.is_open())
        {
            while(getline(CadastroCliente,linha))

            {
                    cout << linha << endl ;
            }

        }
        else  { cout << "N�o foi poss�vel abrir o programa" << endl ;}




    return 0;
}
