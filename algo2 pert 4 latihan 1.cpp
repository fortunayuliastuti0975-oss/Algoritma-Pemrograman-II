#include <iostream>
using namespace std;

int main() {
    int NilaiUjian = 75;
    int *pNilai;
    pNilai=&NilaiUjian;
    cout<<&pNilai<<endl;
    cout<<pNilai<<endl;
    cout<< *pNilai<<endl;

    return 0;
}