/**********************************************************
- Autor:     Leonardo Miurin
- Descri��o: cap. 4/exerc�cio 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

float fNota1, fNota2, fNota3, fNota4;
float fMedia;

int main()
{
    setlocale(LC_ALL,"");

    cout << "Nota: " << endl;
    cin >> fNota1;

    cout << "Nota: " << endl;
    cin >> fNota2;

    cout << "Nota: " << endl;
    cin >> fNota3;

    cout << "Nota: " << endl;
    cin >> fNota4;

    fMedia = (fNota1 + fNota2 + fNota3 + fNota4)/4;

    if(fMedia>=7){
            cout << "M�dia final: " << fMedia << ". Aprovado" <<endl;

    } else {
            cout << "M�dia final: " << fMedia << ". Reprovado" <<endl;

    }


    return 0;
}
