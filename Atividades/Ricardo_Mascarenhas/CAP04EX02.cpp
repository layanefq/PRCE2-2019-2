/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descri��o: M�dia
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fNota1 = 0;
    float fNota2 = 0;
    float fMedia = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Bem-Vindo ao programa de c�lculo de m�dias. \n Digite as duas notas de seu aluno: " << endl ;
    cin >> fNota1 >> fNota2 ;

    fNota1 + fNota2 = fMedia

    if (fMedia >= 0 && fMedia < 3)
    {
        cout << "Aluno Reprovado!!"
    }
    else if (fMedia >= 3 && fMedia < 7)
    {
        cout << "Aluno dever� realizar o Exame!"
    }
    else
    {
        cout << "Aluno Aprovado!!"
    }



    return 0;
}
