#include <stdio.h>

int main() {
    int n, k;
    printf("");
    scanf("%d %d", &n, &k);

    int total = 0;

    for (int i = 1; i <= n; i++) {
        int jumlah = 0;
        for (int j = i; j >= 1; j--) {
            jumlah += j * k;
            if (j > 1) {
                printf("(%d * %d) + ", j, k);
            } else {
                printf("(%d * %d) = %d\n", j, k, jumlah);
            }
        }
        total += jumlah;
    }

    printf("%d\n", total);

    return 0;
}
