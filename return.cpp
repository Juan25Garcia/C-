#include <iostream>

std::string concatenarCadenas(std::string string1, std::string string2);

int main(){

    std::string nombre = "Alex";
    std::string apellido = "programa";
    std::string nombreCompleto = concatenarCadenas(nombre, apellido); 
    std::cout << "Hola " << nombreCompleto;

    return 0;
}


std::string concatenarCadenas(std::string string1, std::string string2){
    return string1 + " " + string2; 
}