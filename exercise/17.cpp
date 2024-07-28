// Cek Perpangkatan 2
/***
 * KONSEP
 * Gunakan konsep biner terhadap perpangkatan
 * 2^0 = 1 -> 0001
 * 2^1 = 2 -> 0010
 * 2^2 = 4 -> 0100
 * 2^3 = 8 -> 1000
 * 2^4 = 16 -> 0001 0000
 * 2^5 = 32 -> 0010 0000
 * dst
 */
#include <cstdio>

int main() {
    int N;
    scanf("%d", &N);

    if (N > 0 && (N & (N-1)) == 0) {
        printf("ya\n");
    } else {
        printf("bukan\n");
    }

    return 0;
}