#include "figura.h"
#include "funciones.h"

int main() {
    Cuadrado cu(5.3);
    Rectangulo re(4.1 , 8);
    Circulo ci(3.2);
    
    std::cout << menu() << std::endl;
    
    return 0;
}
