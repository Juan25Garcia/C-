#include <iostream>

int main(){
    char notas[] = {'A', 'B', 'C', 'D', 'F'};
    int tamano = sizeof(notas) / sizeof(char);

    for(int i = 0; i < tamano; i++){
        std::cout << notas[i] << '\n'; 
    }

    return 0; 
}