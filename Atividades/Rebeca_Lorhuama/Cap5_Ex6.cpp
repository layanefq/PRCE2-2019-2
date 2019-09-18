/**********************************************************
- Autor:     Rebeca Lorhuama de Castro Saraiva
- Descri��o: Compras e Transa��es
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    char cCod;
    int iCont = 1;
    int iParcela = 0;
    float fValor = 0;
    float fPagVis = 0;
    float fPagPra = 0;
    float fPagTotal = 0;
    float fTransacao = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "TRANSA��ES" << endl << endl;

    cout << "Informe a quantidade de compras: ";
    cin >> fTransacao;

    cout << "\nConsidere: 'V = Compra � vista' e 'P = Compra � prazo'" << endl;

    while (iCont <= fTransacao)
    {
        iCont;

        cout << "\nA compra foi � prazo ou � vista?";
        cin >> cCod;

        cout << "Informe o valor da compra: R$ ";
        cin >> fValor;

        if (fValor < 0)
        {
            cout << "Valor inv�lido. Repita o processo" << endl;
        }

        else if(cCod == 'V'|| cCod == 'v')
        {
            fPagVis += fValor;
            fPagTotal += fValor;

            iCont++;
        }

        else if(cCod == 'P'|| cCod == 'p')
        {
            fPagPra += fValor;
            fPagTotal += fValor;

            iCont++;
        }

        else
        {
            cout << "C�digo inv�lido. Repita o processo." << endl;
        }

    }

    if(fPagPra > 0)
    {
        cout << "\nInforme o n�mero de parcelas a pagar: ";
        cin >> iParcela;
    }

    cout << "\nO valor total das compras �: R$ " << fPagTotal;

    cout << "\nO total das compras � vista �: R$ " << fPagVis;

    if(fPagPra > 0)
    {
        cout << "\nO total das compras � prazo �: R$ " << fPagPra << endl;
        cout << "\nO valor da primeira presta��o �: R$ " << fPagPra/iParcela << endl;

    }

return 0;
}
