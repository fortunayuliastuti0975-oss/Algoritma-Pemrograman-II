#include <iostream>
using namespace std;

int main() {
    int A=25;
    int* pA;
    pA=&A;
    cout<<"A= "<<A<<endl;
    cout<<"*pA="<<*pA<<endl;
    A=35;
    cout<<"A="<<A<<endl;
    cout<<"pA="<<*pA<<endl;
    *pA+=10;
    cout<<"A="<<A<<endl;
    cout<<"*pA="<<*pA<<endl;
    return 0;
}