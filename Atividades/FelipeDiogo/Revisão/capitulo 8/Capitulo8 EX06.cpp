/**********************************************************
- Autor:     Felipe Diogo e Letiele
- Descri��o: DO WHILE
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    double ialt = 0;
    char csexo ;
    double x = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

        cout << "Digite sua altura" << endl;
        cin >> ialt;

        cout << "Digite M para o sexo masculino e F para feminino " << endl;
        cin >> csexo ;

        if (csexo == 'M' || csexo == 'm')
        {
         x = (72.7 * (ialt) )- 58;
        }
        else
        {
          x = (62.1 *(ialt)) - 44.7;
        }

        cout << "\nSeu peso ideal � " << x << endl;




    return 0;
}
