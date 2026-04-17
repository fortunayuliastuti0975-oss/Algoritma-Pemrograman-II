#include <iostream>
using namespace std;

int main() {
    int i; //dideklarasikan diluar blok
    for (i = 0; i < 10; i++) {
        cout << i << " ";
    }
    cout << i;  //Benar
}