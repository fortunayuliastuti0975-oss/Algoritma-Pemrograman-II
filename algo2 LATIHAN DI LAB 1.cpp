// halaman 149
// Buatlah pengurutan sisipan (insert sort) dalam mengurutkan jumlah dan ukuran 
// sepatu yang di dispay (dengan jumlah dan ukuran sepatu silahkan tentukan 
// sendiri). 

#include <iostream>
#include <vector>

using namespace std;

struct Sepatu {
    int jumlah;
    int ukuran;
};

void insertionSort(vector<Sepatu>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        Sepatu key = arr[i];
        int j = i - 1;
        
        // Urutkan berdasarkan jumlah terlebih dahulu, jika sama urutkan berdasarkan ukuran
        while (j >= 0 && (arr[j].jumlah > key.jumlah || 
               (arr[j].jumlah == key.jumlah && arr[j].ukuran > key.ukuran))) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    vector<Sepatu> sepatu = {
        {10, 42},
        {5, 40},
        {10, 41},
        {7, 43},
        {5, 38}
    };

    insertionSort(sepatu);

    cout << "Daftar sepatu setelah pengurutan (jumlah, ukuran):\n";
    for (auto& s : sepatu) {
        cout << "Jumlah: " << s.jumlah << ", Ukuran: " << s.ukuran << "\n";
    }

    return 0;
}
