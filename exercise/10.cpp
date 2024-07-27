// Cek Sebuah Bilangan
#include <cstdio>

int main() {
    int number;

    scanf("%d", &number);

    if (number > 0) {
        if (number < 10) {
            printf("Satuan\n");
        } else if (number < 100) {
            printf("Puluhan\n");
        } else if (number < 1000) {
            printf("Ratusan\n");
        } else if (number < 10000) {
            printf("Ribuan\n");
        } else {
            printf("Puluhribuan\n");
        }
    }
}
