
/**********************************************************
- Autor:     Leonardo Miurin
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#define tam 6

using namespace std;
 int iVetor[tam], i;
 int iContP, iContI;

int main()
{
    setlocale(LC_ALL,"");

    for(i=0; i<tam; i++){
        cout << i+1 << "� n�mero: " << endl;
        cin >> iVetor[i];
        }
        system("cls");

        for(i=0; i<tam; i++){
            if(iVetor[i]%2==0){
            iContP++;
            cout << "  PAR: " << iVetor[i] << endl;
        } else {
            iContI++;
            cout << "�MPAR: " << iVetor[i] << endl;
        }
    }

            cout << "Quantidade de pares: " << iContP << endl;
            cout << "Quantidade de �mpares: " << iContI << endl;



    return 0;
}
