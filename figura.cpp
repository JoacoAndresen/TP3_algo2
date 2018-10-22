#include "figura.h"

Figura::Figura(double p, double s){
    superficie = s;
    perimetro = p;
}

Figura::Figura(){
    superficie = 0;
    perimetro = 0;
}

void Figura::mostrar(){
}

double Figura::calcularPerimetro(){
    return perimetro;
}

double Figura::calcularSuperficie(){
    return superficie;
}

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

double Rectangulo::calcularSuperficie(){
    return superficie;
}

double Rectangulo::calcularPerimetro(){
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

double Cuadrado::calcularSuperficie(){
    return superficie;
}

double Cuadrado::calcularPerimetro(){
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

double Circulo::calcularSuperficie(){
    return superficie;
}

double Circulo::calcularPerimetro(){
    return perimetro;
}
