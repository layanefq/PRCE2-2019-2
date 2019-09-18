/**********************************************************
- Autor:     Jaqueline Silva Ribeiro
- Descri��o: Cap. 6 - Exerc�cio 2
    Fa�a um programa que preencha um vetor com sete n�meros inteiros, calcule e mostre:
    -os n�meros m�ltiplos de 2
    -os n�meros m�ltiplos de 3
    -os n�meros m�ltiplos de 2 e 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
  int vetor[7], i=0, iNum=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    for(i=0; i<7; i++)
    {
        cout<<"Informe um n�mero inteiro: ";
        cin>> iNum;

        vetor[i]=iNum;
    }

    cout<<"\nN�meros m�ltiplos de 2:"<<endl;
    for(i=0; i<7; i++)
    {
        if(vetor[i]%2 == 0)
        {
            cout<<vetor[i]<<endl;
        }
    }

    cout<<"\nN�meros m�ltiplos de 3:"<<endl;
    for(i=0; i<7; i++)
    {
        if(vetor[i]%3 == 0)
        {
            cout<<vetor[i]<<endl;
        }
    }

     cout<<"\nN�meros m�ltiplos de 2 e 3:"<<endl;
    for(i=0; i<7; i++)
    {
        if(vetor[i]%3 == 0 && vetor[i]%2 == 0)
        {
            cout<<vetor[i]<<endl;
        }
    }

    return 0;
}
