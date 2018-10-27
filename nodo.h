#ifndef NODO_H_
#define NODO_H_
#include "figura.h"

typedef Figura* Tipo;

class Nodo{
    
    //atributos
private:
    Tipo dato;
    Nodo* siguiente;
    
    //metodos
public:
    
    // Constructor con parametro
    // PRE: Ninguna
    // POST: Crea un nodo con el dato d y el puntero a NULL Nodo(Dato d);
    Nodo (Tipo d);
    
    // Destructor
    // PRE:  Nodo creado
    // POST: Elimina dato
    ~Nodo();
    
    // Obtener el dato
    // PRE:  nodo creado
    // POST: devuelve el dato que contiene el nodo
    Tipo obtenerDato();
    
    // Obtener el puntero al nodo siguiente
    // PRE:  nodo creado
    // POST: Devuelve el puntero al siguiente nodo
    //       Si es el último devuelve NULL
    Nodo* obtenerSiguiente();
    
    // Setear el puntero al siguiente nodo
    // PRE:  nodo creado
    // POST: el puntero al siguiente nodo apuntará a ps
    void asignarSiguiente(Nodo* p);
    
    // Setea el dato (lo cambia)
    // PRE:  el nodo tiene que estar creado
    // POST: El nodo queda con el dato d
    void asignarDato(Tipo d);
    
};



#endif /* NODO_H_ */
