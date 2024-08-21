#include <iostream>
#include <ctime>

int main(){

    srand(time(0));

    int randNum = rand()%5+1;

    switch(randNum){
        case 1:
            std::cout<< "Ganaste una calcomania \n";
            break; 
        
        case 2:
            std::cout<< "Ganaste una camiseta \n";
            break; 
        
        case 3:
            std::cout<< "Ganaste una cena \n";
            break; 

        case 4:
            std::cout<< "Ganaste una tarjeta \n";
            break; 
        
        case 5:
            std::cout<< "Ganaste una entrada para feid \n";
            break; 
        

    }



    return 0;
}