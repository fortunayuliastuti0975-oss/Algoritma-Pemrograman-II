//dari modul

/* Mengurutkan data dengan metode Penyisipan */
#include <iostream>
using namespace std;

#define N 10   /*Jumlah data*/

void InsertionSort(int data[], int n); /* prototype fungsi */

void InsertionSort(int array1[], int n)
{
    int i, j, x;
    bool ketemu;

    for (i = 1; i <= n; i++)
    {
        x = array1[i];
        j = i - 1;
        ketemu = false;

        while ((j >= 0) && (!ketemu))
        {
            if (x < array1[j])
            {
                array1[j + 1] = array1[j];
                j = j - 1;
            }
            else
            {
                ketemu = true;
            }
        }
        array1[j + 1] = x;
    }
}

int main(void)
{
    int i;
    int n = N - 1;
    int data[] = {20,10,32,100,60,12,70,25,45,65};

    cout << "Sebelum diurutkan :" << endl;
    for (i = 0; i <= n; i++)
        cout << data[i] << " ";
    cout << endl;
    cout << "-----------------------------" << endl;

    InsertionSort(data, n);

    cout << "Setelah diurutkan :" << endl;
    for (i = 0; i <= n; i++)
        cout << data[i] << " ";
    cout << endl;

    return 0;
}
