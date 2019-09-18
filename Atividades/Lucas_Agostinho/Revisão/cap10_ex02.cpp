/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descri��o: Censo
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

struct censo
{
    float fSalario = 0;
    int iIdade = 0;
    float fNumFilhos = 0;
    char cSexo = 0;
};

int main()
{
    ///Declara��o de vari�veis
    censo caragua;
    float fSumSalario = 0;
    float fMedSalario = 0;
    float fMaiorSalario = 0;
    float fSumFilhos = 0;
    float fMedFilhos = 0;
    int iContSalarioMulher = 0;
    float fPercentSalaMulher = 0;
    int iQtdRegistros = 0;
    int i = 0;

    ///Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    ///C�digo do programa
    cout << "Informe a quantidade de registros a serem inseridos: "
    cin >> iQtdRegistros;

    for (i = 0; i < iQtdRegistros; i++)
    {
        cout << "Informe o sal�rio: ";
        cin >> caragua.fSalario;

        cout << "Informe a idade: ";
        cin >> caragua.iIdade;

        cout << "Informe o n�mero de filhos: ";
        cin >> caragua.fNumFilhos;

        cout << "Informe o sexo (f = feminino / m = masculino): ";
        cin >> caragua.cSexo;

        fSumSalario += caragua.fSalario;

        fSumFilhos += caragua.fNumFilhos;

        if (caragua.fSalario > fMaiorSalario)
        {
            fMaiorSalario = caragua.fSalario;
        }

        if ((caragua.cSexo == 'F' || caragua.cSexo == 'f') && (caragua.fSalario > 1000))
        {
            iContSalarioMulher++;
        }

        cout << endl;
    }

    fMedSalario = fSumSalario / iQtdRegistros;

    fMedFilhos = fSumFilhos / iQtdRegistros;

    fPercentSalaMulher = (iContSalarioMulher * 100) / iQtdRegistros;

    cout << "A m�dia do sal�rio da popula��o � de " << fMedSalario << " reais" << endl;
    cout << "A m�dia de filhos da popula��o � de " << fMedFilhos << " filhos por pessoa" << endl;
    cout << "O maior sal�rio � o de " << fMaiorSalario << " reais" << endl;
    cout << "O percentual de mulheres com sal�rio superior a 1000 reais � de " << fPercentSalaMulher << "%" << endl;

    return 0;
}
