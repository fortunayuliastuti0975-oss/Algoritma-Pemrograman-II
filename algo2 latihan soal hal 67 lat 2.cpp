#include <iostream>
#include <iomanip>

const double PI = 3.14159265; // Konstanta global PI

int main() {
    double jariJari;
    
    std::cout << "Masukkan jari-jari lingkaran: ";
    std::cin >> jariJari;
    
    double luas = PI * jariJari * jariJari;
    double keliling = 2 * PI * jariJari;
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Luas lingkaran: " << luas << std::endl;
    std::cout << "Keliling lingkaran: " << keliling << std::endl;
    
    return 0;
}
