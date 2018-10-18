#include "nodo.h"

Nodo::Nodo(Tipo d){
    std::cout << "Se construye el nodo " << this << std::endl;
    dato  = d;
    siguiente  = 0;
}

Nodo::~Nodo(){
    std::cout << "Se destruye el nodo " << this << std::endl;
}

void Nodo::asignarDato(Tipo d){
    dato = d;
}

Tipo Nodo::obtenerDato(){
    return dato;
}

void Nodo::set_siguiente(Nodo* ps){
    siguiente = ps;
}

Nodo* Nodo::obtenerSiguiente(){
    return siguiente;
}

