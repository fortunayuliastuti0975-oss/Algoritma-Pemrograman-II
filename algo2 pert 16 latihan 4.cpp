#include<iostream>
using namespace std;
void SeleksiMaksimum(int array[], int n){
    int i, j, tmp, imaks;
    for(i = n; i >= 1; i--){
        imaks = 0;
        for(j = 1; j <= i; j++){
            if(array[j] > array[imaks]){
                imaks = j;
            }
        }
        tmp = array[imaks];
        array[imaks] = array[i];
        array[i] = tmp;
    }
}


int main(){
    int i;
    int n = 9;
    int data[] = {20,10,32,100,60,12,70,25,45,65};
    cout << "Sebelum Di Urutkan :" << endl;
    for(i = 0; i <= n; i++){
        cout << data[i] << " ";
    }
    cout << endl;
    cout << "----------------------------"<< endl;
    SeleksiMaksimum(data, n);
    cout <<"Setelah Diururtkan" << endl;
    for(i = 0; i <= n; i++){
        cout <<data[i] << " ";
    }
    
    cout << endl;
    return 0;
}