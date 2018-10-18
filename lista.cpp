#include "lista.h"
Lista::Lista(){
    primero = 0;
    longitud = 0;
    
}

Lista::~Lista(){
    while (longitud > 0)
        borrar(1);
}

bool Lista::lista_vacia(){
    return (primero == 0);
}

void Lista::insertar(Tipo d, unsigned pos){
    Nodo* nuevo = new Nodo(d);
    if (pos == 1){
        nuevo -> set_siguiente(primero);
        primero = nuevo;
    }
    else {
        Nodo* anterior = obtener_nodo(pos - 1);
        nuevo -> set_siguiente(anterior -> obtenerSiguiente());
        anterior -> set_siguiente(nuevo);
    }
    longitud++;
}

Nodo* Lista::obtener_nodo(unsigned pos){
    Nodo* aux = primero;
    for (unsigned i = 1; i < pos; i++) {
        aux = aux -> obtenerSiguiente();
    }
    return aux;
}

Tipo Lista::consultar(unsigned pos){
    Nodo* aux = obtener_nodo(pos);
    return aux -> obtenerDato();
}

void Lista::borrar(unsigned pos){
    Nodo* borrar = primero;
    if (pos == 1)
    {
        primero = borrar->obtenerSiguiente();
    }
    else {
        Nodo* anterior = obtener_nodo(pos - 1);
        borrar = anterior -> obtenerSiguiente();
        anterior -> set_siguiente(borrar -> obtenerSiguiente());
    }
    delete borrar;
    longitud--;
}

unsigned Lista::get_tam(){
    return longitud;
}


/*
 bool Lista::estaIncluida(Lista* lista){
 Nodo* ptr_aux = this -> primero;
 bool esta_incluida = false;
 
 if (this -> lista_vacia() || (this -> get_tam() < lista -> get_tam())) {
 return false;
 }
 
 unsigned int i = 1;
 unsigned int tamanio_incluida = lista -> get_tam();
 while (i <= this -> get_tam() && this -> obtenerDato(i) != 0 && tamanio_incluida) {
 if (ptr_aux -> obtenerDato() == lista -> ob) {
 esta_incluida = true;
 tamanio_incluida--;
 }
 else{
 tamanio_incluida = lista -> get_tam();
 }
 ptr_aux = ptr_aux -> obtenerSiguiente();
 i++;
 }
 return esta_incluida;
 }
 
 */

