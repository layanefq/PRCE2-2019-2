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
    int ivalor1 = 0;
    int i;
    int x = 0;
    int y = 0;
    int z = 0;
    int resultado = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");


while (y != 10)
{
    cout << "Informe 10 valores " << endl;
    cin >> ivalor1;

    for (i = 2; i <= (ivalor1 / 2); i++)
    {
    if (ivalor1 % i == 0)
    {
       resultado++ ;

    }
    }

    if((ivalor1 % 2 )== 0)
{
    x = x + ivalor1;
}
    if(resultado == 0)
{
    z = z + ivalor1;
}

    y++;
}

 cout <<"a soma dos n�mero pares � " << x  << " a soma dos n�mero primos � " << z << endl;

    return 0;
}
