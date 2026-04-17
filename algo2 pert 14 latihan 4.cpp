#include <iostream>
using namespace std;

#define jmlDat 8

void BinSearch(int Data[], int n, int x, int *idx);

int main() {
    int Data[jmlDat] = {81, 76, 21, 18, 16, 13, 10, 7};
    int x, idx;

    // Menampilkan elemen array
    cout << "Elemen Array: ";
    for(int i = 0; i < jmlDat; i++) {
        cout << Data[i] << " ";
    }
    cout << endl;

    // Input data yang dicari
    cout << "Masukkan data yang akan dicari: ";
    cin >> x;

    // Pemanggilan binary search
    BinSearch(Data, jmlDat, x, &idx);

    // Output hasil pencarian
    if(idx != -1)
        cout << "Data yang dicari berada pada indeks: " << idx << endl;
    else
        cout << "Data yang dicari TIDAK ada dalam array." << endl;

    return 0;
}

void BinSearch(int Data[], int n, int x, int *idx) {
    bool ketemu = false;
    int top = n - 1, bottom = 0, mid;

    while(bottom <= top && !ketemu) {
        mid = (top + bottom) / 2;

        if(Data[mid] == x) {
            ketemu = true;
        } else {
            if(Data[mid] > x)
                top = mid - 1;
            else
                bottom = mid + 1;
        }
    }

    if(ketemu)
        *idx = mid;   // Data ditemukan
    else
        *idx = -1;    // Data tidak ditemukan
}
