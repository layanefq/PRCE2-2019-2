/**********************************************************
- Autor:     J�ssica Assis
- Descri��o: Revis�o - Estrutura de Repeti��o EX 25 CAP 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int iCod = 0, iOp = 0;
    float fValor = 0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Ol� seja bem vindo ao nosso sistema!\n";
    do
    {

        cout << "insira o seu c�digo: ";
        cin >> iCod;
        if (iCod > 0)
        {
            cout << "\n\nEscolha a Op��o de Investimento\n 1-\tPoupan�a\n 2-\tPoupan�a Plus\n 3-\tFundos de Renda Fixa\n 0-\tSair\n";
            cin >> iOp;

            cout << "\nQual Valor ser� investido: ";
            cin >> fValor;
        }



        switch (iOp)
        {
        case 1:
            cout << "O total investido � R$"<< fValor << ",sendo o juros de R$" << fValor*0.015 << endl;
            break;

        case 2:
            cout << "O total investido � R$"<< fValor << ",sendo o juros de R$" <<fValor*0.02 << endl;
            break;

        case 3:
            cout << "O total investido � R$"<< fValor << ",sendo o juros de R$" << fValor*0.04 << endl;
            break;

        case 0:
            cout << "Sair";
            break;
        }

    }
    while (iCod > 0);
    return 0;

}
