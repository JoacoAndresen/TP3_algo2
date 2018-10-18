#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "nodo.h"

class Lista
{
private:
    // Primer elemento de la lista
    Nodo* primero;
    // Nodo* ultimo; Lo agrego para listas doblemente enlazadas
    // Tamaño de la lista
    unsigned longitud;
    
    Nodo* obtener_nodo(unsigned pos);
    
public:
    // Constructor
    // PRE:  ninguna
    // POST: construye una lista vacia
    //       - primero apunta a nulo
    //       - tam = 0
    Lista();
    
    // Destructor
    // PRE:  lista creada
    // POST: Libera todos los recursos de la lista
    ~Lista();
    
    // La lista es vacía?
    // PRE:  lista creada
    // POST: devuelve verdadero si la lista es vacia
    //       falso de lo contrario
    bool lista_vacia();
    
    // Agregar un elemento a la lista
    // PRE:  lista creada
    // POST: agrega un dato (dentro de un nodo) al final
    //       incrementa tam en 1
    void insertar(Tipo d, unsigned pos);
    
    // Borrado del nodo que está en la posición pos
    // PRE: - lista creada y no vacia
    // -0<pos<=tam
    // POST: libera el nodo que esta en la posición pos // se toma 1 como el primero
    void borrar(unsigned pos);
    
    Tipo consultar(unsigned pos);
    
    bool estaIncluida(Lista* lista);
    
    unsigned get_tam();
};

#endif // LISTA_H_INCLUDED

