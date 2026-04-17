#include <iostream>
using namespace std;

int main() {
    int n, cari;
    
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int data[n];

    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i << " : ";
        cin >> data[i];
    }

    cout << "\nMasukkan nilai yang ingin dicari: ";
    cin >> cari;

    int posisi = -1;

    for (int i = n - 1; i >= 0; i--) {
        if (data[i] == cari) {
            posisi = i;
            break; 
        }
    }

    if (posisi != -1)
        cout << "\nData ditemukan pada indeks ke-" << posisi << endl;
    else
        cout << "\nData tidak ditemukan dalam array.\n";

    return 0;
}
