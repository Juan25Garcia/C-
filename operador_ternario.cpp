#include <iostream>

int main(){

    // Operador ternario ?: = es un remplazo para una declaracion if else
    // condicion ? expresion1 : expresion2;

    int calificacion = 80;

    calificacion >= 60 ? std::cout << "Pasas" : std::cout << "Fallas"; 

    return 0;
}