#include <stdio.h>

int main() {
    int angka1, angka2;

    printf("");
    scanf("%d %d", &angka1, &angka2);

    int terbesar = (angka1 > angka2) ? angka1 : angka2;
    int terkecil = (angka1 < angka2) ? angka1 : angka2;

    if (angka1 > angka2) {
        for (int i = terbesar; i >= terkecil; i--) {
            printf("%d %d", i, angka1 + angka2 - i);
            if (i > terkecil) {
                printf(" - ");
            }
        } 
    } else {
    for (int i = terkecil; i <= terbesar; i++) {
        printf("%d %d", i, angka1 + angka2 - i);
        if (i < terbesar) {
            printf(" - ");
            }
        }
    }
    printf("\n");

    return 0;
}
