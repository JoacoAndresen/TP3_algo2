#ifndef figura_h
#define figura_h
#include <iostream>
#include <string>
#include <fstream>
#include "lista.h"
#include "nodo.h"

class Figura{
private:
    char tipo;
    double perimetro;
    double superficie;
    
public:
    // Contructor
    Figura();
    
    // Destructor
    
    virtual void mostrar();
    virtual void calcularSuperficie();
    virtual void calcularPerimetro();
    
};


#endif /* figura_h */
