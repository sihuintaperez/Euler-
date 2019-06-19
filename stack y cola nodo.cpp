#include<iostream>
using namespace std;

template <class T>
class Node{

    T valor;
    Node<T> *siguiente;
public:
    Node<T>(T dato){valor=dato,siguiente=NULL;}
    Node<T>(){valor=0,siguiente=NULL;}
    template<class> friend class stack;
    template<class> friend class cola;

};

template<class T>
class stack{
    Node<T> *head;
public:
    stack(){head=NULL;}
    void push(T val);
    void pop();
    void clear();
    void mostrar();
    bool empty();
    void size();
};
template<class T>
bool stack<T>::empty()
{
    if(head==NULL)
        return true;
    else
        return false;
}
template<class T>
void stack<T>::push(T val)
{
    Node<T> *nuevo=new Node<T>(val);
    if(empty()==true){
        head=nuevo;
    }
    else{
        nuevo->siguiente=head;
    }
    head=nuevo;
}
template<class T>
void stack<T>::pop()
{
    Node<T> *aux=head;
    head=aux->siguiente;
    delete(aux);

}
template <class T>
void stack<T>::mostrar()
{
    Node<T> *tmp=head;
        if(empty()==false){
            while(tmp)
            {
                cout<<tmp->valor<<" ";
                tmp=tmp->siguiente;

            }
        cout<<endl;
        }
        else
        {
            cout<<"stack vacio";
        }
}

template <class T>
void stack<T>::clear()
{
    Node<T> *tmp=head;

    while(empty()==false){
        pop();

    }
}
template<class T>
void stack<T>::size()
{
    Node<T> *tmp=head;
    int cont=0;
    if(empty()==false){
        while(tmp)
        {
            tmp=tmp->siguiente;
            cont++;
        }
    cout<<"Tamaño: "<<cont<<endl;
    }
}
///////////cola
template <class T>
class cola
{
public:
    Node<T> *head;
    Node<T> *actual;

    cola(){head=NULL,actual=NULL;}
    void push_back(T valor);
    void pop_back();
    void mostrar();
    void size();
    bool empty();
};

template <class T>
void cola<T>::push_back(T v)
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
void cola<T>::mostrar()
{
    Node<T> *tmp=head;
        if(empty()==false){
            while(tmp)
            {
                cout<<tmp->valor<<" ";
                tmp=tmp->siguiente;

            }
        cout<<endl;
        }
        else
        {
            cout<<"Cola vacia";
        }
}

template <class T>
void cola<T>::pop_back()
{
    Node<T> *aux=head;
    Node<T> *nuevosig=new Node<T>();

    nuevosig=aux->siguiente;
    head=nuevosig;
    delete(aux);
}
template<class T>
bool cola<T>::empty()
{
    if(head==NULL)
        return true;
    else
        return false;
}
template<class T>
void cola<T>::size()
{
    Node<T> *tmp=head;
    int cont=0;
    if(empty()==false){
        while(tmp)
        {
            tmp=tmp->siguiente;
            cont++;
        }
    cout<<"Tamaño: "<<cont<<endl;
    }
}

int main()
{
    cout<<"      STACK:"<<endl;
    stack<int> s1;
    s1.push(5);
    s1.push(14);
    s1.push(8);
    s1.push(19);
    s1.mostrar();
    s1.pop();
    s1.mostrar();
    s1.size();

    cout<<"      COLAS:  "<<endl;
    cola<int> list1;
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(15);
    list1.push_back(1);
    list1.mostrar();
    list1.pop_back();
    list1.mostrar();
    list1.size();
}
