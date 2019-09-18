#include "CONTA.h"
#include <string>
#include <cstdlib>
#include <locale.h>
#include <iostream>

using namespace std;

CONTA::CONTA()
{
    Saldo = 0 ;
    Debito = 0 ;
    Credito = 0 ;
    Aplica = 0 ;
}

CONTA::~CONTA()
{
    //dtor
}

void CONTA::setSaldo (double S)
{
    Saldo = S;
}

    void CONTA::setDebito ()
    {
        cout << "Informe o valor a ser pago: R$" ;
        cin >> Debito ;
        cout << "\n";

        if (Debito > Saldo)
        {
            cout << "Valor do d�bito superior ao saldo da conta! " << endl ;
            cout << "\n";
            cout << "SALDO ATUAL: R$" << Saldo ;
        }
        else
        {
            cout << "SALDO ATUAL: R$" << Saldo - Debito ;
        }
    }

    void CONTA::setCredito (double C)
    {
        Credito = C;
    }

    void CONTA::setAplica()
    {
        cout << "Informe o valor a ser aplicado: R$" ;
        cin >> Aplica ;

        if (Aplica > Saldo)
        {
            cout << "Saldo insuficiente para realizar essa aplica��o!" ;
        }
        else
        {
            cout << "com juros de 1% ao m�s. " << endl ;
            cout << "Sua aplica��o ir� render, R$ " << (1*Aplica)/100 << " por m�s." ;
        }

    }

//****************************************************************************
    double CONTA::getSaldo ()
    {
        return Saldo ;
    }

    double CONTA::getDebito ()
    {

    }

    double CONTA::getCredito ()
    {
        return Saldo + Credito;
    }

    double CONTA::getAplica ()
    {

    }

