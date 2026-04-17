#include<iostream>
#include<iomanip> 
using namespace std;

int main() {
    char kalimat[]="Jakarta Kota Metropolitan XYZ";
    char *P, kar;
    P=kalimat;
    cout<<"Kalimat: "<<kalimat<<endl;
    for(int i=0; i<sizeof(kalimat); i++) {
        kar=*P;
        if (kar>='a' && kar<='z') {
            kar+=3;
            if (kar>'z')
            kar=kar-'z'+'a'-1;
        }
        if (kar>='A' && kar<='Z') {
            kar+=3;
            if (kar>'Z')
            kar=kar-'Z'+'A'-1;
        }
        *P++=kar;
    } 
 cout << "Enkript: "<< kalimat; //tampilkan hasil