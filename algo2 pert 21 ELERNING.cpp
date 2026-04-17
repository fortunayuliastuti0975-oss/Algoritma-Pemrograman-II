#include <stdio.h>
#include <stdlib.h>

struct Mahasiswa {
    int nim;
    char nama[30];
    float ipk;
};

int main() {
    FILE *fp;
    struct Mahasiswa mhs;
    int pilih, posisi;

    fp = fopen("data.dat", "rb+");
    if (fp == NULL) {
        fp = fopen("data.dat", "wb+"); // jika file belum ada
    }

    do {
        printf("\nMENU");
        printf("\n1. Tambah Data");
        printf("\n2. Baca Data (Random)");
        printf("\n3. Keluar");
        printf("\nPilih: ");
        scanf("%d", &pilih);

        if (pilih == 1) {
            printf("NIM   : ");
            scanf("%d", &mhs.nim);
            printf("Nama  : ");
            scanf(" %[^\n]", mhs.nama);
            printf("IPK   : ");
            scanf("%f", &mhs.ipk);

            fseek(fp, 0, SEEK_END); // pindah ke akhir file
            fwrite(&mhs, sizeof(mhs), 1, fp);
            printf("Data berhasil disimpan.\n");
        }
        else if (pilih == 2) {
            printf("Data ke- (mulai dari 1): ");
            scanf("%d", &posisi);

            fseek(fp, (posisi - 1) * sizeof(mhs), SEEK_SET);
            fread(&mhs, sizeof(mhs), 1, fp);

            if (feof(fp)) {
                printf("Data tidak ditemukan.\n");
            } else {
                printf("\nNIM  : %d", mhs.nim);
                printf("\nNama : %s", mhs.nama);
                printf("\nIPK  : %.2f\n", mhs.ipk);
            }
        }

    } while (pilih != 3);

    fclose(fp);
    return 0;
}
