#include <iostream>

int main(){

    int numero;

    do{
        std::cout << "Ingresa un numero positivo: ";
        std::cin >> numero;
    }while(numero < 0);

    std::cout << "El numero es: " << numero; 
    return 0;
}