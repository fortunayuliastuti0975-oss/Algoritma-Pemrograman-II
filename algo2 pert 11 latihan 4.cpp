#include <iostream> 
using namespace std; 
int main(){ 
    
int i;  // dideklarasikan di luar blok
for (i=0; i<10; i++){ 
 
cout << i << " "; 
}

cout << i;  // BENAR !
} 