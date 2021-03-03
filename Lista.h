#ifndef _lista_
#define _lista_

#include <iostream>
#include "Nodo.h"

using namespace std;

template <class T>
class Lista{
    private:
        int count = 0;
        Node<T>* first;
        Node<T>* last;
        Node<T>* current;

    public:
        Lista(){
            this->first = nullptr;
            this->last = nullptr;
            this->current = nullptr;
            this->count = 0;
        }

        void addToEnd(T &pValor){
            Node<T>* newNodo = nullptr;
            newNodo = new Node<T>(pValor);
            if(this->last != nullptr){
                this->last->setSiguiente(newNodo);
                this->last = newNodo;
            }else{
                this->first = newNodo;
                this->last = newNodo;
            }
            this->current = this->first;
            this->count++;
        }

        void addToStart(T &pValor){
            Node<T>* newNodo = nullptr;
            newNodo =  new Node<T>(pValor);
            if(this->first != nullptr){
                newNodo->setSiguiente(this->first);
                this->first = newNodo;
            }else{
                this->first = newNodo;
                this->last = newNodo;
            }
            this->current = this->first;
            this->count++;
        }

        void removeFirst(){
            if(count > 0){
                if(this->first != this->last){
                    this->first = this->first->getSiguiente();
                    this->current = this->first;
                    this->count--;
                }else{
                    this->first = nullptr;
                    this->current = nullptr;
                    this->last = nullptr;
                    this->count = 0;
                }
            }
        }

        T getFirst(){
            this->current = this->first;
            return(T)(*this->first).getValue();
        }

        T getLast(){
            this->current = this->first;
            return(T)(*this->last).getValue();
        }

        T getNext(){
            T result = (*this->current).getValue();
            this->current = this->current->getSiguiente();
            return result;
        }

        int getCount(){
            return this->count;
        }

        bool hasMore(){
            bool result = this->current != nullptr;
            this->current = !result? this->first : this->current;
            return result;
        }
};
#endif


