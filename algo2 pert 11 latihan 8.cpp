#include <iostream> 
using namespace std; 

int angka=50; ; // variabel global 
void f1() {
    angka = 44;  // nilai variabel global diubah
    cout << "Dalam f1, angka = " << angka << endl;
}

int main() {
    cout << "Dalam main, angka = " << angka << endl;
    f1();
    cout << "Dalam main, angka = " << angka << endl;
} 