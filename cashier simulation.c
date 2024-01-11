#include <stdio.h>

#define MAX_BUKU 100

typedef struct {
    int id;
    char nama[50];
    int jumlah;
    int harga;
} Buku;

int main() {
    Buku buku[MAX_BUKU];
    int total_harga = 0;
    int max_harga = 0;
    float rata_rata = 0;
    int i, jumlah;
        printf(" Program Menghitung Hasil Belanja\n ");
        printf(" ________________________________\n ");
        printf(" list Belanjaang: \n ");
        printf(" 1. Buku Pemrograman Dasar \n ");
        printf(" 2. Buku Web Design \n ");
        printf(" 3. Buku Analisis Algoritma \n ");
    for (i = 0; i < MAX_BUKU; i++) {
        printf("Masukkan nomor pesanan (0 untuk berhenti): ");
        scanf("%d", &buku[i].id);

        if (buku[i].id == 0) {
            break;
        }
        printf("Masukkan nama buku: ");
        scanf("%s", buku[i].nama);

        printf("Masukkan jumlah buku: ");
        scanf("%d", &buku[i].jumlah);

        printf("Masukkan harga buku: ");
        scanf("%d", &buku[i].harga);

        total_harga = buku[i].harga * buku[i].jumlah;

        if (buku[i].harga > max_harga) {
            max_harga = buku[i].harga;
        }

        printf("--------------------------------\n");
    }

    rata_rata = (float)total_harga / MAX_BUKU;

    printf("Harga Buku Maksimum: %d\n", max_harga);
    printf("Total Harga: %d\n", total_harga);
    printf("Nilai-Rata = %.2f\n", rata_rata);

    return 0;
}

