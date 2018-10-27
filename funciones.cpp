#include "funciones.h"

int menu(){
    
    int opcion;
    
    std::cout << "1) Consultar que objeto hay en determinada posicion" << std::endl;
    std::cout << "2) Dar de baja objeto" << std::endl;
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

Figura* crearFigura(std::ifstream &archivo){
    std::string dato1;
    double dato2;
    double dato3;
    dato1 = leerDato(archivo);
    if (dato1 == "B") {
        dato2 = std::stod(leerDato(archivo));
        dato3 = std::stod(leerDato(archivo));
        Rectangulo* re = new Rectangulo(dato2, dato3);
        return re; // Aca esta el otro problema, no me deja devolver esto
    }
    else if (dato1 == "A"){
        dato2 = std::stod(leerDato(archivo));
        Cuadrado* cu = new Cuadrado(dato2);
        return cu;
    }
    else if (dato1 == "C"){
        dato2 = std::stod(leerDato(archivo));
        Circulo* cir = new Circulo(dato2);
        return cir;
    }
    std::cout << "Se construye una figura" << std::endl;
    return new Cuadrado(0);
}

void continuar(){
    std::string entrada;
    std::cout << std::endl;
    std::cout << "Ingrese una letra cualquiera y presione ENTER para continuar: ";
    std::cin >> entrada;
    
    // std::cin.ignore();
}

void opcion1(Lista &figuras){
    int pos = 0;
    std::cout << "Ingresar posicion: ";
    std::cin >> pos;
    std::cout << "\n" << std::endl;
    (figuras.consultar(pos)) -> mostrar();
}

void opcion2(Lista &figuras, int longitud){
    int pos = 0;
    std::cout << "Ingresar posicion: ";
    std::cin >> pos;
    figuras.borrar(pos);
    std::cout << std::endl;
    std::cout << "Se ha borrado la figura en la posicion " << pos << "." << std::endl;
}

void opcion3(Lista &figuras, int longitud){
    std::string tipo;
    double dato1 = 0;
    double dato2 = 0;
    std::cout << "Ingrese el objeto que desea agregar (A = Cuadrado, B = Rectangulo y C = Circulo) : ";
    std::cin >> tipo;
    if (tipo == "A") {
        std::cout << "Ingrese la longitud de los lados del cuadrado: ";
        std::cin >> dato1;
        Cuadrado* c1 = new Cuadrado(dato1);
        figuras.insertar(c1, longitud + 1);
    }
    else if (tipo == "C") {
        std::cout << "Ingrese la longitud del radio del circulo: ";
        std::cin >> dato1;
        Circulo* c2 = new Circulo(dato1);
        figuras.insertar(c2, longitud + 1);
    }
    else if (tipo == "B") {
        std::cout << "Ingrese la longitud de la base del rectangulo: ";
        std::cin >> dato1;
        std::cout << "Ingrese la longitud de la altura del rectangulo: ";
        std::cin >> dato2;
        Rectangulo* r1 = new Rectangulo(dato1, dato2);
        figuras.insertar(r1, longitud + 1);
    }
}

void opcion4(Lista &figuras, int longitud){
    for (int i = 1; i <= longitud; i++) {
        std::cout << std::endl;
        (figuras.consultar(i)) -> mostrar();
    }
}

void opcion5(Lista &figuras, int longitud){
    double superficie_max = 0;
    for (int i = 1; i <= longitud; i++) {
        std::cout << std::endl;
        if (((figuras.consultar(i)) -> obtenerSuperficie()) > superficie_max) {
            superficie_max = (figuras.consultar(i)) -> obtenerSuperficie();
        }
    }
    std::cout << "La superficie maxima es: " << superficie_max << std::endl;
}

void opcion6(Lista &figuras, int longitud){
    double superficie_min = 9999999999;
    for (int i = 1; i <= longitud; i++) {
        std::cout << std::endl;
        if (((figuras.consultar(i)) -> obtenerSuperficie()) < superficie_min) {
            superficie_min = (figuras.consultar(i)) -> obtenerSuperficie();
        }
    }
    std::cout << "La superficie minima es: " << superficie_min << std::endl;
}

void opcion7(Lista &figuras, int longitud){
    double perimetro_max = 0;
    for (int i = 1; i <= longitud; i++) {
        std::cout << std::endl;
        if (((figuras.consultar(i)) -> obtenerPerimetro()) > perimetro_max) {
            perimetro_max = (figuras.consultar(i)) -> obtenerPerimetro();
        }
    }
    std::cout << "El perimetro maximo es: " << perimetro_max << std::endl;
}

void opcion8(Lista &figuras, int longitud){
    double perimetro_min = 9999999999;
    for (int i = 1; i <= longitud; i++) {
        std::cout << std::endl;
        if (((figuras.consultar(i)) -> obtenerPerimetro()) < perimetro_min) {
            perimetro_min = (figuras.consultar(i)) -> obtenerPerimetro();
        }
    }
    std::cout << "El perimetro minimo es: " << perimetro_min << std::endl;
}

void opcion9(){
    std::cout << "SESION FINALIZADA.";
}
