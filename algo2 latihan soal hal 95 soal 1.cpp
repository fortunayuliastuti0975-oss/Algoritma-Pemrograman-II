#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    int data[100];
    cout << "Masukkan " << n << " data: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    int cari;
    cout << "Masukkan data yang dicari: ";
    cin >> cari;

    int posisi = -1;
    for (int i = n - 1; i >= 0; i--) {      // mulai dari indeks terbesar
        if (data[i] == cari) {
            posisi = i;
            break;                          // berhenti setelah ketemu
        }
    }

    if (posisi != -1)
        cout << "Data ditemukan pada indeks ke-" << posisi << endl;
    else
        cout << "Data tidak ditemukan" << endl;

    return 0;
}
