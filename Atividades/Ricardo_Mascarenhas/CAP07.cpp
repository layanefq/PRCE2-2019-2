/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descri��o: Matriz
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;


int main()

{

    setlocale(LC_ALL,"");
    system("color F1");


    int matriz[3][4];
    int i,j ;
    int iPar = 0;
    int iImpar = 0;

	for(i=0; i<3; i++)
    {
		for(j=0; j<4; j++)
		{
        cout << "Os 4 primeiros valores ser�o referentes a primeira linha, os 4 seguintes a terceira e os 4 �ltimos a �ltima linha. " << endl ;
        cout << endl ;

        cout << "Digite um n�mero:  " ;
        cin >> matriz[i][j] ;

        if (matriz[i][j] % 2 == 0 )
        {
            iPar++;
        }
        else
        {
            iImpar++;
        }

		}
    }


    for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
            cout << matriz [i][j] << " " ;
        }
        cout << "\n" ;
    }


    cout << "\n" ;

    cout << "Dos n�meros digitados " << iPar << " s�o pares. " << endl ;
    cout << endl ;
     cout << "Dos n�meros digitados " << iImpar << " s�o �mpares. " << endl ;











    return 0;
}
