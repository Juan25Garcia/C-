#include <iostream>
#include <cmath> 

int main() {
    double x = 8;
    double y = 15;
    double z;

    z = std::max(x, y);
    std::cout << "Max: " << z << std::endl;

    z = std::min(x, y);
    std::cout << "Min: " << z << std::endl;

    z = std::pow(2, 3);
    std::cout << "Pow: " << z << std::endl;

    z = std::sqrt(25);
    std::cout << "Sqrt: " << z << std::endl;

    z = std::abs(-150);
    std::cout << "Abs: " << z << std::endl;

    z = std::round(3.35);
    std::cout << "Round: " << z << std::endl;

    z = std::ceil(4.8);
    std::cout << "Round Upper" << z << std::endl; 

    return 0;
}
