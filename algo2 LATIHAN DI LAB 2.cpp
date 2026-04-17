// Halaman 161
// Buatlah pengurutan shell (shell sort) dalam memilih kendaraan bermotor dari 
// harga termurah sampai harga termahal (dengan harga silahkan tentukan 
// sendiri).  


#include <iostream>
#include <string>
using namespace std;

void shellSort(string nama[], int harga[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {

            int tempHarga = harga[i];
            string tempNama = nama[i];

            int j = i;
            while (j >= gap && harga[j - gap] > tempHarga) {
                harga[j] = harga[j - gap];
                nama[j] = nama[j - gap];
                j -= gap;
            }

            harga[j] = tempHarga;
            nama[j] = tempNama;
        }
    }
}

int main() {
    string nama[] = {"Motor A", "Mobil B", "Motor C", "Mobil D", "Motor E"};
    int harga[]   = {15,        120,       10,        95,        20};
    int n = 5;

    cout << "Sebelum diurutkan:\n";
    for (int i = 0; i < n; i++) {
        cout << nama[i] << " - Rp " << harga[i] << " juta\n";
    }

    shellSort(nama, harga, n);

    cout << "\nSetelah diurutkan dari termurah ke termahal:\n";
    for (int i = 0; i < n; i++) {
        cout << nama[i] << " - Rp " << harga[i] << " juta\n";
    }

    return 0;
}
