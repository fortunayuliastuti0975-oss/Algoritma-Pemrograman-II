#include <iostream>
using namespace std;

int main(void) {
    int *pTgl;
    int tglLahir[]={19,4,1980};
    pTgl=tglLahir;

    for(int i=1;i<=3; i++) {
        cout << *pTgl << endl;
        pTgl++;
    }
    cout <<endl;
    pTgl=&tglLahir[0];
    cout<< *pTgl << endl;
    cout<< *(pTgl+1) << endl;
    cout<< *(pTgl+2) << endl;
}