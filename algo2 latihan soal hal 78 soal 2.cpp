#include <iostream>
using namespace std;

void deretGenap(int n) {
    if (n == 1) {                // basis
        cout << 2;
    } else {                     // langkah rekursif
        cout << 2 * n << " ";
        deretGenap(n - 1);
    }
}

int main() {
    int n;
    cout << "Masukkan cacah bilangan genap: ";
    cin >> n;

    cout << n << " bilangan genap: ";
    deretGenap(n);
    cout << endl;

    return 0;
}
