//Halaman 215
//1. Susunlah program seperti dibawah ini: 
//a. Menginput 3 buah nama kota dan merekam ke file “kota.txt”. misalkan: 
//BANDUNG 
//ACEH 
//BANTEN 
//b. Membaca file “kota.txt dan mencetak isinya sehingga tercetak: 
//BANDUNG 
//ACEH 
//BANTEN 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream fileOut;
    ifstream fileIn;
    string kota;

    // ====== Menulis ke file ======
    fileOut.open("kota.txt");
    if (!fileOut) {
        cout << "Gagal membuka file untuk menulis!" << endl;
        return 1;
    }

    cout << "Masukkan 3 nama kota:\n";
    for (int i = 1; i <= 3; i++) {
        cout << "Kota ke-" << i << " : ";
        getline(cin, kota);
        fileOut << kota << endl;
    }
    fileOut.close();

    // ====== Membaca dari file ======
    fileIn.open("kota.txt");
    if (!fileIn) {
        cout << "Gagal membuka file untuk membaca!" << endl;
        return 1;
    }

    cout << "\nIsi file kota.txt:\n";
    while (getline(fileIn, kota)) {
        cout << kota << endl;
    }
    fileIn.close();

    return 0;
}
