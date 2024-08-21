#include <iostream>
#include <ctime>

void felizcumpleanos(std::string name, int edad){
    std::cout<<"que los cumplas feliz\n"; 
    std::cout<<"que los cumplas feliz\n"; 
    std::cout<<"que los cumplas " << name << '\n';  
    std::cout<<"que los cumplas feliz\n\n"; 
    std::cout<<"Tu edad es: " << edad << " anos"; 
}

int main(){

    std::string nombre = "Juan"; 
    int edad = 22;
    felizcumpleanos(nombre, edad);
    return 0;
}