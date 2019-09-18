/**********************************************************
- Autor:     Jaqueline Silva Ribeiro
- Descri��o: Cap. 4 - Exercicio 10
    O pre�o ao consumidor de um carro novo � a soma do custo de f�brica com a porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de f�brica.
    As porcentagens encontram-se na tabela a seguir.
    Fa�a um programa que receba o custo de f�brica de um carro e mostre o pre�o ao consumidor.

                                        % do distribuidor       % dos impostos
        At� R$ 12000,00                         5                   isento
        Entre R$12000,00 e R$25000,00           10                    15
        Acima de 25000,00                       15                    20
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fCusto = 0 ;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Informe o Custo de F�brica do carro:" ;
    cin >> fCusto;

    if(fCusto<=12000)
    {
        cout<<"Pre�o ao Consumidor: " << fCusto*1.05 <<endl;
    }
    else if (fCusto<=25000)
    {
        cout<<"Pre�o ao Consumidor: " << fCusto*1.25 <<endl;
    }
    else if( fCusto>25000)
    {
        cout<<"Pre�o ao Consumidor: " << fCusto*1.35 <<endl;
    }

    return 0;
}
