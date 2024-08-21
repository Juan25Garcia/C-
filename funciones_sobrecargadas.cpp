#include <iostream>

// Sobrecarga de la función `print`
void print(int i) {
    std::cout << "El numero entero es: " << i << std::endl;
}

void print(double d) {
    std::cout << "El numero decimal es: " << d << std::endl;
}

void print(std::string s) {
    std::cout << "La cadena es: " << s << std::endl;
}

int main() {
    print(5);           // Llama a print(int)
    print(3.14);        // Llama a print(double)
    print("Hola");      // Llama a print(std::string)
    return 0;
}
