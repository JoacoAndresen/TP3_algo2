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
    virtual void calcularSuperficie();
    virtual void calcularPerimetro();
    
};

class Rectangulo : public Figura{
    
private:
    double base;
    double altura;

public:
    Rectangulo(double b, double a);
    void mostrar();
    void calcularSuperficie();
    void calcularPerimetro();
    
    
};

class Cuadrado : public Figura{
    
private:
    double lado;

public:
    Cuadrado(double l);
    void mostrar();
    void calcularSuperficie();
    void calcularPerimetro();
    
    
};

class Circulo : public Figura{
    
private:
    double radio;

public:
    Circulo(double r);
    void mostrar();
    void calcularSuperficie();
    void calcularPerimetro();
    
    
};


#endif /* figura_h */
