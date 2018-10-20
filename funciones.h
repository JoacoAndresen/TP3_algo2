#ifndef funciones_h
#define funciones_h
#include <iostream>
#include <string>
#include <fstream>
#include <typeinfo>

// Funciones auxiliares

int menu();
std::string leerLinea(std::ifstream &archivo);
int longitudArchivo(std::ifstream &archivo);


#endif /* funciones_h */
