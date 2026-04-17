//2. buatlah program pointer untuk mencetak string

#include <iostream>
using namespace std;

int main() {
    char *ptr;
    char str[] = "Quiz algoritma dan pemrograman 2 di pertemuan 8";
    ptr = str;

    while (*ptr != '\0') {
        cout << *ptr;
        ptr++;
    }
    cout << endl;
    return 0;
}
