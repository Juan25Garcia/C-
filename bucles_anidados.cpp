#include <iostream>

int main(){

    int filas;
    int columnas;
    char simbolo;

    std::cout << "Filas: ";
    std::cin >> filas;

    std::cout << "Columnas: ";
    std::cin >> columnas;

    std::cout << "Simbolo: ";
    std::cin >> simbolo;

    for(int i =1; i<= filas; i++){
        for(int j = 1; j <= columnas; j++){
            std::cout << simbolo << " "; 
        }
        std::cout << '\n';
    }

    return 0;
}