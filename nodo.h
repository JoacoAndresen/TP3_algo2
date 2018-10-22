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
    
    //contructor con parametro
    Nodo (Tipo d);
    
    ~Nodo();
    
    //obtener
    Tipo obtenerDato();
    
    Nodo* obtenerSiguiente();
    
    //asignar
    void asignarSiguiente(Nodo* p);
    
    void asignarDato(Tipo d);
    
};



#endif /* NODO_H_ */
