//halaman 159

#include <stdio.h>
#include <stdbool.h>

#define N 8  // Banyaknya data

void PengurutanSisipan(int data[], int n, int mulai, int melangkah);
void PengurutanShell(int data[], int n);

int main(void)
{
    int i, n = N - 1;
    int data[] = {36, 2, 5, 31, 40, 4, 7, 3};

    printf("Sebelum diurutkan:");
    for (i = 0; i <= n; i++)
        printf(" %i", data[i]);

    PengurutanShell(data, n);

    printf("\nSetelah diurutkan:");
    for (i = 0; i <= n; i++)
        printf(" %i", data[i]);

    return 0;
}

void PengurutanShell(int data[], int n)
{
    int mulai, melangkah;
    for (melangkah = 4; melangkah >= 1; melangkah -= 2)
    {
        for (mulai = 0; mulai <= melangkah; mulai++)
            PengurutanSisipan(data, n, mulai, melangkah);
    }
}

void PengurutanSisipan(int data[], int n, int mulai, int melangkah)
{
    int i, j, x;
    bool ketemu;

    i = mulai + melangkah;
    while (i <= n)
    {
        x = data[i];
        j = i - melangkah;
        ketemu = false;

        while ((j >= 0) && (!ketemu))
        {
            if (x < data[j])
            {
                data[j + melangkah] = data[j];
                j -= melangkah;
            }
            else
            {
                ketemu = true;
            }
        }
        data[j + melangkah] = x;
        i += melangkah;
    }
}
