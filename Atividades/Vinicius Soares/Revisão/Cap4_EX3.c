/**********************************************************
- Autor:     Vinicius Soares
- Descri��o: Estrutura de Decis�o - Cap 4 - Ex 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fNum1 = 0;
    float fNum2 = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Informe um n�mero: ";
    cin >> fNum1;

    cout << "Informe outro n�mero: ";
    cin >> fNum2;


    if (fNum1 > fNum2)
    {
        cout << "O maior n�mero �: " << fNum1 << endl;
    }
    if (fNum1 < fNum2)
    {
        cout << "O maior n�mero �: " << fNum2 << endl;
    }

  if (fNum1 == fNum2)
    {
        cout << "O maior n�mero �: " << fNum2 << endl;
    }
    return 0;
}
