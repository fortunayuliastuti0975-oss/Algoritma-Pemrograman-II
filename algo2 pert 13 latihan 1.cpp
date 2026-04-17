#include <iostream> 
using namespace std; 

int genap(int);   // prototipe
int main() {
    int k=8;
    cout << "Genap ke " << k << " adalah " << genap(k);
}

int genap(int n) {
    if (n==1) return 0;    // basis
    return 2 + genap(n-1); // rekurens
    }