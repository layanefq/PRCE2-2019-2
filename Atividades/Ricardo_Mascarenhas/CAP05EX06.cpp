/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descri��o: Credi�rio
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int iVend = 0;
    char cVenda = 0;
    int i = 0;
    int ii = 0;
    float fValor = 0;
    float fValor1 = 0;
    float fTotal = 0;
    float fTotal1 = 0;
    float fT = 0;
    float fTP = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa


    cout << "VENDAS" << endl ;

    cout << endl ;

    cout << "Informe o n�mero de vendas realizadas na loja: " << endl ;
    cin >> iVend ;

    for (int iii = 0; iii < iVend ; iii++)
    {
        cout << "Venda a Prazo (P) ou � Vista (V) ? " << endl ;
        cin >> cVenda ;

        if (cVenda == 'P')
        {
            i++ ;

            cout << "Informe o Valor da compra a prazo: " << endl;
            cin >> fValor ;

            fTotal = fValor + fTotal ;

            fTP = fTotal / 3;


        }
        else // Caso V
        {

            ii++;

            cout << "Informe o Valor da compra a vista: " << endl;
            cin >> fValor1 ;

             fTotal1 = fValor1 + fTotal1 ;

        }
    }

            fT = fTotal1 + fTotal;

            cout << "VENDAS " << endl ;

            cout << "Valor total das vendas: R$ " << fT << endl ;

             cout << endl;

            cout << "Valor total de vendas � prazo: R$ " << fTotal << endl ;

            cout << endl ;

             cout << "Valor total de vendas � vista: R$ " << fTotal1 << endl ;

             cout << endl ;

             cout << "Valor da primeira presta��o das vendas � prazo: R$ " << fTP << endl ;






    return 0;
}
