#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {{10, 20, 30}, {40, 50, 60}};
    int (*ptr)[3] = arr;  

    cout << "Isi array 2 dimensi melalui pointer:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << *(*(ptr + i) + j) << " ";  
        }
        cout << endl;
    }

    return 0;
}
