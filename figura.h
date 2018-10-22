#ifndef figura_h
#define figura_h
#include <iostream>
#include <string>


class Figura{
protected:
    double perimetro;
    double superficie;
    
public:
    Figura(double p, double s);
    Figura();
    virtual void mostrar();
    virtual double calcularSuperficie();
    virtual double calcularPerimetro();
    
};

class Rectangulo : public Figura{
    
private:
    double base;
    double altura;

public:
    Rectangulo(double b, double a);
    void mostrar();
    double calcularSuperficie();
    double calcularPerimetro();
    
    
};

class Cuadrado : public Figura{
    
private:
    double lado;

public:
    Cuadrado(double l);
    void mostrar();
    double calcularSuperficie();
    double calcularPerimetro();
    
    
};

class Circulo : public Figura{
    
private:
    double radio;

public:
    Circulo(double r);
    void mostrar();
    double calcularSuperficie();
    double calcularPerimetro();
    
    
};


#endif /* figura_h */
