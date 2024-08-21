#include <iostream>
#include <ctime>

int main(){

    int num;
    int adivinar;
    int intentos;

    srand(time(NULL));

    num = rand() % 100+1;

    std::cout << "Adivina el numero\n";

    do{
        std::cout << "Ingresa un numero entre 1 y 100: ";
        std::cin >> adivinar; 
        intentos++;

        if(adivinar > num){
            std::cout << "mas bajo\n";
        }
        else if(adivinar < num){
            std::cout << "mas alto\n";
        }
        else{
            std::cout << "CORRECTO. intentos: " << intentos << '\n'; 
        }

    }while (num != adivinar);
    
    return 0; 
}