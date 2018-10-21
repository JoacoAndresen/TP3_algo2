#ifndef funciones_h
#define funciones_h
#include <iostream>
#include <string>
#include <fstream>
#include <typeinfo>
#include "figura.h"

// Funciones auxiliares

int menu();
std::string leerDato(std::ifstream &archivo);
int longitudArchivo(std::ifstream &archivo);
void crearFigura(std::ifstream &archivo);


#endif /* funciones_h */
