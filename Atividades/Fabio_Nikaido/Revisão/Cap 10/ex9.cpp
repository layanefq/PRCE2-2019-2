/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descri��o: Lista 10 - Exerc�cio 9
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string.h>

using namespace std;

struct calculo
{
    int salario;
    int vendas;
};


int main()
{

    //Declara��o de vari�veis

    calculo teste;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite o seu sal�rio: ";
    cin >> teste.salario;

    cout << "Digite o valor total de suas vendas: ";
    cin >> teste.vendas;

    cout << "Sal�rio Fixo: " << teste.salario << endl;
    cout << "Valor das vendas: " << teste.vendas << endl;
    cout << "Comiss�o: " << teste.salario+(teste.vendas*0.06) << endl;

    return 1;
}

