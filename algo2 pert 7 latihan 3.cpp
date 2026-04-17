#include<iostream> 
#include<iomanip> 
using namespace std; 

int main() {
    char A[3][5]= {
        'A','B','C','D','E',
        'F','G','H','I','J',
        'K','L','M','N','O'
    };
    char *P;
    P=A[0];
    for(int i=0; i<3; i++) {
        for (int j=0; j<5; j++)
        cout<<setw(2)<<*P++;
        cout<<endl;
    }
}