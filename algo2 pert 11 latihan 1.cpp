#include <iostream> 
#include <math.h>      // prototipe fungsi math 
using namespace std; 
#define PI 3.14159265  // definisi PI 

void judul(); 
int main() { 
    double rad;   // menyimpan nilai radian 
    int sudut=10; // inisialisasi sembarang nilai > 0 
    while (sudut > 0) { // berulang jika sudut > 0 
        judul();   // tampilkan judul 
        cout << "Masukkan sudut (0 untuk berhenti): ";
        cin >> sudut; // masukan sudut 
        if (sudut <= 0) break; // berhenti 
        // parameter harus dengan satuan radian. 
        // sudut derajat dikonversi ke radian
        rad = (double)sudut * PI / 180;
        // menampilkan sin, cos, tan
        // dengan built-in function di math.h
        cout << "Sinus  : " << sin(rad) << endl;
        cout << "Cosinus: " << cos(rad) << endl; 
        cout << "Tangen : " << tan(rad) << endl;
        cout << endl; 
    }
    cout << "Keluar program"<< endl; 
}

void judul() { 
    char bintang[]="*****************************";
    cout << bintang << endl;
    cout<<"Hitung sinus, cosinus, tangen"<<endl;
    cout<<"dengan built-in function C++"<<endl;
    cout << bintang << endl << endl;
}