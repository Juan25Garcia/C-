#include <iostream> 

int miNumero = 3;

void mostrarNum(); 

int main(){

    int miNumero = 1;
    std::cout << ::miNumero<< "\n";   // Accedemos a la variable Global por los ::
    mostrarNum();

    return 0;
}


void mostrarNum(){
    int miNumero = 2;
    std::cout << miNumero;      // Accedemos a la variable Local por que no tiene los ::

}