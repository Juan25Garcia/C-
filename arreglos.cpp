#include <iostream>

int main(){

    std::string automoviles[] = {"Audi", "BMW", "Mercedes Benz"};

    automoviles[0] = "Camaro";

    std::cout << automoviles[0] << '\n';
    std::cout << automoviles[1] << '\n';
    std::cout << automoviles[2] << '\n';

    return 0;
}