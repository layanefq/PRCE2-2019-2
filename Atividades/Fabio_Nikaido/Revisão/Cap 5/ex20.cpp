/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descri��o: Lista 5 - Exerc�cio 20
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int iOpcao;
    int iNota1;
    int iNota2;
    int iNota3;
    int iPeso1;
    int iPeso2;
    int iPeso3;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    while(iOpcao != 3)
    {
        cout << "Escolha uma das op��es: " << endl;
        cout << "1. M�dia aritm�tica " << endl;
        cout << "2. M�dia ponderada " << endl;
        cout << "3. Sair " << endl;
        cout << "Op��o ";
        cin >> iOpcao;

        if(iOpcao == 1)
        {
            cout << "Digite a primeira nota: ";
            cin >> iNota1;

            cout << "Digite a segunda nota: ";
            cin >> iNota2;

            cout << "A m�dia entre as duas notas �: " << (iNota1+iNota2)/2 << endl << endl;
        }

        else if(iOpcao == 2)
        {
            cout << "Digite a primeira nota: ";
            cin >> iNota1;

            cout << "Digite a segunda nota: ";
            cin >> iNota2;

            cout << "Digite a terceira nota: ";
            cin >> iNota3;

            cout << "Digite o peso da primeira nota: ";
            cin >> iPeso1;

            cout << "Digite o peso da segunda nota: ";
            cin >> iPeso2;

            cout << "Digite o peso da terceira nota: ";
            cin >> iPeso3;

            cout << "A m�dia das notas �: " <<((iNota1*iPeso1)+(iNota2*iPeso2)+(iNota3*iPeso3))/(iPeso1+iPeso2+iPeso3);

            cout << endl << endl;
        }

        else if(iOpcao == 3)
        {
            cout << "Fechando o programa";
        }
    }

    return 1;
}
