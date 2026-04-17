#include<iostream>
using namespace std;

int main() {
    char kalimat[]=
    {"Universitas Pamulang di Tangerang Selatan"};
    char *p=kalimat;
    for (int i=0; i<sizeof(kalimat); i++){
        if (i>=12 && i<=27) cout << *p;
        p++;
    }
}