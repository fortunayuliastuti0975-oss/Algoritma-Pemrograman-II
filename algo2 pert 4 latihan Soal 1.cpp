#include <iostream>
using namespace std;

int main() {
    int panjang=25, lebar=11, A=10;
    int* pA;
    pA= &panjang;
    cout<< "Nilai= "<<*pA<<endl;
    pA= &lebar;
    cout<<"Nilai= "<<*pA<<endl;
    pA= &A;
    cout<<"Nilai= "<<*pA<<endl;
    A=panjang * lebar;
    cout<<"Nilai= "<<*pA<<endl;
    return 0;
}