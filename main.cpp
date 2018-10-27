#include "figura.h"
#include "funciones.h"
#include "lista.h"

int main() {
    
    Lista figuras;
    
    std::ifstream archivo;
    archivo.open("/Users/joaquinandresen/Desktop/Programación/Algoritmos y Programación II/TP3/TP3/figuras.txt");
    
    int longitud;
    
    longitud = longitudArchivo(archivo) - 1;
    
    
    for (int i = 1; i <= longitud ; i++) {
        figuras.insertar(crearFigura(archivo), i);
    }
    
    std::cout << "\n" << std::endl;
    
    archivo.close();
    
    int respuesta = 0;
    
    while (respuesta != 9) {
        respuesta = menu();
        if (respuesta == 1) { // Consultar que objeto hay en determinada pos
            opcion1(figuras);
            continuar();
        }
        else if (respuesta == 2){ // Dar de baja objeto en pos
            opcion2(figuras, longitud);
            --longitud;
            continuar();
        }
        else if (respuesta == 3){ // Agregar objeto
            opcion3(figuras, longitud);
            ++longitud;
            continuar();
        }
        else if (respuesta == 4){ // Listar objetos
            opcion4(figuras, longitud);
            continuar();
        }
        else if (respuesta == 5){ // Superficie Maxima
            opcion5(figuras, longitud);
            continuar();
        }
        else if (respuesta == 6){ // Superficie Minima
            opcion6(figuras, longitud);
            continuar();
        }
        else if (respuesta == 7){ // Perimetro maximo
            opcion7(figuras, longitud);
            continuar();
        }
        else if (respuesta == 8){ // Perimetro minimo
            opcion8(figuras, longitud);
            continuar();
        }
        else if (respuesta == 9){ // Finalizar aplicacion
            opcion9();
        }
        std::cout << "\n" << "\n" << std::endl;
    }
    
    for (int i = 1; i <= longitud ; i++) {
        figuras.borrar(1);
    }
    
    return 0;
}
