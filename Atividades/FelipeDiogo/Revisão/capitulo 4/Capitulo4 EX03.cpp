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
    double dvalor1 = 0;
    double dvalor2 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe o valor 1 " << endl;
    cin >> dvalor1;

    cout << "Informe o valor 2 " << endl;
    cin >> dvalor2;



    if (dvalor1 > dvalor2)
{
    cout << "\n" << "valor 1 maior que o valor 2 "<< endl;
}
    if (dvalor1 < dvalor2)
{
    cout << "\n" << "valor 2 maior que o valor 1 "<< endl;
}
    if (dvalor1 == dvalor2)
{
    cout << "\n" << "valores iguais"<< endl;
}



    return 0;
}
