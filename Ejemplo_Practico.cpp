#include <iostream>
#include <string>
int main() {
    std::string nombre;
    // Entrada de una cadena
    std::cout << "Ingrese su nombre: ";
    std::getline(std::cin, nombre);
    // Concatenación
    std::string mensaje = "Hola, " + nombre + "! Bienvenido.";
    // Mostrar la longitud de la cadena
    std::cout << mensaje << std::endl;
    std::cout << "Tu nombre tiene " << nombre.length() << " caracteres." << std::endl;
    return 0;
}