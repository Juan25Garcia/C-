#include <iostream>

int main(){

    // Simulador de examen

    int Pcorrecta = 8;
    int Ptotal = 10;

    double puntaje = Pcorrecta / (double)Ptotal*100;

    std::cout<<puntaje<<"%"; 

    return 0; 
}