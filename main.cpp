#include <iostream>
#include "Priority_Queue.h"
#include <string>

int main() {
    auto* cola = new Queue<int>();

    cola->enqueue(3,0);
    cola->enqueue(2,0);
    cola->enqueue(1,0);
    cola->enqueue(4,0);

    auto* cola_prioridad = new Queue<int>();

    cola_prioridad->enqueue(3,3);
    cola_prioridad->enqueue(2,2);
    cola_prioridad->enqueue(1,1);
    cola_prioridad->enqueue(4,4);

    cout<<"cola sin prioridad"<<endl;
    while (!cola->isEmpty()){
        cout<<cola->dequeue()<<endl;
    }

    cout<<"cola con prioridad"<<endl;
    while (!cola_prioridad->isEmpty()){
        cout<<cola_prioridad->dequeue()<<endl;
    }



}
