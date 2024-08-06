#include <iostream>

namespace primero {
    int x =1;
}

namespace segundo {
    int x =2;
}


int main(){
    int x = 0; 
    std::cout<<"x = "<<segundo::x;
    using namespace primero;
    std::cout<<"x = "<<primero::x;
    using namespace std;
    cout<<"x = "<<primero::x;


    return 0;
}