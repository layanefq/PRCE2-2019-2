/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descri��o: Fun��o
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;


void Horas (int a, int b, int c);


int main()
{
    //Declara��o de vari�veis
    int h = 0;
    int m = 0;
    int s = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Informe tr�s n�meros internos representando horas, minutos e segundos, seguindo o modelo: 10(horas), 20(minutos) e 30(segundos)." << endl ;
    cin >> h >> m >> s ;


    Horas (h,m,s);

    return 0;
}




void Horas (int a, int b, int c)
{
    int ah = 0 ;
    int bh = 0;
    int st = 0;

   ah = a * 3600 ;
   bh = b * 60 ;

    st = ah + bh + c;

    cout << a << " horas, " << b << " minutos e " << c << " segundos, correspondem a " << st << " segundos. " << endl ;


}
