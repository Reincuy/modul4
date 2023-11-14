#include <stdio.h>

int main() {
    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        int P;
        printf("Masukkan Pilihan: ");
        scanf("%d", &P);

        if (P == 5) {
            printf("Terimakasih, telah menggunakan kalkulator M Samil Rendy Nor Saleh\n");
            break;
        } else if (P < 1 || P > 4) {
            printf("Input anda salah, silahkan coba lagi\n");
            continue;
        }

        float angka1, angka2;
        printf("Masukkan nilai pertama: ");
        scanf("%f", &angka1);
        printf("Masukkan nilai kedua: ");
        scanf("%f", &angka2);

        float H;
        if (P == 1) {
            H = angka1 + angka2;
            printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n", angka1, angka2, H);
        } else if (P == 2) {
            H = angka1 - angka2;
            printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", angka1, angka2, H);
        } else if (P == 3) {
            H = angka1 * angka2;
            printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", angka1, angka2, H);
        } else if (P == 4) {
            if (angka2 == 0) {
                printf("Pembagian dengan 0 tidak diizinkan.\n");
                continue;
            }
            H = angka1 / angka2;
            printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", angka1, angka2, H);
        }
    }

    return 0;
}
