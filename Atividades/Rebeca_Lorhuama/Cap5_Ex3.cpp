/**********************************************************
- Autor:     Rebeca Lorhuama de Castro Saraiva
- Descri��o: Faixa Et�ria
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int iIdade  = 0;
    float fMaior15 = 0;
    float fMaior30 = 0;
    float fMaior45 = 0;
    float fMaior60 = 0;
    float fMaiorIdoso = 0;
    float fCont = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "FAIXA ET�RIA" << endl << endl;

    do
    {
        cout << "Informe a idade: ";
        cin >> iIdade;

        fCont = fCont + 1;

        if (iIdade <= 15)
        {
            fMaior15 = fMaior15 + 1;
        }

        else
        {
            if (iIdade <= 30)
            {
                fMaior30 = fMaior30 + 1;
            }

        else
        {
            if (iIdade <= 45)
            {
                fMaior45 = fMaior45 + 1;
            }

            else
            {
                if (iIdade <= 60)
                {
                    fMaior60 = fMaior60+1;
                }

                else
                {
                    if (iIdade > 60)
                    {
                        fMaiorIdoso = fMaiorIdoso + 1;
                    }
                }
            }
      }
      }
}

while (fCont != 8);

cout << "\nQuantidade de pessoas na 1� Faixa Et�ria: " << fMaior15 << endl;
cout << "Quantidade de pessoas na 2� Faixa Et�ria: " << fMaior30 << endl;
cout << "Quantidade de pessoas na 3� Faixa Et�ria: " << fMaior45 <<  endl;
cout << "Quantidade de pessoas na 4� Faixa Et�ria: " << fMaior60 << endl;
cout << "Quantidade de pessoas na 5� Faixa Et�ria: " << fMaiorIdoso << endl;

cout << "\nPorcentagem de pessoas na 1� faixa et�ria: " << fMaior15 / fCont * 100 << "%" << endl;
cout << "Porcentagem de pessoas na 5� faixa et�ria: " << fMaiorIdoso / fCont * 100 << "%" << endl;


    return 0;
}
