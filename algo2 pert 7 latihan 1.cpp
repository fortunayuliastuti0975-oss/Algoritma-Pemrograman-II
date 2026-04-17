#include <iostream>
using namespace std;

int main() {
    char A[3][5]={
        'A','B','C','D',
        'E','F','G','H',
        'I','J','K','L'
    };
    char *P;
    P=&A[0][0];
    cout<<*P;
    P=&A[1][3];
    cout<< *P;

    return 0;
}