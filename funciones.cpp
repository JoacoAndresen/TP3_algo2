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

std::string leerDato(std::ifstream &archivo){
    std::string dato;
    archivo >> dato;
    return dato;
}

int longitudArchivo(std::ifstream &archivo){
    std::string linea;
    int longitud = 0;
    while (!archivo.eof()) {
        getline(archivo, linea);
        longitud++;
    }
    archivo.clear();
    archivo.seekg(0);
    return longitud;
}

void crearFigura(std::ifstream &archivo){
    std::string dato1;
    double dato2;
    double dato3;
    dato1 = leerDato(archivo);
    if (dato1 == "B") {
        dato2 = std::stod(leerDato(archivo));
        dato3 = std::stod(leerDato(archivo));
        Rectangulo re(dato2, dato3);
    }
    else if (dato1 == "A"){
        dato2 = std::stod(leerDato(archivo));
        Cuadrado cu(dato2);
    }
    else if (dato1 == "C"){
        dato2 = std::stod(leerDato(archivo));
        Circulo cir(dato2);
    }
}
