/**********************************************************
- Autor:     J�ssica Assis
- Descri��o: Revis�o - Vetor EX 12 CAP 6
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int Vetor[5], iSoma = 0, i = 0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Forne�a 5 n�meros" << endl;


    for (i = 0; i < 5 ; i++ )
    {
    cout << "Digite o " << i + 1 << "� N�mero: ";
    cin >> Vetor [i];

    iSoma = Vetor[i] + iSoma;
    }

    cout << "A soma dos n�meros digitados � " << iSoma << endl;

}
