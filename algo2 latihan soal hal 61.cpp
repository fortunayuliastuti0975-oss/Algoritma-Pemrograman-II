#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100], hasil[200];

    cout << "Masukkan string pertama : ";
    cin.getline(str1, 100);

    cout << "Masukkan string kedua   : ";
    cin.getline(str2, 100);

    // strcpy
    strcpy(hasil, str1);
    cout << "\nHasil strcpy (copy str1 ke hasil): " << hasil << endl;

    // strcmp
    int banding = strcmp(str1, str2);
    if (banding == 0)
        cout << "str1 dan str2 sama." << endl;
    else if (banding < 0)
        cout << "str1 lebih kecil dari str2." << endl;
    else
        cout << "str1 lebih besar dari str2." << endl;

    // strlen
    cout << "Panjang str1: " << strlen(str1) << endl;
    cout << "Panjang str2: " << strlen(str2) << endl;

    // strcat dengan spasi
    strcat(hasil, " ");
    strcat(hasil, str2);
    cout << "Hasil strcat (str1 + str2): " << hasil << endl;

    return 0;
}
