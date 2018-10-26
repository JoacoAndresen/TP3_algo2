#include "nodo.h"
#include <string>
#include <iostream>

//contructor con parametro
Nodo::Nodo (Tipo d){
    dato=d;
    siguiente=0;
}

Nodo::~Nodo(){
    delete dato;
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



