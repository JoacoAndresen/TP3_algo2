#ifndef figura_h
#define figura_h
#include <iostream>
#include <string>


class Figura{
protected:
    double perimetro;
    double superficie;
    
public:
    virtual void mostrar() = 0;
    virtual double obtenerSuperficie() = 0;
    virtual double obtenerPerimetro() = 0;
    
};

class Rectangulo : public Figura{
    
private:
    double base;
    double altura;

public:
    Rectangulo(double b, double a);
    void mostrar();
    double obtenerSuperficie();
    double obtenerPerimetro();
    
    
};

class Cuadrado : public Figura{
    
private:
    double lado;

public:
    Cuadrado(double l);
    void mostrar();
    double obtenerSuperficie();
    double obtenerPerimetro();
    
    
};

class Circulo : public Figura{
    
private:
    double radio;

public:
    Circulo(double r);
    void mostrar();
    double obtenerSuperficie();
    double obtenerPerimetro();
    
    
};


#endif /* figura_h */
