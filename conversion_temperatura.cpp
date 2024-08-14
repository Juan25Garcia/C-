#include <iostream>

int main(){
    double temp;
    char op;

    std::cout << "***** Conversion de temperatura *****\n";
    std::cout << "F = Farenheit\n";
    std::cout << "F = Celsius\n";
    std::cout << "A que unidad te gustaria convertir? ";
    std::cin >> op;

    if (op == 'F' || op == 'f'){
        std::cout << "Ingrese la temperatura en Celsius: ";
        std::cin >> temp;

        temp = 1.8 * temp +32;
        std::cout << "La temperatura es " <<temp<< "grados Fahrenheit\n";
    }
    else if(op == 'C' || op == 'c'){
        std::cout << "Ingrese la temperatura en Celsius: ";
        std::cin >> temp;

        temp = (temp-32)/1.8;
        std::cout << "La temperatura es " <<temp<< "grados Celsius\n";
    }
    else{
        std::cout << "Ingresa una temperatura valida c o f";
    }

    std::cout << "***************************************";

    return 0;
}