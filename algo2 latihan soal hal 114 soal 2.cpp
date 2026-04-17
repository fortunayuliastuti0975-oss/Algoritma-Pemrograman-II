#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("arsip.txt"); // Baca file .txt
    string cari, teks;
    bool ditemukan = false;
    int baris = 0;

    if(!file.is_open()) { // Cek jika file tidak ditemukan
        cout << "File tidak dapat dibuka!" << endl;
        return 0;
    }

    cout << "Masukkan data yang dicari: ";
    cin >> cari;

    // Proses pencarian per baris
    while(getline(file, teks)) {
        if(teks == cari) {
            cout << "Data ditemukan pada baris ke-" << baris << endl;
            ditemukan = true;
            break;
        }
        baris++;
    }

    if(!ditemukan) {
        cout << "Data tidak ditemukan dalam arsip!" << endl;
    }

    file.close(); // Tutup file
    return 0;
}
