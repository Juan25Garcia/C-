#include <iostream>

int main(){

    double numero = 16.46;
    std::string nombre = "Alex programa";
    char nota = 'F';
    bool estudiante = true;

    char calificaciones[] = {'a', 'b', 'c', 'd', 'f', 'e'};
    std::cout << sizeof(calificaciones) << " bytes\n";  // peso de la variable
    std::cout << sizeof(calificaciones)/sizeof(char) << " elementos\n";  // cantidad de elementos

    std::string estudiantes[] = {"Estudiante_1", "Estudiante_2", "Estudiante_3"};
    std::cout << sizeof(estudiantes) << " bytes\n";  // peso de la variable
    std::cout << sizeof(estudiantes)/sizeof(std::string)<< " elementos\n";  // cantidad de elementos

    return 0;
}