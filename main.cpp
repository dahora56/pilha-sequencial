/*
João Victor Oliveira da Hora
ADS Manhã - 3º Ciclo
FATEC Rubens Lara
01/03/2019
*/


#include <iostream>
#include "pilhaSequencial.h"
#include <stack>

using namespace std;

int main()
{
    int opc;
    int valor;

    Pilha<int> p(10);

    do
    {
        cout<<"\nEscolha uma opcao:"<<endl;
        cout<<"1 - Empilha"<<endl;
        cout<<"2 - Desempilha"<<endl;
        cout<<"3 - Elemento do Topo"<<endl;
        cout<<"4 - Exibe a Pilha"<<endl;
        cout<<"Escolha: ";
        cin>>opc;

        switch(opc)
        {
        case 1:
            if(p.pilhaCheia())
                cout<<"\nPilha cheia..."<<endl;
            else
            {
                cout<<"Digite o valor: ";
                cin>>valor;
                p.empilha(valor);
            }
            break;
        case 2:
            if(p.pilhaVazia())
                cout<<"\nPilha vazia..."<<endl;
            else
                cout<<"\nDesempilhado: "<<p.desempilha()<<endl;
            break;
        case 3:
            if(p.pilhaVazia())
                cout<<"\nPilha vazia..."<<endl;
            else
                cout<<"\nElemento do topo: "<<p.elementoDoTopo()<<endl;
            break;
        case 4:
            if(p.pilhaVazia())
                cout<<"\nPilha vazia..."<<endl;
            else
            {
                cout<<endl;
                for(int i = 0; i <= p.topo; i++)
                {
                    cout<<i + 1<<": "<<p.v[i]<<endl;
                }
            }
            break;
        case 9:
            cout<<"\nFim da aplicacao."<<endl;
            break;
        default:
            cout<<"\nOpcao invalida!"<<endl;
            break;
        }
    }while(opc != 9);

    return 0;
}
