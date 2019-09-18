/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descri��o: Atividade 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
using namespace std;


class Produto
{
public:
    void setPeso()
    {
        do
        {
            cout << "Informe o peso do produto: ";
            cin >> Peso;



            if (Peso <= 0)
            {
                cout << "Valor inv�lido!" << endl;
            }
        }
        while (Peso <= 0);

    }

    void setPreco()
    {
        do
        {
            cout << "Informe o valor do KG do produto: ";
            cin >> Preco;


            if (Preco <= 0)
            {
                cout << "Valor inv�lido!" << endl;
            }
        }
        while (Preco <= 0);
    }

        void setEmbalagem (float e)
        {
            Embalagem = e;
        }

    void setPT()
    {
        PT = (Peso * Preco);
    }

    float getPeso()
    {
        return Peso;
    }

    float getPreco()
    {
        return Preco;
    }

    float getEmbalagem ()
    {
        return Embalagem;
    }

    float getPT ()
    {
        return ((Peso * Preco)+Embalagem);
    }


private:
    float Peso;
    float Preco;
    float Embalagem;
    float PT;

};


int main()
{
    Produto P1;
    float fEmb = 0 ;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "CALCULANDO O VALOR DE UM PRODUTO" << endl ;
    cout << "\n" ;

    P1.setPeso();

    P1.setPreco();

    cout << "Informe o valor da embalagem do produto: " ;
    cin >> fEmb ;
    P1.setEmbalagem(fEmb);

    system("CLS");

    cout << "CUSTO DO PRODUTO" << endl ;
    cout << "\n" ;

    cout << "Peso do produto: " << P1.getPeso();
    cout << endl ;

    cout << "Pre�o do KG: R$" << P1.getPreco();
    cout << endl ;

    cout << "Valor da embalagem: R$" << P1.getEmbalagem();
    cout << endl;

    cout << "Custo total do produto: R$" << P1.getPT();
    cout << endl ;

    cout << "Para venda, considerar 40% de lucro." << endl ;



    return 0;
}
