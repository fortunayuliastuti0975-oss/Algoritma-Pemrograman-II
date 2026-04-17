#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int data[] = {6, 9, 8, 12, 34, 5, 17};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Data sebelum diurutkan: ";
    for (int i = 0; i < n; i++)
        cout << data[i] << " ";

    selectionSort(data, n);

    cout << "\nData setelah diurutkan: ";
    for (int i = 0; i < n; i++)
        cout << data[i] << " ";

    return 0;
}
