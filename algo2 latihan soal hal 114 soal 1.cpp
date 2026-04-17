#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    int data[n];

    for(int i = 0; i < n; i++) {
        cout << "Data ke-" << i << " : ";
        cin >> data[i];
    }

    int cari;
    cout << "Masukkan data yang dicari: ";
    cin >> cari;

    bool ketemu = false;
    for(int i = n - 1; i >= 0; i--) {
        if(data[i] == cari) {
            cout << "Data ditemukan pada indeks ke-" << i << endl;
            ketemu = true;
            break;
        }
    }

    if(!ketemu) {
        cout << "Data tidak ditemukan!" << endl;
    }

    return 0;
}
