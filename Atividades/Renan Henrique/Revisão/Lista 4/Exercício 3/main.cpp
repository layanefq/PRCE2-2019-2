#include <iostream>
#include "ContaBancaria.h"

using namespace std;

int main()
{
    int iCont;
    int Controle;
    int op;


    ContaBancaria C1[1];

    for(iCont = 0;iCont <= 1; iCont++)
    {
        op = 0;

    cout << "======== Menu de op��es ========" << endl;
    cout << "1-Fun��o Cr�dito        2-Fun��o D�bito" << endl
         << "3-Verificar Saldo       4-Sair" << endl;

        while(op==0)
        {
            cout << "Escolha a opera��o desejada: ";
            cin >> Controle;

            switch(Controle)
            {
                case 1:
                    C1[iCont].Credito();
                    break;

                case 2:
                    C1[iCont].Debito();
                    break;

                case 3:
                    C1[iCont].getSaldo();
                    break;

                case 4:
                    op = C1[iCont].Sair();
                    break;
            }
        }
    }

    return 0;
}
