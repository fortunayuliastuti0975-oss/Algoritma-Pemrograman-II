#include <iostream>
using namespace std;

int main() {
    int panjang=25;
    int* pA, *pB;
    pA = &panjang;
    cout << "Nilai: " << *pA << endl;
    pB = &panjang;
    cout << "Nilai: " << *pB << endl;

    return 0;
}