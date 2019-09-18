/**********************************************************
- Autor:     Rebeca Lorhuama de Castro Saraiva
- Descri��o: C�lculo do peso ideal
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

    //Declara��o de vari�veis
    char cSexo;
    float fAltura = 0;
    float fPesoIdeal = 0;
    float PesoIdeal();

int main()
{

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "PESO IDEAL" << endl << endl;

    cout << "Considere 'M' para Masculino e 'F' para Feminino" << endl;

    cout << "\nInforme o seu sexo: ";
    cin >> cSexo;

    cout << "Informe a sua altura (em metros): ";
    cin >> fAltura;

    PesoIdeal ();

    return 0;
}

float PesoIdeal()
{
    if (cSexo == 'M' || cSexo == 'm')
    {
        fPesoIdeal = (72.7 * fAltura - 58);

        cout << "O seu peso ideal �: " << fPesoIdeal << endl;
    }

    else if (cSexo == 'F' || cSexo == 'f')
    {
        fPesoIdeal = (62.1 * fAltura - 44.7);

        cout << "O seu peso ideal �: " << fPesoIdeal << endl;
    }

    else
    {
        cout << "Informa��o inv�lida";
    }
}
