
/**********************************************************
- Autor:     Felipe Alexandre
 cap 10 atividade 2
 Descri��o:Programa que pega os dados de 20 pessoas e da
 a m�dia de sal�rio,numero de filhos, al�m de maio sal�rio
 e percentual de mulheres que ganham mais de 1000 usando struct.
**********************************************************/

#include<iostream>
#include<stdio.h>
#include<cstdlib>
struct ficha
{
   float sal=0;
   float ssal=0;
   float maiosal=0;
   int idade=0;
   int nFilho=0;
   int sFilho=0;
   int gen=0;
   float contm=0;
   float contf=0;
   int contf1000=0;
};
int main()
{
    using namespace std;
    setlocale(LC_ALL,"");
    ficha reg;
    for(int i=0;i<20;i++)
    {
      cout<<"Bem vindo ao sistema de registro:\nQual o seu sexo?\n1-masculino\t2-feminino"<<endl;
    cin>>reg.gen;
    switch(reg.gen)
    {
    case 1:
        reg.contm++;
        break;
    case 2:
        reg.contf++;
        break;
    }
    cout<<"Digite o sal�rio:R$";
    cin>>reg.sal;
    if(reg.sal>reg.maiosal){reg.maiosal=reg.sal;}
    reg.ssal=reg.ssal+reg.sal;

    if(reg.gen==2 && reg.sal>1000)
    {
        reg.contf1000++;
    }
    cout<<"Digite o numero de filhos: ";
    cin>>reg.nFilho;
    reg.sFilho=reg.sFilho+reg.nFilho;

    }
   cout<<"\nM�dia de sal�rio da popula��o �:R$"<<reg.ssal/(reg.contm+reg.contf)<<endl;
   cout<<"M�dia do numero de filhos:"<<reg.sFilho/(reg.contm+reg.contf)<<endl;
   cout<<"O maior sal�rio �:"<<reg.maiosal<<endl;
   cout<<"O percentual de mulheres que ganham mais de R$1000 �:"<<(reg.contf1000/(reg.contm+reg.contf))*100<<"%"<<endl;
}
