//3. buatlah program yang mencari satu karakter dalam string 
// :ketentuan karakter yanng dicari diminta masukan dari pengguna di tampilkan " huruf yang dicari ada di posisi x "" dengan x sebagai index huruf tersebut dalam kalimat jika huruf tidak ditemukandi tampilkan "huruf tidak ada dalam kalimat"

#include <iostream>
using namespace std;

int main() {
    string kalimat;
    char cari;
    int pos = -1;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    cout << "Masukkan huruf yang dicari: ";
    cin >> cari;

    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == cari) {
            pos = i;
            break;
        }
    }

    if (pos != -1) {
        cout << "Huruf yang dicari ada di posisi " << pos << endl;
    } else {
        cout << "Huruf tidak ada dalam kalimat" << endl;
    }
    return 0;
}
