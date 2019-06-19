#include<iostream>
using namespace std;



template <class T>
class Node{

public:
    T valor;
    Node<T> *siguiente;


    Node<T>(T dato){valor=dato,siguiente=NULL;}
    Node<T>(){valor=NULL,siguiente=NULL;}


};


template <class T>
class lista
{
public:
    Node<T> *head;
    Node<T> *actual;

    lista(){head=NULL,actual=NULL;}
    void insertar(T valor);
    void insertarpos(T valor,T pos);
    void eliminar(T pos);
    void mostrar();



};

template <class T>
void lista<T>::insertar(T v)
{
    Node<T> *nuevo=new Node<T>(v);
    if(head==NULL)
    {
        head=nuevo;
    }
    else{
        actual->siguiente=nuevo;
    }
    actual=nuevo;
}

template <class T>
void lista<T>::mostrar()
{
    Node<T> *tmp=head;
    while(tmp)
    {
        cout<<tmp->valor<<" ";
        tmp=tmp->siguiente;

    }
    cout<<endl;

}

template <class T>
void lista<T>::insertarpos(T v, T pos)
{
    Node<T> *nuevo=new Node<T>(v);
    Node<T> *tmp=head;
    if(pos==1)
    {
        nuevo->siguiente=head;
        head=nuevo;
    }
    else{
         for(int i=2;tmp!=NULL;i++){
            if(i==pos){
                nuevo->siguiente=tmp->siguiente;
                tmp->siguiente=nuevo;
            }
            tmp=tmp->siguiente;
        }
    }


}

template <class T>
void lista<T>::eliminar(T pos)
{
    Node<T> *aux=head;
    Node<T> *ant;

    for(int i=1;aux!=NULL;i++){
            if(i==pos){
                ant->siguiente=aux->siguiente;
                delete (aux);
            }

    }
}

////////////////////////////////
template <class T>
class iterador{
public:
    Node<T> *posterior;
    Node<T> *anterior;

    iterador<T>(Node<T> *s){posterior=s;}

    void operator ++()
    {
        posterior=posterior->siguiente;
    }


    void next()
    {

        cout<<posterior->valor<<" ";
    }
    void operator --()
    {
        anterior=anterior->siguiente;
    }

    void operator ==(T valor)
    {
        if(posterior->valor==valor)
            cout<<"esta bien"<<endl;
        else
            cout<<"no esta igual"<<endl;

    }
    void operator !=(T valor)
    {
        if(posterior->valor!=valor)
            cout<<posterior->valor<<" es diferente de "<<valor<<endl;
        else
            cout<<"el valor es igual"<<endl;

    }

    bool recorrer()
    {
        if(posterior->siguiente !=NULL)
            return true;
        return false;

    }
};



int main()
{
    lista<int> list1;
    list1.insertar(7);
    list1.insertar(9);
    list1.insertar(16);

    list1.insertarpos(14,1);

    list1.insertarpos(84,2);

    list1.insertarpos(74,2);

    iterador<int> t1(list1.head);

    t1==5;
    t1!=14;
    while(t1.recorrer()==true){
        t1.next();
        ++t1;
    }

}
