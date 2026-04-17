//1. buatlah program pointer 2 dimensi untuk mencetak angka 1-20

#include <iostream>
using namespace std;

int main() {
    int arr[4][5]; 
    int *ptr = &arr[0][0];

    for (int i = 0; i < 20; i++) {
        *(ptr + i) = i + 1;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
