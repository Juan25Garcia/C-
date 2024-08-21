#include <iostream>

int main(){

    for(int i = 1; i<= 20; i++){

        if(i==13){
            continue;   //Este se salta esta iteracion y continua el bucle 
            //break;    //Este para el loop
        }
        std::cout<<i<<'\n';
    }
    
    return 0;
}