/**********************************************************
- Autor:     J�ssica Assis
- Descri��o: Revis�o - Estrutura de Repeti��o EX 6 CAP 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    char iOp=0;
    int iTr=0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Ol� seja bem vindo ao nosso sistema\n";

  do
    {

    cout << "Escolha qual Transa��o ir� realizar\n V- � vista\n P - � prazo";
    cin >> iTr;

    switch (iTr)
    {
    case 'V':
    case 'v':
        iOp++;
        break;

    case 'P':
    case 'p':
        iOp++;
        break;

    default:
        cout << "Inv�lido";
        break;
    }

    }
while (iTr <= 15);
    return 0;
}
