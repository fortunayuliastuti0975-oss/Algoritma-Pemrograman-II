#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const double BUNGA = 0.06; // Variabel global bunga 6%

void HitungBunga(double saldo[], double saldoBaru[], int n) {
    for(int i = 0; i < n; i++) {
        saldoBaru[i] = saldo[i] * (1 + BUNGA);
    }
}

int main() {
    string Akun[5] = {"A001", "A002", "A003", "A004", "A005"};
    double Saldo[5] = {1000000, 2000000, 1500000, 3000000, 2500000};
    double SaldoBaru[5];

    HitungBunga(Saldo, SaldoBaru, 5);

    cout << fixed << setprecision(0);
    cout << "Akun\tSaldo Awal\tSaldo Baru" << endl;
    cout << "----------------------------------------" << endl;

    for(int i = 0; i < 5; i++) {
        cout << Akun[i] << "\t" << Saldo[i] << "\t\t" << SaldoBaru[i] << endl;
    }

    return 0;
}
