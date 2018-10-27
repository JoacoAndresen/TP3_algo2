#ifndef figura_h
#define figura_h
#include <iostream>
#include <string>


class Figura{
protected:
    double perimetro;
    double superficie;
    
public:
    // Son metodos virtuales puros
    virtual void mostrar() = 0;
    virtual double obtenerSuperficie() = 0;
    virtual double obtenerPerimetro() = 0;
    
};

class Rectangulo : public Figura{
    
private:
    double base;
    double altura;

public:
    // Constructor
    //PRE: b y a validos
    //POST: crea la figura con los datos recibidos
    Rectangulo(double b, double a);
    
    //PRE: -
    //POST:
    void mostrar();
    
    //PRE: -
    //POST: devuelve la superficie
    double obtenerSuperficie();
    
    //PRE: -
    //POST: devuelve el perimetro
    double obtenerPerimetro();
    
    
};

class Cuadrado : public Figura{
    
private:
    double lado;

public:
    //Constructor
    //PRE: l valido
    //POST: crea la figura con los datos recibidos
    Cuadrado(double l);
    
    //PRE: -
    //POST:
    void mostrar();
    
    //PRE: -
    //POST: devuelve la superficie
    double obtenerSuperficie();
    
    //PRE: -
    //POST: devuelve el perimetro
    double obtenerPerimetro();
    
    
};

class Circulo : public Figura{
    
private:
    double radio;

public:
    //Constructor
    //PRE: r valido
    //POST: crea la figura con los datos recibidos
    Circulo(double r);
    
    //PRE: -
    //POST:
    void mostrar();
    
    //PRE: -
    //POST: devuelve la superficie
    double obtenerSuperficie();
    
    //PRE: -
    //POST: devuelve el perimetro
    double obtenerPerimetro();
    
    
};


#endif /* figura_h */
