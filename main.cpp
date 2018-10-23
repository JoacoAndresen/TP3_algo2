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
    
    archivo.close();
    
    int respuesta = 0;
    
    while (respuesta != 9) {
        respuesta = menu();
        int pos = 0;
        std::string tipo;
        double dato1 = 0;
        double dato2 = 0;
        double superficie_max = 0;
        double superficie_min = 999999999;
        double perimetro_max = 0;
        double perimetro_min = 999999999;
        if (respuesta == 1) { // Consultar que objeto hay en det pos
            std::cout << "Ingresar posicion: ";
            std::cin >> pos;
            std::cout << "\n" << std::endl;
            (figuras.consultar(pos)) -> mostrar();
            
        }
        else if (respuesta == 2){ // Dar de baja objeto en pos
            std::cout << "Ingresar posicion: ";
            std::cin >> pos;
            figuras.borrar(pos);
            std::cout << std::endl;
            std::cout << "Se ha borrado la figura en la posicion " << pos << "." << std::endl;
        }
        else if (respuesta == 3){ // Agregar objeto
            std::cout << "Ingrese el objeto que desea agregar : ";
            std::cin >> tipo;
            if (tipo == "A") {
                std::cout << "Ingrese la longitud de los lados del cuadrado: ";
                std::cin >> dato1;
                Cuadrado* c1 = new Cuadrado(dato1);
                figuras.insertar(c1, ++longitud);
            }
            else if (tipo == "C") {
                std::cout << "Ingrese la longitud del radio del circulo: ";
                std::cin >> dato1;
                Circulo* c2 = new Circulo(dato1);
                figuras.insertar(c2, ++longitud);
            }
            else if (tipo == "B") {
                std::cout << "Ingrese la longitud de la base del rectangulo: ";
                std::cin >> dato1;
                std::cout << "Ingrese la longitud de la altura del rectangulo: ";
                std::cin >> dato2;
                Rectangulo* r1 = new Rectangulo(dato1, dato2);
                figuras.insertar(r1, ++longitud);
            }
        }
        else if (respuesta == 4){ // Listar objetos
            for (int i = 1; i <= longitud; i++) {
                std::cout << std::endl;
                (figuras.consultar(i)) -> mostrar();
            }
        }
        else if (respuesta == 5){ // Superficie Maxima
            for (int i = 1; i <= longitud; i++) {
                std::cout << std::endl;
                if (((figuras.consultar(i)) -> calcularSuperficie()) > superficie_max) {
                    superficie_max = (figuras.consultar(i)) -> calcularSuperficie();
                }
            }
            std::cout << "La superficie maxima es: " << superficie_max << std::endl;
        }
        else if (respuesta == 6){ // Superficie Minima
            for (int i = 1; i <= longitud; i++) {
                std::cout << std::endl;
                if (((figuras.consultar(i)) -> calcularSuperficie()) < superficie_min) {
                    superficie_min = (figuras.consultar(i)) -> calcularSuperficie();
                }
            }
            std::cout << "La superficie minima es: " << superficie_min << std::endl;
        }
        else if (respuesta == 7){ // Perimetro maximo
            for (int i = 1; i <= longitud; i++) {
                std::cout << std::endl;
                if (((figuras.consultar(i)) -> calcularPerimetro()) > perimetro_max) {
                    perimetro_max = (figuras.consultar(i)) -> calcularPerimetro();
                }
            }
            std::cout << "El perimetro maximo es: " << perimetro_max << std::endl;
        }
        else if (respuesta == 8){ // Perimetro minimo
            for (int i = 1; i <= longitud; i++) {
                std::cout << std::endl;
                if (((figuras.consultar(i)) -> calcularPerimetro()) < perimetro_min) {
                    perimetro_min = (figuras.consultar(i)) -> calcularPerimetro();
                }
            }
            std::cout << "El perimetro minimo es: " << perimetro_min << std::endl;
        }
        else if (respuesta == 9){ // Finalizar aplicacion
            std::cout << "SESION FINALIZADA.";
        }
        std::cout << "\n" << "\n" << std::endl;
    }
    
    for (int i = 1; i <= longitud ; i++) {
        figuras.borrar(1);
    }
    
    return 0;
}
