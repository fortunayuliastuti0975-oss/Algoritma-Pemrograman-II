#include <iostream>
using namespace std;

int pangkatDua(int x) {
    return x * x;
}

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;

    int hasil = pangkatDua(angka);
    cout << "Hasil pangkat dua dari " << angka << " adalah " << hasil << endl;

    return 0;
}
