
/**********************************************************
- Autor:     Leonardo Miurin
- Descri��o: cap. 4/exerc�cio 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

float fNum1, fNum2;

int main()
{
    setlocale(LC_ALL,"");

    cout << "Digite o primeiro n�mero: " << endl;
    cin >> fNum1;

    cout << "Digite o segundo n�mero: " << endl;
    cin >> fNum2;

    if(fNum1>fNum2){
        cout << "Menor: " << fNum2 << endl;
    } else if (fNum1<fNum2){
        cout << "Menor: " << fNum1 << endl;
    } else {
        cout << "N�meros iguais" << endl;
    }

    return 0;
}
