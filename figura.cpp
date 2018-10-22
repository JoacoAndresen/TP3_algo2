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

void Figura::calcularPerimetro(){
}

void Figura::calcularSuperficie(){
}

Rectangulo::Rectangulo(double b, double a){
    base = b;
    altura = a;
    std::cout << "Se contruye un rectangulo" << std::endl;
    calcularPerimetro();
    calcularSuperficie();
}

void Rectangulo::mostrar(){
    std::cout << "Rectangulo" << std::endl;
    std::cout << "Superficie = " << superficie << std::endl;
    std::cout << "Perimetro = " << perimetro << std::endl;
}

void Rectangulo::calcularSuperficie(){
    superficie = base * altura;
}

void Rectangulo::calcularPerimetro(){
    perimetro = (base * 2) + (altura * 2);
}

Cuadrado::Cuadrado(double l){
    lado = l;
    std::cout << "Se contruye un cuadrado" << std::endl;
    calcularSuperficie();
    calcularPerimetro();
}

void Cuadrado::mostrar(){
    std::cout << "Cuadrado" << std::endl;
    std::cout << "Superficie = " << superficie << std::endl;
    std::cout << "Perimetro = " << perimetro << std::endl;
}

void Cuadrado::calcularSuperficie(){
    superficie = lado * lado;
}

void Cuadrado::calcularPerimetro(){
    perimetro = lado * 4;
}

Circulo::Circulo(double r){
    radio = r;
    std::cout << "Se contruye un circulo" << std::endl;
    calcularSuperficie();
    calcularPerimetro();
}

void Circulo::mostrar(){
    std::cout << "Circulo" << std::endl;
    std::cout << "Superficie = " << superficie << std::endl;
    std::cout << "Perimetro = " << perimetro << std::endl;
}

void Circulo::calcularSuperficie(){
    superficie = 3.14 * (radio * radio);
}

void Circulo::calcularPerimetro(){
    perimetro = 2 * 3.14 * radio;
}
