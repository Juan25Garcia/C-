#include <iostream>

int main(){

    std::string nombre;
    char pos; 
    nombre = "Alex programa";

    //nombre.length();
    //nombre.empty();
    //nombre.clear();
    //nombre.append("garcia"); 
    //nombre.find("programa");
    //nombre.erase(5,8); 
    pos = nombre.at(0);
    std::cout << pos;
    nombre.insert(3, "yyyy");
    std::cout << nombre;  



    return 0;
}