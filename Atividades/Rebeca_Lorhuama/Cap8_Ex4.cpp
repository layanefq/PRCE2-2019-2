/**********************************************************
- Autor:     Rebeca Lorhuama de Castro Saraiva
- Descri��o: C�lculo do volume de uma esfera
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

    //Declara��o de vari�veis

    float fRaio = 0;
    float fVolume = 0;
    void equacao();

int main()
{
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "VOLUME DE ESFERA" << endl << endl;

    cout << "Informe o raio da esfera: ";
    cin >> fRaio;

    equacao();

  return 0;
}

   void equacao()
{
    fVolume = (4 * fRaio * fRaio * fRaio * 3.1416)/3;

    if (fRaio >= 0)
    {
        cout << "O volume da esfera �: " << fVolume << endl;
    }

    else
    {
        cout << "Valor Inv�lido";
    }

    return;
}
