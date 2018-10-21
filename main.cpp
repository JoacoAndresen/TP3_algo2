#include "figura.h"
#include "funciones.h"

int main() {
    
    std::ifstream archivo;
    archivo.open("/Users/joaquinandresen/Desktop/Programación/Algoritmos y Programación II/TP3/TP3/figuras.txt");
    
    int longitud;
    longitud = longitudArchivo(archivo);
    
    for (int i = 0; i < longitud; i++) {
        crearFigura(archivo);
    }
    
    archivo.close();
    
    return 0;
}
