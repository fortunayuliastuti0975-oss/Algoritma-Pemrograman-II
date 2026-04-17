#include <iostream>
using namespace std;

long long pangkat(long long x, long long y) {
    if (y == 0)              // basis
        return 1;
    else                     // langkah rekursif
        return x * pangkat(x, y - 1);
}

int main() {
    long long x, y;
    cout << "Masukkan x: ";
    cin >> x;
    cout << "Masukkan y: ";
    cin >> y;

    cout << x << " pangkat " << y << " adalah " << pangkat(x, y) << endl;
    return 0;
}
