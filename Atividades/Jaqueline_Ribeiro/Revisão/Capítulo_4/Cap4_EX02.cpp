/**********************************************************
- Autor:     Jaqueline Silva Ribeiro
- Descri��o: Cap.4 - Exerc�cio 2
    Fa�a um programa que receba duas notas, calcule e mostre a m�dia aritm�tica e a mensagem que se encontra na tabela a seguir:
    0,0 - 3,0  =  REPROVADO
    3,0 - 7,0  =  EXAME
    7,0 - 10,0 =  APROVADO
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fNota1 = 0, fNota2 = 0, fMedia = 0 ;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Informe duas notas:" ;
    cin >> fNota1 >> fNota2;

    if(fNota1>=0 && fNota1<=10 && fNota2>=0 && fNota2<=10)
    {
        fMedia = (fNota1 + fNota2)/2;
        cout << "M�dia das notas: "<< fMedia << endl;

        if( fMedia <3)
        {
            cout << "REPROVADO" << endl;
        }
        else if( fMedia>=3 && fMedia <7)
        {
            cout << "EXAME" << endl;
        }
        else
        {
            cout << "APROVADO" << endl;
        }
    }
    else
    {
        cout<<"Notas inv�lidas. Reinicie o programa e informe novamente"<<endl;
    }
return 0;
}



