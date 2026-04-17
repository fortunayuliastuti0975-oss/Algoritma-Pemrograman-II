#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("data.txt");
    string cari, line;
    bool ditemukan = false;

    if(!file.is_open()) {
        cout << "File tidak ditemukan!" << endl;
        return 0;
    }

    cout << "Masukkan data yang dicari: ";
    cin >> cari;

    int baris = 0;
    while(getline(file, line)) {
        if(line == cari) {
            cout << "Data ditemukan pada baris ke-" << baris << endl;
            ditemukan = true;
            break;
        }
        baris++;
    }

    if(!ditemukan) {
        cout << "Data tidak ditemukan dalam arsip!" << endl;
    }

    file.close();
    return 0;
}
