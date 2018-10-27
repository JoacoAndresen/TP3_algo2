#ifndef LISTA_H_
#define LISTA_H_
#include "nodo.h"

class Lista{
    
private:
    Nodo* primero;
    int longitud;
    
public:
    //constructor sin parametros
    //PRE:-
    //POST:crea una lista vacia
    Lista();
    
    //agregar elementos a la lista
    //PRE: c, elemento valido y capacidad<MAX
    //POST: agrega c en la cima
    void insertar(Tipo e , unsigned pos);
    
    
    //sacar elementos de la lista
    //PRE: !pila.vacia (pila no vacia)
    //POST:quita elemento de la cima y lo devuelve
    void borrar (unsigned pos);
    
    // pila vacia
    //PRE:-
    //POST:true si la pila esta vacia, false si no.
    bool listaVacia();
    
    
    //consulta en la lista
    //PRE:
    //POST:
    Tipo consultar(unsigned pos);
    
    
    //destructor
    //PRE: -
    //POST:libera la memoria pedida para crear la pila
    ~Lista();
    
private:
    // PRE: pos posicion valida
    // POST: obtiene el nodo
    Nodo* obtenerNodo(unsigned pos);
    
};



#endif /* LISTA_H_ */

