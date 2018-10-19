#include "funciones.h"

int menu(){
    
    int opcion;
    
    std::cout << "1) Consultar" << std::endl;
    std::cout << "2) Dar de baja" << std::endl;
    std::cout << "3) Agregar objeto nuevo" << std::endl;
    std::cout << "4) Listar todos los objetos" << std::endl;
    std::cout << "5) Indicar la superficie maxima" << std::endl;
    std::cout << "6) Indicar la superficie minima" << std::endl;
    std::cout << "7) Indicar el perimetro maximo" << std::endl;
    std::cout << "8) Indicar el perimetro minimo" << std::endl;
    std::cout << "9) Finalizar la aplicacion"<< "\n" <<std::endl;
    
    std::cout << "Elige una opcion: ";
    std::cin >> opcion;
    
    while (opcion <= 0 || opcion >= 10) {
        std::cout << "ERROR, elige una opcion: ";
        std::cin >> opcion;
    }
    
    return opcion;
}
