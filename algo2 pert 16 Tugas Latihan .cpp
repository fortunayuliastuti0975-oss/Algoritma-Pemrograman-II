#include <iostream>
using namespace std;

int main() {
    int A[10] = {12, 15, 7, 10, 25, 2, 17, 25, 5, 20};
    int n = 10;
    
    // Proses pengurutan menggunakan metode maksimum
    for (int i = n - 1; i >= 1; i--) {
        int maxIndex = 0;
        for (int j = 1; j <= i; j++) {
            if (A[j] > A[maxIndex]) {
                maxIndex = j;
            }
        }
        // Tukar nilai maksimum dengan elemen terakhir dalam area yang belum terurut
        int temp = A[maxIndex];
        A[maxIndex] = A[i];
        A[i] = temp;
    }

    cout << "Data setelah diurutkan secara menaik:\n";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
