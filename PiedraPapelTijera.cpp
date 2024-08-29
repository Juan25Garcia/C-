#include <iostream>

char eleccionUsuario();
char eleccionComputadora();
void mostrarEleccion(char eleccion);
void elegirGanador(char jugador, char computadora); 

int main(){

    char jugador;
    char computadora;
    jugador = eleccionUsuario();
    std::cout << "Jugador: ";
    mostrarEleccion(jugador);
    computadora = eleccionComputadora(); 
    std::cout << "computadora: ";
    mostrarEleccion(computadora);
    elegirGanador(jugador, computadora); 

    return 0; 
}

char eleccionUsuario(){

    char jugador;
    std::cout << "***************************\n"; 
    std::cout << "Roca-Papel-Tijera | Jugador\n";
    std::cout << "***************************\n";
    do{
        std::cout << "'r' para roca\n";
        std::cout << "'p' para papel\n";
        std::cout << "'t' para tijera\n";
        std::cout << "Elige uno: ";
        std::cin >> jugador;
    }while(jugador != 'r' && jugador != 'p' && jugador != 't'); 
    return jugador; 
}


char eleccionComputadora(){
    srand(time(0));
    int num = rand() % 3 +1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 't';
    }

    return 0;
}


void mostrarEleccion(char eleccion){
    switch(eleccion){
        case 'r':
            std::cout<<"Roca\n";
            break;
        case 'p':
            std::cout<<"Papel\n";
            break;
        case 't':
            std::cout<<"Tijeras\n";
            break;

    }
}


void elegirGanador(char jugador, char computadora){
    switch(jugador){
        case 'r':
            if(computadora == 'r'){
                std::cout << "Empaten\n";
            }
            else if(computadora == 'p'){
                std::cout << "Perdiste\n";
            }
            else{
                std::cout << "Ganaste\n";
            }
            break; 
        case 'p':
            if(computadora == 'r'){
                std::cout << "Ganaste\n";
            }
            else if(computadora == 'p'){
                std::cout << "Empaten\n";
            }
            else{
                std::cout << "Perdiste\n";
            }
            break; 
        case 't':
            if(computadora == 'r'){
                std::cout << "Perdiste\n";
            }
            else if(computadora == 'p'){
                std::cout << "Ganaste\n";
            }
            else{
                std::cout << "Empaten\n";
            }
            break; 
    }

}