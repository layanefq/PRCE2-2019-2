/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descri��o:
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include "Cadastro.h"

using namespace std;

int main()
{
    ///Declara��o de vari�veis
    Cadastro filme;
    int iAnoLanc = 0;
    string sNome = "";
    int iID = 0;

    ///Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    ///C�digo do programa
    cout << "CADASTRO DOS FILMES: " << endl;

    cout << "Insira o ID do filme: ";
    cin >> iID;
    filme.setID(iID);

    cin.ignore();
    cout << "Insira o nome do filme: ";
    getline(cin, sNome);
    filme.setNome(sNome);

    cout << "Insira o ano em que foi lan�ado: ";
    cin >> iAnoLanc;
    filme.setAnoLancamento(iAnoLanc);

    cout << "\n\nFICHA DOS FILMES: " << endl;
    cout << "\nID: " << filme.getID() << endl;
    cout << "Nome: " << filme.getNome() << endl;
    cout << "Ano de lan�amento: " << filme.getAnoLancamento() << endl;

    return 0;
}
