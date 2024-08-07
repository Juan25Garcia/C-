#include <iostream>

int main(){

    int mes;
    std::cout << "ingresa el mes (1-12): ";
    std::cin >> mes;

    switch(mes){
        case 1:
            std::cout << "Es Enero";
            break; 
        case 2:
            std::cout << "Es Febrero";
            break; 
        case 3:
            std::cout << "Es Marzo";
            break; 
        case 4:
            std::cout << "Es Abril";
            break; 
        case 5:
            std::cout << "Es Mayo";
            break; 
        case 6:
            std::cout << "Es Junio";
            break; 
        case 7:
            std::cout << "Es Julio";
            break; 
        case 8:
            std::cout << "Es Agosto";
            break; 
        case 9:
            std::cout << "Es Septiembre";
            break; 
        case 10:
            std::cout << "Es Octubre";
            break; 
        case 11:
            std::cout << "Es Noviembre";
            break; 
        case 12:
            std::cout << "Es Diciembre";
            break; 
        default:
            std::cout << "Por favor ingresa solo numeros del 1 al 12"; 
    }


    return 0;
}