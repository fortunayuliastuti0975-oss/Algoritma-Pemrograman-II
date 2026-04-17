#include <iostream>
using namespace std;

int main() {
    int A[] = {12, 15, 7, 10, 25, 2, 17, 25, 5, 20};
    int n = sizeof(A) / sizeof(A[0]);
    int maxIndex, temp;

    cout << "Data sebelum diurutkan: ";
    for(int i=0; i<n; i++) cout << A[i] << " ";
    cout << endl;

    for(int i=n-1; i>0; i--){
        maxIndex = 0;
        for(int j=1; j<=i; j++){
            if(A[j] > A[maxIndex]) {
                maxIndex = j;
            }
        }
        temp = A[i];
        A[i] = A[maxIndex];
        A[maxIndex] = temp;
    }

    cout << "Data setelah diurutkan (Ascending): ";
    for(int i=0; i<n; i++) cout << A[i] << " ";
    cout << endl;

    return 0;
}
