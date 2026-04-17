#include <iostream>
using namespace std;

int main() {
    int A[] = {27, 25, 12, 32, 60, 52, 35, 37, 47, 17, 45, 10, 5, 15, 2};
    int n = sizeof(A) / sizeof(A[0]);
    int maxIndex, temp;

    cout << "Data sebelum diurutkan: ";
    for(int i=0; i<n; i++) cout << A[i] << " ";
    cout << endl;

    for(int i=0; i<n-1; i++){
        maxIndex = i;
        for(int j=i+1; j<n; j++){
            if(A[j] > A[maxIndex]) {
                maxIndex = j;
            }
        }
        temp = A[i];
        A[i] = A[maxIndex];
        A[maxIndex] = temp;
    }

    cout << "Data setelah diurutkan (Descending): ";
    for(int i=0; i<n; i++) cout << A[i] << " ";
    cout << endl;

    return 0;
}
