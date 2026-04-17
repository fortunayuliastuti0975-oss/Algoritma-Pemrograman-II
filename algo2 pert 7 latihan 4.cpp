#include <iostream>
using namespace std;

int main() {
    int arr[3][4];
    int *pA=arr[0];
    for (int i=0; i<3; i++)
    for (int j=0; j<4; j++)
    cout<<"arr["<<i<<"]["<<j<<"] = "<<pA++<<endl;
}