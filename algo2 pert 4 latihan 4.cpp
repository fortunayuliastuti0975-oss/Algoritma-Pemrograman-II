#include <iostream>
using namespace std;

int main() {
    string makanan="Bakso"; //tipe string
    string* ptr = &makanan; //variabel pointer
    cout<< makanan<<endl; //tampilkan nilai
    cout<<*ptr<<endl; //tampilkan nilai
    cout<<&makanan<<endl; //tampilkan nilai
    cout<<ptr<<endl; //tampilkan alamat

    return 0;
}