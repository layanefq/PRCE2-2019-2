/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descri��o: Maior n�mero
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Insira o primeiro n�mero: ";
    cin >> num1;

    cout << "Insira o segundo n�mero: ";
    cin >> num2;

    cout << "Insira o terceiro n�mero: ";
    cin >> num3;

    cout << endl;
    if (num1 > num2 && num1 > num3)
    {
        cout << "O maior n�mero �: " << num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "O maior n�mero �: " << num2;
    }
    else if (num3 > num1 && num3 > num2)
    {
        cout << "O maior n�mero �: " << num3;
    }
    cout << endl;

    return 0;
}
