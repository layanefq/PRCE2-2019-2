/**********************************************************
- Autor:     J�ssica Assis
- Descri��o: Revis�o: Estrutura de decis�o - Ex 8, cap 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int iSal = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    cout << " Insira seu Sal�rio: ";
    cin >> iSal;

    if (iSal <= 300 && iSal>0)
    {
        cout << "Seu Sal�rio Reajustado �: " << iSal * 1.35 ;
    }
    else if (iSal > 300 && iSal > 0)

    {
        cout << "Seu Sal�rio Reajustado �: "<< iSal* 1.15;
    }

    else;

}
