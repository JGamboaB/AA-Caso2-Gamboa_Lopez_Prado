#ifndef _node_
#define _node_

#include <iostream>

using namespace std;

template <class T>
class Node{
    private:
        T* data;
        Node<T>* siguiente;

    public:
        Node(T &pData){
            this->data = &pData;
            this->siguiente = nullptr;
        }

        T getValue(){
            return(*this->data);
        }

        Node<T>* getSiguiente(){
            return this->siguiente;
        }

        void setSiguiente(Node<T>* pSiguiente){
            this->siguiente = pSiguiente;
        }
};

#endif