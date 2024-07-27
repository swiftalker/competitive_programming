#include <cstdio>

int main() {
    int i = 5;

    printf("Nilai awal i: %d\n", i);
    
    printf("Hasil ++i: %d\n", ++i);
    printf("Hasil setelah ++i: %d\n", i);

    i = 5;
    printf("Hasil i++: %d\n", i++);
    printf("Hasil setelah i++: %d\n", i);

    return 0;
}