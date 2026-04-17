#include<iostream>
    using namespace std;

    void BubbleShort( int array1[], int n){
        int i, k ,temp;
        for(i = 0; i <=n; i++){
            for(k=n ;k > i; k--){
                if(array1[k] < array1[k-1]){
                    temp = array1[k];
                    array1[k] = array1[k-1];
                    array1[k-1] = temp;
                }
            }
        }
    }

    int main(){
        int i;
        int n = 9;
        int data[] ={100,90,80,70,60,50,40,30,20,10};
        cout << "Data Sebelum Di Urutkan : " << endl;
        for(i = 0; i <= n; i++){
            cout << data [i] << " ";
        }
        cout << endl;
        cout << "-------------------------------------------" << endl;

        BubbleShort(data,n);
        cout << "Setelah Diurutkan" << endl;
        for(i =0; i <=n; i++){
            cout << data[i] << " ";
        }
        cout << endl;
        return 0;
    }