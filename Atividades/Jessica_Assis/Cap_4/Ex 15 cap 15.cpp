/**********************************************************
- Autor:     J�ssica Assis
- Descri��o: Revis�o: Estrutura de decis�o - Ex 15, cap 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int  iValor = 0;
    char iOp = 0 ; // a = Poupan�a b= Renda fixa


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Escolha o tipo de investimento: \na-Poupan�a\nb-Fundos de Renda Fixa\n\n";
    cin >> iOp;

    switch (iOp)
    {
    case 'a':
    case 'A':

        cout << "Insira o valor que ser� investido: ";
        cin >> iValor;
        cout << "\nNesse m�s o seu rendimento ser� de: " << iValor * 1.03 << endl;
        break ;


    case 'b':
    case 'B':

        cout << "Insira o valor que ser� investido: ";
        cin >> iValor;
        cout << "\nNesse m�s o seu rendimento ser� de: " << iValor * 1.04 << endl;
        break;

    default:
        break;
    }

}
