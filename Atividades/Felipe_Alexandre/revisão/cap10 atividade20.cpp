/******************************
Auto: felipe alexandre da silva
atividade 20 capitulo 10
******************************/
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
using namespace std;
void funcional(int tec)
{
    if(tec>5)
    {
     exit(0);
    }
}
int main()
{

 setlocale(LC_ALL,"");
 int NumOS[5];
 int Num=0;
 int p=0;
 float maior=0;
 float Soma=0;
 float val[5];
 int choi=0;
 string data[5];
 string nome[5];

 cout<<"Quantas ordens de servi�o dev�m ser adicionadas?(maximo de 5 ordens) ";
 cin>>Num;
 funcional(Num);
 for(int i=0;i<Num;i++)
 {
   cout<<"Digite as informa��es pedidas:\nN�mero da ordem de servi�o: ";
   cin>>NumOS[i];
   cout<<"Valor do servi�o: R$";
   cin>>val[i];
   Soma=Soma+val[i];
   if(val[i]>maior)
    {
       maior=val[i];
       p=i;
    }
   cout<<"Descreva o servi�o realizado:\n ";
   cout<<"1-Troca de pe�a\t2-revis�o\t3-concerto de pe�as\n";
   cin>>choi;
   cout<<"Adicione o primeiro nome do cliente: ";
   cin>>nome[i];
   cout<<"Data do servi�o: ";
   cin>>data[i];

 }

 cout<<"M�dia dos valores ficou em:R$";
 cout<<Soma/Num;
 cout<<"\nO valor mais caro foi de "<<maior<<endl;
 cout<<"O cliente relacionado a esse valor �: "<<nome[p]<<endl;
 cout<<"A ordem de servi�o: ";
 switch(choi)
    {
    case 1:
         cout<<"troca de pe�a\n";
        break;
    case 2:
        cout<<"revis�o\n";
        break;
    case 3:
         cout<<"concerto de pe�as\n";
        break;
    }
 cout<<"Data do servi�o: "<<data[p]<<endl;
}

