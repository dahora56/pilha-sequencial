#include <iostream>
#include "pilhaSequencial.h"
#include <stack>

using namespace std;

int main()
{
    int opc, valor;
    Pilha<int> p(10);
    do
    {
        cout<<"Escolha uma opcao:"<<endl;
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
                cout<<"Pilha cheia..."<<endl;
            else
            {
                cout<<"Digite o valor: ";
                cin>>valor;
                p.empilha(valor);
            }
            break;
        case 2:
            if(p.pilhaVazia())
                cout<<"Pilha vazia..."<<endl;
            else
                cout<<"Desempilhado: "<<p.desempilha()<<endl;
            break;
        case 3:
            if(p.pilhaVazia())
                cout<<"Pilha vazia..."<<endl;
            else
                cout<<"Elemento do topo: "<<p.elementoDoTopo()<<endl;
            break;
        case 4:
            if(p.pilhaVazia())
                cout<<"Pilha vazia..."<<endl;
            else
            {
                for(int i = 0; i <= p.topo; i++)
                {
                    cout<<p.v[i]<<endl;
                }
            }
            break;
        case 9:
            cout<<"Fim da aplicacao."<<endl;
            break;
        default:
            cout<<"Opcao invalida!"<<endl;
            break;
        }
    }while(opc != 9);
    cout << "Hello world!" << endl;
    return 0;
}
