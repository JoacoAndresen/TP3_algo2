#include "figura.h"

Rectangulo::Rectangulo(double b, double a){
    base = b;
    altura = a;
    superficie = base * altura;
    perimetro = (base * 2) + (altura * 2);
    std::cout << "Se contruye un rectangulo" << std::endl;
}

void Rectangulo::mostrar(){
    std::cout << "Rectangulo" << std::endl;
    std::cout << "Superficie = " << superficie << std::endl;
    std::cout << "Perimetro = " << perimetro << std::endl;
}

double Rectangulo::obtenerSuperficie(){
    return superficie;
}

double Rectangulo::obtenerPerimetro(){
    return perimetro;
}

Cuadrado::Cuadrado(double l){
    lado = l;
    superficie = lado * lado;
    perimetro = lado * 4;
    std::cout << "Se contruye un cuadrado" << std::endl;
}

void Cuadrado::mostrar(){
    std::cout << "Cuadrado" << std::endl;
    std::cout << "Superficie = " << superficie << std::endl;
    std::cout << "Perimetro = " << perimetro << std::endl;
}

double Cuadrado::obtenerSuperficie(){
    return superficie;
}

double Cuadrado::obtenerPerimetro(){
    return perimetro;
}

Circulo::Circulo(double r){
    radio = r;
    superficie = 3.14 * (radio * radio);
    perimetro = 2 * 3.14 * radio;
    std::cout << "Se contruye un circulo" << std::endl;
}

void Circulo::mostrar(){
    std::cout << "Circulo" << std::endl;
    std::cout << "Superficie = " << superficie << std::endl;
    std::cout << "Perimetro = " << perimetro << std::endl;
}

double Circulo::obtenerSuperficie(){
    return superficie;
}

double Circulo::obtenerPerimetro(){
    return perimetro;
}
