#include <iostream>
#include<stdio.h>
#include "Horario.h"
using namespace std;
Horario::Horario()
{
  Hora=0;
  Minuto=0;
  Segundo=0;
}
Horario::~Horario()
{

}
void Horario::setHora(int d)
{
    Hora=d;
}
void Horario::setHora(int d,int d2)
{
    Hora=d;
    Minuto=d2;
}
void Horario::setHora(int d,int d2,int d3)
{
    Hora=d;
    Minuto=d2;
    Segundo=d3;
}

int Horario::getHora()
{
    return Hora;
}
int Horario::getMinuto()
{
    return Minuto;
}
int Horario::getSegundo()
{
    return Segundo;

}
/**Observa��o
FOI feito um preograma simples que printa as horas digitadas da forma pedida,
al�m de ter sido feita uma condi��o para que os numeros digitados estajam entre
os de horas existentes, caso contr�rio o valor digitado � pedido novamente.
