/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descri��o: M�dia de nota e sistema de aprova��o
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float nota = 0;
    float soma = 0;
    float media = 0;
    int i = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    for (i = 0; i < 4; i++)
    {
        cout << "Insira as notas do aluno: ";
        cin >> nota;

        soma += nota;
    }

    media = soma / 4;

    cout << "\nM�dia do aluno: " << media << endl;

    cout << endl;
    if (media >= 7)
    {
        cout << "Aluno aprovado!";
    }
    else
    {
        cout << "Aluno reprovado!";
    }
    cout << endl;

    return 0;
}

