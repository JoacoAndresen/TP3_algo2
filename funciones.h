#ifndef funciones_h
#define funciones_h
#include <iostream>
#include <string>
#include <fstream>
#include <typeinfo>
#include "figura.h"
#include "lista.h"

// Funciones auxiliares

int menu();
std::string leerDato(std::ifstream &archivo);
int longitudArchivo(std::ifstream &archivo);
Figura* crearFigura(std::ifstream &archivo);
void continuar();
void opcion1(Lista &figuras);
void opcion2(Lista &figuras, int longitud);
void opcion3(Lista &figuras, int longitud);
void opcion4(Lista &figuras, int longitud);
void opcion5(Lista &figuras, int longitud);
void opcion6(Lista &figuras, int longitud);
void opcion7(Lista &figuras, int longitud);
void opcion8(Lista &figuras, int longitud);
void opcion9();


#endif /* funciones_h */
