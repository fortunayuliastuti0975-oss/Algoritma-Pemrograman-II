#include <iostream>
using namespace std;

int main() {
    int data[] = {27, 25, 12, 32, 60, 52, 35, 37, 47, 17, 45};
    int n = sizeof(data) / sizeof(data[0]);
    int temp;

    cout << "Data sebelum diurutkan: ";
    for(int i=0; i<n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    // Bubble Sort
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(data[j] > data[j+1]) {
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }

    cout << "Data setelah diurutkan (Ascending): ";
    for(int i=0; i<n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}
