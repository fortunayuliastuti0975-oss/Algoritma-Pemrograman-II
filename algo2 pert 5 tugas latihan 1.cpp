#include <iostream>
using namespace std;

int main (){

  char huruf[]= "ABCDEFGHIJ";
  char *ptr = huruf;


  for(int a= 0; a <11; a++){ 
    cout <<"Pointer Dari (" <<  a << ") "<<"Adalah = " << *(ptr + a) << endl;
  } 
    return 0;
} 