/**********************************************************
- Autor:    Ricardo Mascarenhas
- Descri��o: Idades
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int iIdade = 0;
    int i15 = 0;
    int i30 = 0;
    int i45 = 0;
    int i46 = 0;
    int i60 = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "AN�LISE POPULACIONAL" << endl ;

    cout << endl ;

    cout << "Informe o n�mero de pessoas que ser�o cadastradas: " << endl ;
    cin >> i ;






   for (int iC = 0; iC < i ; iC ++)
    {

        cout << "Informe uma idade: " << endl ;
        cin >> iIdade ;





         if (iIdade <= 0)
        {
            cout << "Idade inv�lida!" << endl ;
        }
        if (iIdade <= 15){ i15++;}
        if (iIdade >= 16 && iIdade <= 30){ i30++;}
        if (iIdade >= 31 && iIdade <= 45){ i45++;}
        if (iIdade >= 46 && iIdade <= 60){ i46++;}
        if (iIdade > 60){ i60++;}




    }

    cout << endl ;

    cout << "FAIXA ET�RIA \n 1 - At� 15 anos \n 2 - De 16 a 30 anos \n 3 - De 31 a 45 anos \n 4 - De 46 a 60 anos \n 5 - Acima de 60 anos." << endl ;

    cout << endl ;



    cout << i15 << " Pessoas est�o na 1� Faixa et�ria. " << endl ;
    cout << i30 << " Pessoas est�o na 2� Faixa et�ria. " << endl ;
    cout << i45 << " Pessoas est�o na 3� Faixa et�ria. " << endl ;
    cout << i46 << " Pessoas est�o na 4� Faixa et�ria. " << endl ;
    cout << i60 << " Pessoas est�o na 5� Faixa et�ria. " << endl ;

    cout << endl ;

    cout << "A quantidade de pessoas na primeira faixa et�ria, corresponde a " << (i15*100)/i << " % do total de pessoass cadastradas. " << endl ;


    cout << endl ;


    cout << "A quantidade de pessoas na quinta faixa et�ria, corresponde a " << (i60*100)/i << " % do total de pessoass cadastradas. " << endl ;



    return 0;
}
