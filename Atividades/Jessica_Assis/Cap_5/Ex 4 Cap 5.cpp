/**********************************************************
- Autor:     J�ssica Assis
- Descri��o: Revis�o - Estrutura de Repeti��o EX 4 CAP 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int iCont = 0, iNum = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite o valor desejado: ";
    cin >> iNum;

    while (iCont <= 10)
    {

        cout << iCont*iNum << endl ;
        iCont++;
    }

    return 0;
}
