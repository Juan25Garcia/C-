#include <iostream>
#include <iomanip>

void mostrarSaldo(double saldo);
double deposito();
double retirar(double saldo); 

int main(){

    double saldo = 0;
    int opc = 0;

    do{
        std::cout << "*********************\n";
        std::cout<< "Ingrese una opcion: \n";
        std::cout << "*********************\n";
        std::cout << "1. Mostrar saldo\n";
        std::cout << "2. Depositar dinero\n";
        std::cout << "3. Retirar dinero\n";
        std::cout << "4. Salir\n";
        std::cin >> opc;

        switch(opc){
            case 1:
                mostrarSaldo(saldo);
                break;
            case 2:
                saldo += deposito();
                mostrarSaldo(saldo);
                break;
            case 3:
                saldo -= retirar(saldo);
                mostrarSaldo(saldo);
                break;
            case 4:
                std::cout << "Gracias por su visita!\n";
                break;
            default:
                std::cout << "Eleccion no valida\n";
        }

    }while(opc != 4); 

    return 0;

}


void mostrarSaldo(double saldo){
    std::cout<< "Su saldo es: $" << std::setprecision(2) << saldo << "\n"; 
}

double deposito(){
    double monto = 0;
    std::cout << "Ingrese el monto a depositar: ";
    std::cin >> monto;

    if(monto > 0){
        return monto;
    }
    else{
        return 0; 
    }
}

double retirar(double saldo){
    double monto = 0;
    std::cout << "Ingrese el monto a retirar: ";
    std::cin >> monto;

    if(monto > saldo){
        std::cout << "Fondos insuficientes\n";
        return 0;
    }
    else if(monto < 0){
        std::cout << "Esa no es una cantidad valida\n";
        return 0; 
    }
    else{
        return monto; 
    }
}