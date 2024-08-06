#include <iostream>

// cout << (operador de insercion)
// cin << (operador de extraccion)

int main(){

    std::string nombre;
    int edad; 

    std::cout<<"cual es tu edad?";
    std::cin >> edad;

    std::cout << "Cuale es tu nombre completo? ";
    std::getline(std::cin>>std::ws, nombre);

    std::cout << "hola " << nombre << '\n';
    std::cout << "Tu edad es " << edad << " anos"; 

    return 0; 
}