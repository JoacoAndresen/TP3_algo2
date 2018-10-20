#include "nodo.h"
#include <string>
#include <iostream>

//contructor con parametro
Nodo::Nodo (Tipo d){
    dato=d;
    siguiente=0;
}

Nodo::~Nodo(){
    std::cout << "Se destruye el nodo " << this << std::endl;
}

//obtener
Tipo Nodo::obtenerDato(){
    return dato;
}

Nodo* Nodo::obtenerSiguiente(){
    return siguiente;
}

//asignar
void Nodo::asignarSiguiente(Nodo* p){
    siguiente = p;
}


void Nodo::asignarDato(Tipo d){
    dato=d;
}



