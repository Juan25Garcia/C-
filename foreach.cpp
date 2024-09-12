#include <iostream>

int main(){

    std::string estudiantes[] = {"Maria", "Jose", "Ana", "Alex"};

    for(std::string estudiante : estudiantes){
        std::cout<<estudiante << "\n"; 
    }
    return 0;
}