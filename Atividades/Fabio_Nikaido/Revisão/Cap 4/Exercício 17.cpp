/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descri��o: Lista 4 - Exerc�cio 17
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int senha;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite a senha: ";
    cin >> senha;

    if(senha == 4531)
    {
        cout << "Senha Correta" << endl;
        cout << "Permiss�o Concedida";
    }
    else
    {
        cout << "Senha Incorreta" << endl;
        cout << "Permiss�o Negada";
    }


    return 1;
}
