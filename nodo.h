#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED
#include <iostream>

// Tipo de dato char
typedef int Tipo;

class Nodo {
    
private:
    Tipo  dato;
    Nodo* siguiente;
    // Nodo* anterior;  Se agrega ara listas doblemente enlazadas, hay que agregar un obtenerAnterior y un asignarAnterior
    // Dato a almacenar
    // Puntero a otro nodo
public:
    // Constructor con parametro
    // PRE: Ninguna
    // POST: Crea un nodo con el dato d // yel puntero a NULL Nodo(Dato d);
    Nodo(Tipo d);
    
    // Destructor
    // PRE:  Nodo creado
    // POST: No hace nada
    ~Nodo();
    
    // Setea el dato (lo cambia)
    // PRE:  el nodo tiene que estar creado
    // POST: El nodo queda con el dato d
    void asignarDato(Tipo d);
    
    // Obtener el dato
    // PRE:  nodo creado
    // POST: devuelve el dato que contiene el nodo
    Tipo obtenerDato();
    
    // Setear el puntero al siguiente nodo
    // PRE:  nodo creado
    // POST: el puntero al siguiente nodo apuntará a ps
    void set_siguiente(Nodo* ps);
    
    // Obtener el puntero al nodo siguiente
    // PRE:  nodo creado
    // POST: Devuelve el puntero al siguiente nodo
    //       Si es el último devuelve NULL
    Nodo* obtenerSiguiente();
};
#endif // NODO_H_INCLUDED


