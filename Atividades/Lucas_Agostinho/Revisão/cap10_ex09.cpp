/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descri��o: C�lculo comiss�o
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

struct funcionario
{
    float fSalario = 0;
    float fValorTotalVendas = 0;
    float fComissao = 0;
    float fSalarioFinal = 0;
};

int main()
{
    ///Declara��o de vari�veis
    funcionario jorge;

    ///Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    ///C�digo do programa
    cout << "Insira o valor do sal�rio: ";
    cin >>jorge.fSalario;

    cout << "Insira o valor do total de vendas: ";
    cin >>jorge.fValorTotalVendas;

    jorge.fComissao = jorge.fValorTotalVendas * 0.06;

    jorge.fSalarioFinal = jorge.fSalario + jorge.fComissao;

    cout << "\nSua comiss�o � de " << jorge.fComissao << " reais";
    cout << "\nSeu sal�rio final � de " << jorge.fSalarioFinal << " reais\n";

    return 0;
}
