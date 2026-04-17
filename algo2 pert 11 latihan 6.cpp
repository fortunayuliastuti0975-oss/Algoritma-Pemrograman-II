#include <iostream> 
using namespace std;

void f1() { 
int angka = 44;  //variabel lokal di fungsi f1 
cout << "Dalam f1, angka = " << angka << endl; 
} 

int main() { 
    int angka = 35; //variabel lokal di fungsi main 
    cout << "Dalam main, angka = " << angka << endl; 
    f1();
    cout << "Dalam main, angka = " << angka << endl; 
} 