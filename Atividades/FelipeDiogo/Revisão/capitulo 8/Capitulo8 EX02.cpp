/**********************************************************
- Autor:     Felipe Diogo
- Descri��o: La�o de Repeti��o
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int ihora = 0;
    int iminuto = 0;
    int isegundo = 0;
    int ivalor = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe o valor das horas " << endl;
    cin >> ihora;

    cout << "Informe o valor dos minutos " << endl;
    cin >> iminuto;

    cout << "Informe o valor dos segundos " << endl;
    cin >> isegundo;

    ivalor =(ihora * 3600) + (iminuto * 60) + (isegundo * 1) ;


    cout << "\n" << ihora << "h " << iminuto << "min " << isegundo << "s correspondem a " << ivalor << " segundos" << endl;




    return 0;
}
