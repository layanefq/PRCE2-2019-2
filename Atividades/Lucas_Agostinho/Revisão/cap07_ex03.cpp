/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descri��o:
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    ///Declara��o de vari�veis
    int matriz[6][3];
    int maior = 0;
    int linhaMaior = 0;
    int colunaMaior = 0;
    int menor = 0;
    int linhaMenor = 0;
    int colunaMenor = 0;
    int i = 0;
    int j = 0;

    ///Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    ///C�digo do programa
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Insira um valor para a c�lula " << (i + 1) << "x" << (j + 1) << ": ";
            cin >> matriz[i][j];
        }
    }

    menor = matriz[0][0];
    maior = matriz[0][0];

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                linhaMaior = i + 1;
                colunaMaior = j + 1;
            }

            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
                linhaMenor = i + 1;
                colunaMenor = j + 1;
            }
        }
    }

    cout << "\nO maior elemento da matriz � o n� " << maior << " localizado na c�lula " << linhaMaior << "x" << colunaMaior << endl;
    cout << "O menor elemento da matriz � o n� " << menor << " localizado na c�lula " << linhaMenor << "x" << colunaMenor << endl;


    return 0;
}
