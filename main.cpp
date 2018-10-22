#include "figura.h"
#include "funciones.h"
#include "lista.h"

int main() {
    
    Lista figuras;
    
    std::ifstream archivo;
    archivo.open("/Users/joaquinandresen/Desktop/Programación/Algoritmos y Programación II/TP3/TP3/figuras.txt");
    
    int longitud;
    longitud = longitudArchivo(archivo);
    
    for (int i = 0; i < longitud - 1; i++) {
        figuras.insertar(crearFigura(archivo), i + 1);
    }
    
    archivo.close();
    
    
    
    return 0;
}
